#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <vectormath/vectormath.hpp>

TEST_CASE("Checking the sum of Rdec2D") {
    CHECK(Rdec2D{ 5.0, 4.0 } + Rdec2D{ 5.0, 6.0 } ==
        Rdec2D{ 5.0 + 5.0, 4.0 + 6.0 });
    CHECK(Rdec2D{ 25.0, 4.0 } + Rdec2D{ 5.0, 6.0 } ==
        Rdec2D{ 25.0 + 5.0, 4.0 + 6.0 });
    CHECK(Rdec2D{ 16.0, 9.0 } + Rdec2D{ 24.0, 3.0 } ==
        Rdec2D{ 16.0 + 24.0, 9.0 + 3.0 });
    CHECK(Rdec2D{ 7.0, 8.0 } + Rdec2D{ 8.0, 7.0 } ==
        Rdec2D{ 7.0 + 8.0, 8.0 + 7.0 });
    CHECK(Rdec2D{ 123.0, 567.0 } + Rdec2D{ 25.0, 47.0 } ==
        Rdec2D{ 123.0 + 25.0, 567.0 + 47.0 });
}