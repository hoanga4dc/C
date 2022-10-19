#pragma once
#include<iostream>
#include<string>
#include"List_Certificate.cpp"
using namespace std;

class Employee {
private:
	int ID = 0;
	string FullName;
	string BirthDay;
	string Phone;
	string email;
	short Employee_type = 0;
	static int Employee_count;
	shared_ptr<List_Certificate> List_Cer;
public:
	Employee() {}
	Employee(int ID, string FullName, string BirthDay, string Phone, string email, short Employee_type, shared_ptr<List_Certificate> List_Cer) {
		this->ID = ID;
		this->FullName = FullName;
		this->BirthDay = BirthDay;
		this->Phone = Phone;
		this->email = email;
		this->Employee_type = Employee_type;
		this->List_Cer = List_Cer;
	}
	//set infomation of Employee
	void inc_Employee_count() { Employee_count++; }
	void set_ID(int ID) { this->ID = ID; }
	void set_FullName(string FullName) { this->FullName = FullName; }
	void set_BirthDay(string BirthDay) { this->BirthDay = BirthDay; }
	void set_Phone(string phone) { this->Phone = phone; }
	void set_email(string email) { this->email = email; }
	void set_Employee_type(short type) { this->Employee_type = type; }
	void set_List_Cer(shared_ptr<List_Certificate> List_Cer) { this->List_Cer = List_Cer; }

	//get information of Employee
	short get_Employee_count() { return Employee_count; }
	int get_ID() { return ID; }
	string get_FullName() { return FullName; }
	string get_BirthDay() { return BirthDay; }
	string get_Phone() { return Phone; }
	string get_email() { return email; }
	short get_Employeee_type() { return Employee_type; }
	shared_ptr<List_Certificate> get_List_Cer() { return List_Cer; }
	//display information of Employee
	virtual void display() = 0;

};

