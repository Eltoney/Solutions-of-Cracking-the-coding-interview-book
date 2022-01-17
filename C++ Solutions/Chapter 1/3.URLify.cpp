//============================================================================
// Name        : CrackThecCoding.cpp
// Author      : Ali Ahmed Mohamed Eltoney
// Copyright   : My solutions for cracking
//               the coding interview book
// Problem     : 1.3 URLify
//============================================================================

#include <bits/stdc++.h>
using namespace std;

string URLify(string str, int n) {
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (str[i] == ' ') {
			ans += "%20";
		} else {
			ans += str[i];
		}
	}
	return ans;
}

int main() {

	cout << URLify("Mr John Smith     ", 13);

	return 0;
}


