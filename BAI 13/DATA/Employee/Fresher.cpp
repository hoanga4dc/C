#pragma once
#include "Employee.cpp"
class Fresher :public Employee {
private:
	string Graduation_date;
	string Graduation_rank;
	string Education;
public:
	Fresher() {}
	//set information
	void set_Graduation_date(string x) { this->Graduation_date = x; }
	void set_Graduation_rank(string s) { this->Graduation_rank = s; }
	void set_Education(string s) { this->Education = s; }
	//get information
	string get_Graduation_date() { return Graduation_date; }
	string get_Graduation_rank() { return Graduation_rank; }
	string get_Education() { return Education; }

	void display() {
		cout << "ID: " << get_ID() << endl;
		cout << "Ten Nhan vien: " << get_FullName() << endl;
		cout << "Loai nhan vien: Fresher\n";
		cout << "Ngay sinh: " << get_BirthDay() << endl;
		cout << "Dien thoai: " << get_Phone() << endl;
		cout << "Email: " << get_email() << endl;
		cout << "Ngay tot nghiep: " << Graduation_date << endl;
		cout << "Xep hang tot nghiep: " << Graduation_rank << endl;
		cout << "Truong tot nghiep: " << Education << endl;
		get_List_Cer()->display_List_Certificate();
		cout << "-----------------------\n";
	}
};