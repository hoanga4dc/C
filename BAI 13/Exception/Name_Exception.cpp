#pragma once
#include <iostream>
#include<exception>
using namespace std;
class Name_Exception :public exception {
public:
	//const ?
	const char* notification() {
		return "Ten khong hop le! Nhap lai:\n";
	}
};