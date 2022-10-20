#pragma once
#include"Manager_Employee.cpp"
class Menu {
private:
	shared_ptr<Manager_Employee> Q;
public:
	Menu(shared_ptr<Manager_Employee> Q) { this->Q = Q; }
	void Run() {
		while (true) {
			cout << "Them nhan vien: chon 1\n";
			cout << "Xoa nhan vien: chon 2\n";
			cout << "Sua thong tin nhan vien: chon 3\n";
			cout << "Hien thi cac nhan vien Experience: chon 4\n";
			cout << "Hien thi cac nhan vien Fersher: chon 5\n";
			cout << "Hien thi cac nhan vien Intern: chon 6\n";
			cout << "Hien thi toan bo nhan vien: chon 7\n";
			cout << "Thoat khoi chuong trinh: chon 8\n";
			int k = 0;
			cin >> k;
			switch (k) {
			case 1: {system("cls"); Q->Add_Employee(); break; }
			case 2: {system("cls"); Q->Del_Employee(); break; }
			case 3: {system("cls"); Q->Fix_Employee(); break; }
			case 4: {system("cls"); Q->Display_Experience(); break; }
			case 5: {system("cls"); Q->Display_Fresher(); break; }
			case 6: {system("cls"); Q->Display_Intern(); break; }
			case 7: {system("cls"); Q->display_Employee(); break; }
			case 8: {system("cls"); exit(0); break; }
			}
		}

	}
};