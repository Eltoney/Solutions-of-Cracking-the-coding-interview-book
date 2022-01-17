//============================================================================
// Name        : CrackThecCoding.cpp
// Author      : Ali Ahmed Mohamed Eltoney
// Copyright   : My solutions for cracking
//               the coding interview book
// Problem     : 1.2 Check Permutation
//============================================================================

#include <bits/stdc++.h>
using namespace std;

bool checkPermutation(string a, string b) {
	if (a.size() != b.size()) {
		return 0;
	}
	int n = a.size();
	vector<int> aCnt(128), bCnt(128);
	for (int i = 0; i < n; i++) {
		aCnt[(int) a[i]]++;
		bCnt[(int) b[i]]++;
	}
	for (int i = 0; i < 128; i++) {
		if (aCnt[i] != bCnt[i]) {
			return 0;
		}
	}
	return 1;
}

void checkSolution(string a, string b, bool expectedAns) {
	bool ans = checkPermutation(a, b);
	if (ans != expectedAns) {
		cout << "Test failed at: \n";
		cout << "a = " << a << '\n';
		cout << "b = " << b << '\n';
		cout << "expected: " << expectedAns << " but get: " << ans << '\n';
	} else {
		cout << "Test passed\n";
	}
}

int main() {

	checkSolution("ab", "ba", 1);
	checkSolution("a?b" , "ba?" , 1);
	checkSolution("Abc", "abc", 0);

	return 0;
}


