#pragma once

#include <string>
#include <vector>

class SpellChecker {
public:
    SpellChecker();
    bool isInDictionary(const std::string& word);
    std::vector<std::string> getSuggestions(const std::string& word);
};
