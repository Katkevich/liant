#pragma once
#include "liant/details/container_slice_impl.hpp"
#include "liant/export_macro.hpp"

#ifndef LIANT_MODULE
#include <memory>
#endif

// clang-format off
LIANT_EXPORT
// clang-format on
namespace liant {

// subset of another type-erased DI container (non-owning reference) - basically non-owning version of liant::ContainerSlice
template <typename... TInterfaces>
class ContainerView : public details::ContainerSliceImpl<details::NonOwningRef, TInterfaces...> {
public:
    using details::ContainerSliceImpl<details::NonOwningRef, TInterfaces...>::ContainerSliceImpl;
};

// subset of another type-erased DI container (non-owning reference) - basically non-owning version of liant::ContainerSliceLazy
template <typename... TInterfaces>
class ContainerViewLazy : public details::ContainerSliceImpl<details::NonOwningRefLazy, TInterfaces...> {
public:
    using details::ContainerSliceImpl<details::NonOwningRefLazy, TInterfaces...>::ContainerSliceImpl;
};
} // namespace liant