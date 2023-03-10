#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test roll dice")
{
	int result;
	for(auto i = 0; i < 10; i++)
	{
		result = roll_dice();
		REQUIRE(result > 0);
		REQUIRE(result < 7);
	}
}