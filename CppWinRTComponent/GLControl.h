#pragma once

#include "GLControl.g.h"

namespace winrt::CppWinRTComponent::implementation
{
    struct GLControl : GLControlT<GLControl>
    {
        GLControl();

        void Init(int64_t hWndParent);

    private:
        bool _isInitialized;
        static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
    };
}

namespace winrt::CppWinRTComponent::factory_implementation
{
    struct GLControl : GLControlT<GLControl, implementation::GLControl>
    {
    };
}
