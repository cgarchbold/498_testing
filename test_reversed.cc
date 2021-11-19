#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"

std::string reversed(const std::string &in);

TEST_CASE( "Reversing is correct for odd length" ) {
	REQUIRE( reversed("racecar") == "racecar" );
    REQUIRE( reversed("rac") == "car" );
    REQUIRE( reversed("987654321") == "123456789" );
}

TEST_CASE( "Reversing is correct for even length" ) {
	REQUIRE( reversed("bellow") == "wolleb" );
    REQUIRE( reversed("beld") == "dleb" ); 
    REQUIRE( reversed("12345678") == "87654321" );
}

TEST_CASE( "Input String is not modified"){
    std::string x = "Hello";
    std::string reversX = reversed(x);
    REQUIRE(x == "Hello");
}