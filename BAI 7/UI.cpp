#pragma once
#include <iostream>
#include "Teacher.cpp"
class UI {
public:
	string gets() {
		string s;
		cin >> s;
		return s;
	}
	int getx() {
		int a=0;
		cin >> a;
		return a;
	}
	void prompt(string s) {
		cout << s;
	}
	void prompt(int x) {
		cout << x;
	}
	unique_ptr<Nguoi> set_inf() {
		unique_ptr<Nguoi> p(new Nguoi);
		cout << "nhap ten: "; p->setname(UI::gets());
		cout << "nhap tuoi: "; p->setage(UI::getx());
		cout << "nhap dia chi: "; p->setaddress(UI::gets());
		cout << "nhap ID: "; p->setID(UI::getx());
		cout << "nhap luong cung: "; p->setluong_cung(UI::getx());
		cout << "nhap luong thuong: "; p->setluong_thuong(UI::getx());
		cout << "nhap luong phat: "; p->setluong_phat(UI::getx());
		return move(p);
	}
};