#pragma once
#include "Employee.cpp"
#include <vector>
#include <memory>
class Exist {
public:
	bool Exist_ID(int ID, vector<shared_ptr<Employee>> v) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_ID() == ID) {
				return true;
				break;
			}
		}
		return false;
	}
	bool Exist_Phone(string Phone, vector<shared_ptr<Employee>> v) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_Phone() == Phone) {
				return true;
				break;
			}
		}
		return false;
	}
	bool Exist_Email(string Email, vector<shared_ptr<Employee>> v) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_email() == Email) {
				return true;
				break;
			}
		}
		return false;
	}
};