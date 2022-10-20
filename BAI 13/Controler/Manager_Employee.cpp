#pragma once
#include<vector>
#include"Employee.cpp"
#include"View.cpp"
class Manager_Employee {
private:
	vector<shared_ptr<Employee>>v;
	shared_ptr<View> u;
public:
	Manager_Employee() {
		shared_ptr<View> u1(new View);
		u = u1;
	}
	//add employeee
	void Add_Experinece() {
		shared_ptr<Employee> p(new Experience);
		p = u->Input_Experience(v);
		v.push_back(p);
	}
	void Add_Fresher() {
		shared_ptr<Employee> p(new Fresher);
		p = u->Input_Fresher(v);
		v.push_back(p);
	}
	void Add_Intern() {
		shared_ptr<Employee> p(new Intern);
		p = u->Input_Intern(v);
		v.push_back(p);
	}
	// Add Employee
	void Add_Employee() {
		int k = 0;
		cout << "Experience: chon 1\n";
		cout << "Fresher: chon 2\n";
		cout << "Intern: chon3\n";
		cin >> k;
		switch (k) {
		case 1: {Manager_Employee::Add_Experinece(); break; }
		case 2: {Manager_Employee::Add_Fresher(); break; }
		case 3: {Manager_Employee::Add_Intern(); break; }
		}
	}
	// Delete Employee
	void Del_Employee() {
		int k = 0;
		cout << "Nhap ID nhan vien muon xoa: ";
		cin >> k;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_ID() == k) {
				v.erase(v.begin() + i);
			}
		}
	}
	//Fix Emlpoyee
	void Fix_Employee() {
		cout << "Nhap ID nhan vien muon sua doi thong tin:";
		int k = 0;
		int d = 0;
		cin >> k;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_ID() == k) {
				v.erase(v.begin() + i);
				Manager_Employee::Add_Employee(); d++;
			}
		}
		if (d == 0) { cout << "\nMa nhan vien khong ton tai!"; }
	}
	//Display Experience
	void Display_Experience() {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_Employeee_type() == 0) {
				v[i]->display();
			}
		}
	}
	//Display Fresher
	void Display_Fresher() {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_Employeee_type() == 1) {
				v[i]->display();
			}
		}
	}
	//Display Intern
	void Display_Intern() {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_Employeee_type() == 2) {
				v[i]->display();
			}
		}
	}
	//Display All Employee
	void display_Employee() {
		for (int i = 0; i < v.size(); i++) {
			v[i]->display();
		}
	}
};
