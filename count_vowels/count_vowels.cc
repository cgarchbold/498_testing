#include "count_vowels.h"

static bool is_always_vowel(char c)
{
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

static bool is_maybe_vowel(char c)
{
	return c == 'y' || is_always_vowel(c);
}

int count_vowels(const char *str)
{
	int n_vowels = 0;
	for (const char *curr = str; *curr != '\0'; ++curr) {
		if (is_always_vowel(*curr)) {
			++n_vowels;
		} else if (is_maybe_vowel(*curr)) {
			// FIXME: This needs to check whether the next char
			// is actually a vowel in this word, not just whether
			// it is always a vowel.
			if (!is_always_vowel(curr[1])) {
				++n_vowels;
			}
		}
	}
	return n_vowels;
}
