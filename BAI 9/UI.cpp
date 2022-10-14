#pragma once
#include<string>
#include<iostream>
#include "GIADINH.cpp"
#include "RECEPT.cpp"
#include "QUANLY.cpp"
using namespace std;
class UI {
public:
	string gets() {
		string s;
		cin >> s;
		return s;
	}
	int getx() {
		int a = 0;
		cin >> a;
		return a;
	}
	void prompt(string s) {
		cout << s;
	}
	void prompt(int x) {
		cout << x;
	}
	//insert informtion of one family
	shared_ptr<GIADINH> insert_GD() {
		unique_ptr<GIADINH> p(new GIADINH);
		UI::prompt("Nhap ten chu ho:"); p->set_chuho(UI::gets());
		UI::prompt("nhap so nha: "); p->set_sonha(UI::gets());
		UI::prompt("nhap ma cong to: "); p->set_macongto(UI::gets());
		return move(p);
	}
	//insert information RECEPT
	shared_ptr<RECEPT> insert_RECEPT() {
		unique_ptr<RECEPT> p(new RECEPT);
		p->set_pointer_gd(UI::insert_GD());
		UI::prompt("nhap chi so moi: "); p->set_cs_moi(UI::getx());
		UI::prompt("nhap chi so cu: "); p->set_cs_cu(UI::getx());
		return move(p);
	}
	void display_cost_all(vector<shared_ptr<RECEPT>> v) {
		for (int i = 0; i < v.size(); i++) {
			UI::prompt("chu ho: "); UI::prompt(v[i]->get_pointer_gd()->get_chuho());
			UI::prompt("\ntien dien thang nay: "); UI::prompt(v[i]->get_cost());
			UI::prompt("\n");
		}
	}

};