// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_Interactions_2_H
#define WINRT_Microsoft_UI_Composition_Interactions_2_H
#include "winrt/impl/Microsoft.UI.Composition.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Microsoft.UI.Composition.Interactions.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::Interactions
{
    struct WINRT_IMPL_EMPTY_BASES CompositionConditionalValue : winrt::Microsoft::UI::Composition::Interactions::ICompositionConditionalValue,
        impl::base<CompositionConditionalValue, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<CompositionConditionalValue, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        CompositionConditionalValue(std::nullptr_t) noexcept {}
        CompositionConditionalValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::ICompositionConditionalValue(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionConditionalValue, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionConditionalValue, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES CompositionInteractionSourceCollection : winrt::Microsoft::UI::Composition::Interactions::ICompositionInteractionSourceCollection,
        impl::base<CompositionInteractionSourceCollection, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<CompositionInteractionSourceCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource>, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        CompositionInteractionSourceCollection(std::nullptr_t) noexcept {}
        CompositionInteractionSourceCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::ICompositionInteractionSourceCollection(ptr, take_ownership_from_abi) {}
        using impl::consume_t<CompositionInteractionSourceCollection, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<CompositionInteractionSourceCollection, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionSourceConfiguration : winrt::Microsoft::UI::Composition::Interactions::IInteractionSourceConfiguration,
        impl::base<InteractionSourceConfiguration, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionSourceConfiguration, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionSourceConfiguration(std::nullptr_t) noexcept {}
        InteractionSourceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionSourceConfiguration(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionSourceConfiguration, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionSourceConfiguration, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTracker : winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker,
        impl::base<InteractionTracker, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTracker, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker2, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker3, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker4, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker5, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTracker(std::nullptr_t) noexcept {}
        InteractionTracker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTracker, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTracker, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        using winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker::TryUpdatePosition;
        using impl::consume_t<InteractionTracker, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker4>::TryUpdatePosition;
        using impl::consume_t<InteractionTracker, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker5>::TryUpdatePosition;
        using winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker::TryUpdatePositionBy;
        using impl::consume_t<InteractionTracker, winrt::Microsoft::UI::Composition::Interactions::IInteractionTracker4>::TryUpdatePositionBy;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
        static auto CreateWithOwner(winrt::Microsoft::UI::Composition::Compositor const& compositor, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerOwner const& owner);
        static auto SetBindingMode(winrt::Microsoft::UI::Composition::Interactions::InteractionTracker const& boundTracker1, winrt::Microsoft::UI::Composition::Interactions::InteractionTracker const& boundTracker2, winrt::Microsoft::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode);
        static auto GetBindingMode(winrt::Microsoft::UI::Composition::Interactions::InteractionTracker const& boundTracker1, winrt::Microsoft::UI::Composition::Interactions::InteractionTracker const& boundTracker2);
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerCustomAnimationStateEnteredArgs : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,
        impl::require<InteractionTrackerCustomAnimationStateEnteredArgs, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        InteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerCustomAnimationStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerIdleStateEnteredArgs : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,
        impl::require<InteractionTrackerIdleStateEnteredArgs, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        InteractionTrackerIdleStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerIdleStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerInertiaModifier : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaModifier,
        impl::base<InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaModifier(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaModifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaModifier(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerInertiaMotion : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaMotion,
        impl::base<InteractionTrackerInertiaMotion, winrt::Microsoft::UI::Composition::Interactions::InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaMotion, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaMotion(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaMotion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaMotion(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTrackerInertiaMotion, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTrackerInertiaMotion, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerInertiaNaturalMotion : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion,
        impl::base<InteractionTrackerInertiaNaturalMotion, winrt::Microsoft::UI::Composition::Interactions::InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaNaturalMotion, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaNaturalMotion(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaNaturalMotion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTrackerInertiaNaturalMotion, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTrackerInertiaNaturalMotion, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerInertiaRestingValue : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue,
        impl::base<InteractionTrackerInertiaRestingValue, winrt::Microsoft::UI::Composition::Interactions::InteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaRestingValue, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaRestingValue(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaRestingValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTrackerInertiaRestingValue, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTrackerInertiaRestingValue, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerInertiaStateEnteredArgs : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,
        impl::require<InteractionTrackerInertiaStateEnteredArgs, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        InteractionTrackerInertiaStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerInteractingStateEnteredArgs : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,
        impl::require<InteractionTrackerInteractingStateEnteredArgs, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        InteractionTrackerInteractingStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerInteractingStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerRequestIgnoredArgs : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs
    {
        InteractionTrackerRequestIgnoredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerRequestIgnoredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerValuesChangedArgs : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs
    {
        InteractionTrackerValuesChangedArgs(std::nullptr_t) noexcept {}
        InteractionTrackerValuesChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerVector2InertiaModifier : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier,
        impl::base<InteractionTrackerVector2InertiaModifier, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerVector2InertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTrackerVector2InertiaModifier(std::nullptr_t) noexcept {}
        InteractionTrackerVector2InertiaModifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTrackerVector2InertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTrackerVector2InertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES InteractionTrackerVector2InertiaNaturalMotion : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion,
        impl::base<InteractionTrackerVector2InertiaNaturalMotion, winrt::Microsoft::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerVector2InertiaNaturalMotion, winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        InteractionTrackerVector2InertiaNaturalMotion(std::nullptr_t) noexcept {}
        InteractionTrackerVector2InertiaNaturalMotion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion(ptr, take_ownership_from_abi) {}
        using impl::consume_t<InteractionTrackerVector2InertiaNaturalMotion, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<InteractionTrackerVector2InertiaNaturalMotion, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES VisualInteractionSource : winrt::Microsoft::UI::Composition::Interactions::IVisualInteractionSource,
        impl::base<VisualInteractionSource, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<VisualInteractionSource, winrt::Microsoft::UI::Composition::Interactions::IVisualInteractionSource2, winrt::Microsoft::UI::Composition::Interactions::IVisualInteractionSource3, winrt::Microsoft::UI::Composition::Interactions::ICompositionInteractionSource, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        VisualInteractionSource(std::nullptr_t) noexcept {}
        VisualInteractionSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Interactions::IVisualInteractionSource(ptr, take_ownership_from_abi) {}
        using impl::consume_t<VisualInteractionSource, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<VisualInteractionSource, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Visual const& source);
        static auto CreateFromIVisualElement(winrt::Microsoft::UI::Composition::IVisualElement const& source);
    };
}
#endif
