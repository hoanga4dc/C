#pragma once
#include <iostream>
#include<string>
using namespace std;
class thisinh {
protected:
	string sbd;
	string name;
	string address;
	int mut;
public:
	string getsbd() {
		return sbd;
	}
	virtual void setInf() {
		string s;
		int x=0;
		cout << "nhap so bao danh:" << endl;
		cin >> s;
		sbd = s;
		cout << "nhap ten:" << endl;
		cin >> s;
		name = s;
		cout << "nhap dia chi:" << endl;
		cin >> s;
		address = s;
		cout << "nhap muc uu tien:" << endl;
		cin >> x;
		mut = x;
		}
	virtual void display() {
		cout << "so bao danh: " << sbd << endl;
		cout << "ten: " << name << endl;
		cout << "dia chi: " << address << endl;
		cout << "muc uu tien: " << mut << endl;
	}
};