#pragma once
#include "Student.cpp"
#include <memory>
class Card {
private:

	string ma;
	string ngaymuon;
	string ngaytra;
	string code_sach;
	shared_ptr<student> p;
public:
	//khoi tao
	Card(){}
	Card(string ma, string ngaymuon, string ngaytra, string code_sach, shared_ptr<student> p1) {
		this->ma = ma;
		this->ngaymuon = ngaymuon;
		this->ngaytra = ngaytra;
		this->code_sach = code_sach;
		this->p = p1;
	}

	// set information
	void set_ma(string ma) { this->ma = ma; }
	void set_ngaymuon(string s) { this->ngaymuon = s; }
	void set_ngaytra(string s) { this->ngaytra = s; }
	void set_code_sach(string s) { this->code_sach = s; }
	void set_student(shared_ptr<student> p1) { this->p = p1; }

	// get information
	string get_ma() { return ma; }
	string get_ngaymuon() { return ngaymuon; }
	string get_ngaytra() { return ngaytra; }
	string get_codesach() { return code_sach; }
	shared_ptr<student> get_student() { return p; }

};