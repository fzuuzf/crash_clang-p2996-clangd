#pragma once

#include <experimental/meta>

// start 'expand' definition
namespace __impl {
template <auto... vals>
struct replicator_type {
    template <typename F>
    constexpr void operator>>(F body) const {
        (body.template operator()<vals>(), ...);
    }
};

template <auto... vals>
replicator_type<vals...> replicator = {};
}  // namespace __impl

template <typename R>
consteval auto expand(R range) {
    std::vector<std::meta::info> args;
    for (auto r : range) {
        args.push_back(std::meta::reflect_value(r));
    }
    return substitute(^^__impl::replicator, args);
}
// end 'expand' definition



#define CRASH_CLANGD

#ifdef CRASH_CLANGD

template <class C> class template_using_expand {

static consteval auto cem() {
  std::array<uint8_t, 1> a{};
  [:expand(nonstatic_data_members_of(^^C)):];
  return a;
}

public:
    static constexpr auto interfaces{cem()};
    C m;
};


#endif
