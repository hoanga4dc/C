#pragma once
#include <iostream>
#include<exception>
using namespace std;
class BirthDay_Exception :public exception {
public:
	//const ?
	const char* notification() {
		return "Ngay sinh khong hop le! Nhap lai:\n";
	}
};