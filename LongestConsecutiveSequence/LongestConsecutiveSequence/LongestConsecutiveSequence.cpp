// LongestConsecutiveSequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"LongestConsecutiveSequence.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.clear(), cin.ignore();
	vector<int> Numbers(n);
	for (int i = 0; i < n; cin >> Numbers[i++]);
	longestConsecutiveSequence LCS;
	cout << LCS.longestConsecutive(Numbers) << '\n';
	cout << clock() / double(CLOCKS_PER_SEC) << '\n';
	exit(0);
    return 0;
}

