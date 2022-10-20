#pragma once
#include <iostream>
#include<exception>
using namespace std;
class Email_Exception :public exception {
public:
	//const ?
	const char* notification() {
		return "Email khong hop le! Nhap lai:\n";
	}
};