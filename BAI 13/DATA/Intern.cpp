#pragma once
#include "Employee.cpp"
class Intern :public Employee {
private:
	string Majors;
	int Semester = 0;
	string University_name;
public:
	Intern() {}
	//set information
	void set_Majors(string x) { this->Majors = x; }
	void set_Semester(int s) { this->Semester = s; }
	void set_University_name(string s) { this->University_name = s; }
	//get information
	string get_Majors() { return Majors; }
	int get_Semester() { return Semester; }
	string get_University_name() { return University_name; }

	void display() {
		cout << "ID: " << get_ID() << endl;
		cout << "Ten Nhan vien: " << get_FullName() << endl;
		cout << "Loai nhan vien: Intern\n";
		cout << "Ngay sinh: " << get_BirthDay() << endl;
		cout << "Dien thoai: " << get_Phone() << endl;
		cout << "Email: " << get_email() << endl;
		cout << "Chuyen nganh dang hoc: " << Majors << endl;
		cout << "Hoc ky dang hoc: " << Semester << endl;
		cout << "Truong dang hoc: " << University_name << endl;
		get_List_Cer()->display_List_Certificate();
		cout << "-----------------------\n";
	}
};