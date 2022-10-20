#pragma once
#include "Employee.cpp"
class Experience :public Employee {
private:
	int ExpInYear = 0;
	string ProSkill;
public:
	Experience() {}
	//set information
	void set_ExpInYear(int x) { this->ExpInYear = x; }
	void set_ProSkill(string s) { this->ProSkill = s; }
	//get information
	int get_ExpInYear() { return ExpInYear; }
	string get_ProSkill() { return ProSkill; }

	void display() {
		cout << "ID: " << get_ID() << endl;
		cout << "Ten Nhan vien: " << get_FullName() << endl;
		cout << "Loai nhan vien: Experience\n";
		cout << "Ngay sinh: " << get_BirthDay() << endl;
		cout << "Dien thoai: " << get_Phone() << endl;
		cout << "Email: " << get_email() << endl;
		cout << "So nam kinh nghiem: " << ExpInYear << endl;
		cout << "ProSkill: " << ProSkill << endl;
		cout << "Cac loai bang cap:\n";
		get_List_Cer()->display_List_Certificate();
		cout << "-----------------------\n";
	}
};