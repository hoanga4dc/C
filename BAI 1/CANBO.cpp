#pragma once
#include <iostream>
#include <string>
using namespace std;
class CANBO {
protected:
	string name;
	int age = 0;
	string gender;
	string adress;
public:
	//Set cac thuoc tinh
	virtual void Getinf() {
		string s;
		cout << "nhap ten:" << endl;
		cin >> s;
		this->name = s;
		cout << "nhap tuoi:" << endl;
		int t;
		cin >> t;
		this->age = t;
		cout << "nhap gioi tinh:" << endl;
		cin >> s;
		this->gender = s;
		cout << "nhap dia chi:" << endl;
		cin >> s;
		this->adress = s;
	}
	
	// Get cac thuoc tinh
	string getname() {
		return this->name;
	}
	
	virtual void display(){}
		
};