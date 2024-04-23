#include "pch.h"
#include "GLControl.h"
#if __has_include("GLControl.g.cpp")
#include "GLControl.g.cpp"
#endif

#include <microsoft.ui.xaml.window.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

#define IDM_EXIT				105
#define IDI_WINDOWS  			107

WCHAR szTitle[] = L"AAAAAAAAAAAAAAA";
WCHAR szWindowClass[] = L"Window Class";
std::thread th;

namespace winrt::CppWinRTComponent::implementation
{
    GLControl::GLControl()
        : _isInitialized(false)
    {
        DefaultStyleKey(winrt::box_value(L"CppWinRTComponent.GLControl"));;
    }

    void GLControl::Init(int64_t hWndParent)
    {
        if (!_isInitialized)
        {
            _isInitialized = true;

            HINSTANCE hInstance = GetModuleHandle(NULL);

            WNDCLASSEXW wcex{ 0 };

            wcex.cbSize = sizeof(WNDCLASSEX);
            wcex.style = CS_HREDRAW | CS_VREDRAW;
            wcex.lpfnWndProc = WndProc;
            wcex.cbClsExtra = 0;
            wcex.cbWndExtra = 0;
            wcex.hInstance = hInstance;
            wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
            wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
            wcex.lpszClassName = szWindowClass;

            RegisterClassExW(&wcex);

            th = std::thread([]() {
                HWND hWnd = CreateWindow(
                    szWindowClass,
                    szTitle,
                    WS_POPUP,
                    0,
                    0,
                    100,
                    100,
                    NULL, //HWND(hWndParent),
                    nullptr,
                    NULL,
                    nullptr);

                ShowWindow(hWnd, TRUE);
                UpdateWindow(hWnd);

                SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 500, 500, SWP_SHOWWINDOW);

                MSG msg;
                while (GetMessage(&msg, nullptr, 0, 0))
                {
                    if (!TranslateAccelerator(msg.hwnd, NULL, &msg))
                    {
                        TranslateMessage(&msg);
                        DispatchMessage(&msg);
                    }
                }
            });
        }
    }

    LRESULT CALLBACK GLControl::WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
    {
        switch (message)
        {
        case WM_COMMAND:
        {
            int wmId = LOWORD(wParam);
            switch (wmId)
            {
            case IDM_EXIT:
                DestroyWindow(hWnd);
                break;
            default:
                return DefWindowProc(hWnd, message, wParam, lParam);
            }
        }
        break;
        case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);

            EndPaint(hWnd, &ps);
        }
        break;
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
        }
        return 0;
    }
}