#pragma once
using namespace std;
#include <string>
class student {
protected:
	string name;
	int age = 0;
	string lop;
public:
	//khoi tao
	student () {}
	student(string name, int age, string lop) {
		this->name = name;
		this->age = age;
		this->lop = lop;
	}
	//set information

	void set_name(string name) { this->name = name; }
	void set_age(int age) { this->age = age; }
	void set_lop(string lop) { this->lop = lop; }
	
	//get information
	string get_name() { return name; }
	int get_age() { return age; }
	string get_lop() { return lop; }
};