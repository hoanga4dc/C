#pragma once
#include<iostream>
using namespace std;
#include<string>
class UI {
public:
	string gets() {
		string s;
		getline(cin, s);
		return s;
	}
	void prompt(string s) {
		cout << s;
	}
	void prompt(int x) {
		cout << x;
	}
};