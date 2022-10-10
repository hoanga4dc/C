#pragma once
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
	void display_menu() {
		cout << "\nThem hoc sinh: chon 1\n";
		cout << "Hien thi hoc sinh co tuoi 20: chon 2\n";
		cout << "Hien thi hs co tuoi 23, que DN: chon 3\n";
		cout << "Thoat khoi chuong trinh: chon 4\n";
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