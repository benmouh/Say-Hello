#define CATCH_CONFIG_MAIN

#include "../say_hello.hpp"
#include "../catch.hpp"



TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Hello::Factorial(1) == 1 );
    REQUIRE( Hello::Factorial(2) == 2 );
    REQUIRE( Hello::Factorial(3) == 6 );
    REQUIRE( Hello::Factorial(10) == 3628800 );
}

TEST_CASE("Factorials not computed", "[factorial]") {
    REQUIRE( Hello::Factorial(1) == 1);
}

TEST_CASE("Main test ", "[SayHello]") {
    REQUIRE( Hello::Factorial(1) == 1);
}