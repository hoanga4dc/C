#pragma once
#include<iostream>
using namespace std;
#include<string>
#include"VANBAN.cpp"
class View {
public:
	string input_VB() {
		cout << "nhap van ban:\n";
		string s;
		getline(cin, s);
		return s;
	}
	void display_VB(string s) {
		cout << s;
	}
};