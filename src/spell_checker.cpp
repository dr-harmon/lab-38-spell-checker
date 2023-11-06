#include "spell_checker.h"
#include "dictionary_file.h"

using namespace std;

SpellChecker::SpellChecker()
{
    loadDictionary(0, [this](const string& line) {
        // TODO
    });
}

bool SpellChecker::isInDictionary(const string& word)
{
    // TODO
    return false;
}

vector<string> SpellChecker::getSuggestions(const string& word)
{
    // TODO
    return {};
}
