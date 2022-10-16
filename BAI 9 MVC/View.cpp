#pragma once
#include<iostream>
#include "RECEPT.cpp"
#include <vector>
class View {
public:
	string input_chuho() {
		string s;
		cout << "nhap ten chu ho: "; cin >> s;
		return s;
	}
	string input_sonha() {
		string s;
		cout << "nhap so nha: "; cin >> s;
		return s;
	}
	string input_ma_congto() {
		string s;
		cout << "nhap ma cong to: "; cin >> s;
		return s;
	}
	int input_cs_moi() {
		int s=0;
		cout << "nhap chi so moi: "; cin >> s;
		return s;
	}
	int input_cs_cu() {
		int s = 0;
		cout << "nhap chi so cu: "; cin >> s;
		return s;
	}
	shared_ptr<GIADINH> input_GD() {
		shared_ptr<GIADINH> p(new GIADINH);
		p->set_chuho(View::input_chuho());
		p->set_sonha(View::input_sonha());
		p->set_macongto(View::input_ma_congto());
		return p;
	}
	shared_ptr<RECEPT> input_RP() {
		shared_ptr<RECEPT> p(new RECEPT);
		p->set_pointer_gd(View::input_GD());
		p->set_cs_moi(View::input_cs_moi());
		p->set_cs_cu(View::input_cs_cu());
		return p;
	}
	void display_cost(shared_ptr<RECEPT> v) {
			cout << "chu ho: " << v->get_pointer_gd()->get_chuho() << endl;
			cout << "cs moi: " << v->get_cs_moi() << endl;
			cout << "cs cu: " << v->get_cs_cu() << endl;
			cout << "Tien dien thang nay: " << (v->get_cs_moi() - v->get_cs_cu()) * 5 << endl;
			cout << "----------------" << endl;
		
	}
};