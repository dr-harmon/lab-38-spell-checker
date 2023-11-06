# Lab 38: Spell Checker

In this lab, you are to write a simple spell checker class called `SpellChecker`. It should provide two public methods:

* `isInDictionary`: returns true if the given word is in the dictionary, false otherwise.
* `getSuggestions`: returns a list of correctly spelled words that are similar to a given misspelled word.

To achieve good lookup performance, store all dictionary words in a hash table. You should use the STL class `unordered_set` for this.

For the dictionary words, a list is provided in the `dictionary.txt` file. It can be loaded into memory by calling `loadDictionary`, which has already been done for you in the `SpellChecker` constructor.

To find suggestions for correctly spelled words, a good spell checker would:

* swap adjacent characters
* insert a single character between two adjacent characters
* delete a single character
* replace a character with another character
* Phonetic substitutions

For this lab, we will only find suggestions using the first option: swapping. That is, your `getSuggestions` method should return any correctly spelled words that can be formed by swapping any two adjacent characters in the input word.

Use the provided driver program in `main` to test your class, and make sure all unit tests pass.
