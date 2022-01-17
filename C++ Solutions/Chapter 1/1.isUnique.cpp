//============================================================================
// Name        : CrackThecCoding.cpp
// Author      : Ali Ahmed Mohamed Eltoney
// Copyright   : My solutions for cracking
//               the coding interview book
// Problem     : 1.1 IsUnique
//============================================================================

#include <bits/stdc++.h>
using namespace std;

bool isUnique(string str) {
	if (str.size() > 128) {
		return 0;
	}
	vector<bool> found(129);
	int n = str.size();
	for (int i = 0; i < n; i++) {
		int ascii = (int) str[i];
		if (found[ascii]) {
			return 0;
		}
		found[ascii] = 1;
	}
	return 1;
}

bool isUniqueAdditional(string str) {
	sort(str.begin(), str.end());
	int n = str.size();
	for (int i = 1; i < n; i++) {
		if (str[i] == str[i - 1]) {
			return 0;
		}
	}
	return 1;
}

void checkSolution(string str, bool ans) {
	bool x = isUnique(str);
	if (x == ans) {
		cout << "passed\n";
	} else {
		cout << "error at case: " << str << '\n';
		cout << "expected: " << ans << "get: " << x << '\n';
	}
}

void checkSolutionAdditional(string str, bool ans) {
	bool x = isUniqueAdditional(str);
	if (x == ans) {
		cout << "passed\n";
	} else {
		cout << "error at case: " << str << '\n';
		cout << "expected: " << ans << "get: " << x << '\n';
	}
}
int main() {

	checkSolution("Hello", 0);
	checkSolution("a", 1);
	checkSolution("abc", 1);
	checkSolution("abcdea", 0);
	checkSolution("abadef", 0);

	checkSolutionAdditional("Hello", 0);
	checkSolutionAdditional("a", 1);
	checkSolutionAdditional("abc", 1);
	checkSolutionAdditional("abcdea", 0);
	checkSolutionAdditional("abadef", 0);

	return 0;
}

