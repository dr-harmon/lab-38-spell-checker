#include "spell_checker.h"
#include "dictionary_file.h"

#include <algorithm>

using namespace std;

SpellChecker::SpellChecker()
{
    loadDictionary(0, [this](const string& line) {
        dictionary.insert(line);
    });
}

bool SpellChecker::isInDictionary(const string& word)
{
    return dictionary.count(word) > 0;
}

vector<string> SpellChecker::getSuggestions(const string& word)
{
    vector<string> suggestions;
    string suggestion = word;

    for (int i = 0; i < word.length() - 1; i++) {
        swap(suggestion[i], suggestion[i + 1]);
        if (isInDictionary(suggestion)) {
            suggestions.push_back(suggestion);
        }
        swap(suggestion[i + 1], suggestion[i]);
    }

    return suggestions;
}
