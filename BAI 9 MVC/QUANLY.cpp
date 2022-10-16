#pragma once
#include"RECEPT.cpp"
#include "View.cpp"
class QUANLY {
private:
	vector < shared_ptr<RECEPT> >v;
	shared_ptr<View> u;
public:
	QUANLY(){}
	QUANLY(vector < shared_ptr<RECEPT> >v, shared_ptr<View> u) {
		this->v = v;
		this->u = u;
	}
	vector < shared_ptr<RECEPT> > get_list_RECEPT() {
		return v;
	}

	void Add() {
		v.push_back(u->input_RP());
	}
	void Del() {
		string s;
		cout << "nhap ten chu ho GD muon xoa:\n";
		cin >> s;
		for (int i = 0; i < v.size(); i++) {
			if ((v[i]->get_pointer_gd())->get_chuho() == s) { v.erase(v.begin() + i); }
		}
	}
	void Fix() {
		cout << "nhap ma cong to: \n";
		string ma_congto; cin >> ma_congto;
		cout << "chinh sua thong tin:\n";
		shared_ptr<RECEPT> p(new RECEPT);
		p = u->input_RP();
		for (int i = 0; i < v.size(); i++) {
			if ((v[i]->get_pointer_gd())->get_ma_congto() == ma_congto) {
				v.erase(v.begin() + i);
				v.insert(v.begin() + i, p);
			}
		}
	}
	void display_cost() {
		cout << "thong tin tien dien thang nay cua cac ho GD:\n";
		for (int i = 0; i < v.size(); i++) {
			u->display_cost(v[i]);
		}
	}
	
};
