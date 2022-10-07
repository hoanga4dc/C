#pragma once
#include <iostream>
#include <string>
using namespace std;
class TAILIEU {
private:
	short dau=0;
	string code;
	string nxb;
	string sbph;
public:
	
	short getd() {
		return dau;
	}
	void setd(short x) {
		this->dau = x;
	}
	string getcode() {
		return code;
	}
	virtual void getinf() {
		string s;
		cout << "nhap ma tai lieu: " << endl;
		cin >> s;
		code = s;
		cout << "nhap nha xuat ban: " << endl;
		cin >> s;
		nxb = s;
		cout << "nhap so ban phat hanh: " << endl;
		cin >> s;
		sbph = s;
	}
	virtual void display() {
		cout << "ma tai lieu: " << code<<endl;
		cout << "nha xuat ban: " <<nxb<< endl;
		cout << "so ban phat hanh: " <<sbph<< endl;
		
	}
};