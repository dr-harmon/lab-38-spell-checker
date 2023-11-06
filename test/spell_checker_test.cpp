#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "spell_checker.h"

using namespace std;

TEST_CASE("Is in dictionary")
{
    SpellChecker checker;
    REQUIRE(checker.isInDictionary("achieve"));
    REQUIRE_FALSE(checker.isInDictionary("acheive"));
}

TEST_CASE("Get suggestions")
{
    SpellChecker checker;
    REQUIRE(checker.getSuggestions("acheive") == vector<string> {"achieve"});
    REQUIRE(checker.getSuggestions("wiht") == vector<string> {"whit", "with"});
}
