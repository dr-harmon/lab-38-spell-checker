#pragma once

#include <string>
#include <unordered_set>
#include <vector>

class SpellChecker {
public:
    SpellChecker();
    bool isInDictionary(const std::string& word);
    std::vector<std::string> getSuggestions(const std::string& word);
private:
    std::unordered_set<std::string> dictionary;
};
