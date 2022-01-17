//============================================================================
// Name        : CrackThecCoding.cpp
// Author      : Ali Ahmed Mohamed Eltoney
// Copyright   : My solutions for cracking
//               the coding interview book
// Problem     : 1.4 Palindrome permutation
//============================================================================

#include <bits/stdc++.h>
using namespace std;

bool isPalindromPermutation(string str) {
	vector<int> cnt(128);
	for (auto x : str) {
		if (x != ' ') {
			int id = (int) x;
			cnt[id]++;
		}
	}
	int odd = 0;
	for (int i = 0; i < 128; i++) {
		if (cnt[i] % 2) {
			odd++;
		}
	}
	return (odd < 2);
}

int main() {

	return 0;
}


