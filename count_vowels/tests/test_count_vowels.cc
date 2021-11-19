#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"
#include "../count_vowels.h"

TEST_CASE( "An empty string has no vowels" ) {
	REQUIRE( count_vowels("") == 0 );
}

TEST_CASE( "Normal vowels are counted" ) {
	REQUIRE( count_vowels("aeiou") == 5 );
	REQUIRE( count_vowels("aeiouaeiou") == 10 );
	REQUIRE( count_vowels("hello") == 2 );
}

TEST_CASE( "Strings without vowels" ) {
	REQUIRE( count_vowels("WC") == 0 );
	REQUIRE( count_vowels("strchr") == 0 );
	REQUIRE( count_vowels("@#!%$*") == 0 );
}

TEST_CASE( "Strings where y is a vowel" ) {
	REQUIRE( count_vowels("ypres") == 2 );
	REQUIRE( count_vowels("y") == 1 );
	REQUIRE( count_vowels("play") == 2 );
}

TEST_CASE( "Strings where y is not a vowel" ) {
	REQUIRE( count_vowels("you") == 2 );
	REQUIRE( count_vowels("froyo") == 2 );
	REQUIRE( count_vowels("player") == 2 );
}

TEST_CASE( "Strings where y is both" ) {
	REQUIRE( count_vowels("playyard") == 3 );
	REQUIRE( count_vowels("yay") == 2 );
	REQUIRE( count_vowels("heyy") == 2 );
}

TEST_CASE( "count_vowels does not mutate its argument" ) {
	char str[] = "hello";
	(void) count_vowels(str);
	REQUIRE( std::string(str) == "hello" );
}
