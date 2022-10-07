#include "NHANVIEN.cpp"
#include "KYSU.cpp"
#include "CONGNHAN.cpp"
#include <vector>
#include<memory>
class QLCB {
	vector<CANBO*>v;
	
public:
	void ADD() {
		system("cls");
		cout << "Them nhan vien: chon 1" << endl;
		cout << "Them kysu: chon 2" << endl;
		cout << "Them congnhan: chon 3" << endl;
		int x=0;
		cin >> x;
		switch (x) {
		case 1: {
			CANBO* p = new NHANVIEN;
			p->Getinf();
			v.push_back(p);
			break;
		}
		case 2: {
			CANBO* p = new KYSU;
			p->Getinf();
			v.push_back(p);
			break;
		}
		case 3:
		{
			CANBO* p = new CONGNHAN;
			p->Getinf();
			v.push_back(p);
			//delete p;
			break;
		}
		}
		system("cls");
	}
	void FIND() {
		system("cls");
		string s;
		cout << "nhap ten can bo ban muon tim kiem: " << endl; cin >> s;
		cout << "Thong tin tim kiem ve can bo: " << endl;
		int d = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getname() == s) {
				v[i]->display();
				cout << "------------------------"<<endl;
				d++;
			}
		}
		if (d == 0) {
			cout << "No information!\n"<<"---------------------------" << endl;
		}
	}
	void HIENTHIDS() {
		cout << "Danh sach can bo:\n" << endl;
		if (v.size() == 0) {
			cout << "No Information!\n"<<"-----------------------" << endl;
		}
		
		else for (int i = 0; i < v.size(); i++) {
			v[i]->display();
			cout << "-------------------------" << endl;
		}
		
	}
	void EXIT(int &x) {
		x++;
	}
	~QLCB() {
		for (int i = 0; i < v.size(); i++) {
			delete v[i];
		}
		v.clear();
	}
};