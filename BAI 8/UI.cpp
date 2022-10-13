#pragma once
#include<iostream>
#include "Student.cpp"
#include "TheMuon.cpp"
#include "QLTM.cpp"
#include <memory>
using namespace std;
class UI {
public:
	UI(){}
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
	//insert information of one student
	shared_ptr<student> insert_student() {
		shared_ptr<student> p(new student);
		UI::prompt("nhap ten: "); p->set_name(UI::gets());
		UI::prompt("nhap tuoi: "); p->set_age(UI::getx());
		UI::prompt("nhap lop: "); p->set_lop(UI::gets());
		return move(p);
	}
	//display information of one student
	void display_student(shared_ptr<student> p) {
		UI::prompt("ten: "); UI::prompt(p->get_name());
		UI::prompt("tuoi: "); UI::prompt(p->get_age());
		UI::prompt("lop: "); UI::prompt(p->get_lop());
	}
	//insert information of one card
	shared_ptr<Card> insert_card() {
		unique_ptr<Card> p(new Card);		
		UI::prompt("Ma the: "); p->set_ma(UI::gets());
		UI::prompt("Ngay muon: "); p->set_ngaymuon(UI::gets());
		UI::prompt("Ngay tra: "); p->set_ngaytra(UI::gets());
		UI::prompt("Code sach: "); p->set_code_sach(UI::gets());
		UI::prompt("Nhap thong tin sinh vien:\n"); p->set_student(UI::insert_student());
		return move(p);
	}
	//display information of one card
	void display_card(shared_ptr<Card> p) {
		UI::prompt("Ma the: "); UI::prompt(p->get_ma());
		UI::prompt("Ngay muon: "); UI::prompt(p->get_ngaymuon());
		UI::prompt("Ngay tra: "); UI::prompt(p->get_ngaytra());
		UI::prompt("Thong tin sinh vien:\n"); 
		UI::display_student(p->get_student());
		UI::prompt("\n----------------\n");
	}
	//dislay informtion of list card
	void display_list_card(shared_ptr<QLTM> p) {
		vector<shared_ptr<Card>>v=p->get_list_card();
		for (int i = 0; i < v.size(); i++) {
			UI::display_card(v[i]);
		}
	}

};