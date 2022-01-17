//============================================================================
// Name        : CrackThecCoding.cpp
// Author      : Ali Ahmed Mohamed Eltoney
// Copyright   : My solutions for cracking
//               the coding interview book
// Problem     : 1.4 One Away
//============================================================================

#include <bits/stdc++.h>
using namespace std;

bool oneReplaceAway(string a, string b) {
	int used = 0;
	for (int i = 0; i < (int) a.size(); i++) {
		if (a[i] != b[i]) {
			used++;
		}
	}
	return (used < 2);
}

bool oneRemoveAway(string a, string b) {
	int n = a.size(), m = b.size();
	int i = 0, j = 0, used = 0;
	while (i < n && j < m) {
		if (a[i] != b[j]) {
			i++;
			used++;
		}
		i++, j++;
	}
	return (used < 2);
}

bool oneAway(string a, string b) {
	int n = a.size(), m = b.size();
	if (n == m) {
		return oneReplaceAway(a, b);
	} else if (abs(n - m) == 1) {
		if (n < m) {
			return oneRemoveAway(a, b);
		} else {
			return oneRemoveAway(b, a);
		}
	}
	return 0;
}

int main() {

	cout << oneAway("pale", "ple") << endl;
	cout << oneAway("pales", "pale") << endl;
	cout << oneAway("pale", "bale") << endl;
	cout << oneAway("pale", "bake") << endl;

	return 0;
}


