#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#if USE_FAKE_PICO
#include "fake-pico.hpp"
#else
constexpr bool FAKE_PICO_ACTIVE = false;
#endif

#include "joybus-pio-lib.h"

TEST_CASE( "Verify fake pico active and that N64 and GC objects can be used", "[test][fake-pico]" )
{
    gc_report_t gcReport;
    gcReport.x = true;
    n64_report_t n64Report;
    n64Report.a = true;

    REQUIRE(FAKE_PICO_ACTIVE);
    REQUIRE(gcReport.x);
    REQUIRE(n64Report.a);
}
