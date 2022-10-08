#pragma once;
#include<iostream>
#include <string>
using namespace std;
class UI {
public:
	void prompt(string s) {
		cout << s;
	}
	void prompt(int x) {
		cout << x;
	}
	string gets() {
		string s;
		cin >> s;
		return s;
	}
	int getx() {
		int x;
		cin >> x;
		return x;
	}
};