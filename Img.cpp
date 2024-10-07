#include "header.h"

#ifndef CRASH_CLANGD
template <class C> class InterfaceImpl {

static consteval auto count_fields() { return nonstatic_data_members_of(^^C).size(); }

static consteval auto ce_interfaces() {
  std::array<uint8_t, count_fields()> a{};
  [:expand(nonstatic_data_members_of(^^C)):];
  return a;
}

public:
    static constexpr auto interfaces{ce_interfaces()};
    C m;
};
#endif

struct Img {
    unsigned val;
};

using ImgI = template_using_expand<Img>;

struct Test {
    Test() {
	ImgI			img;
    }
} test;
