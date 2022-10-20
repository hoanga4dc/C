#pragma once
#include <iostream>
#include<exception>
using namespace std;
class Phone_Exception :public exception {
public:
	//const ?
	const char* notification() {
		return "SDT khong hop le! Nhap lai:\n";
	}
};