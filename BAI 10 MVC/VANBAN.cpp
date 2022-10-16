#pragma once
#include <string>
#include<iostream>
using namespace std;
class VANBAN {
private:
	string s;
public:
	VANBAN() {}
	VANBAN(string s) {
		this->s = s;
	}
	//set information
	void set_VB(string s) {
		this->s = s;
	}
	//get information
	string get_VB() {
		return s;
	}
	
};