#include "spell_checker.h"

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	SpellChecker spellChecker;
	string word;

	cout << "Enter a word: ";
	cin >> word;

	if (spellChecker.isInDictionary(word)) {
		cout << "Correctly spelled!" << endl;
	} else {
		auto suggestions = spellChecker.getSuggestions(word);
		if (suggestions.empty()) {
			cout << "No suggestions found." << endl;
		} else {
			cout << "Did you mean:" << endl;
			for (const auto& suggestion : suggestions) {
				cout << "  " << suggestion << endl;
			}
		}
	}

	return EXIT_SUCCESS;
}
