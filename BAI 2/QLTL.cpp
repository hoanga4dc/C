#include"BAO.cpp"
#include"SACH.cpp"
#include"TAPCHI.cpp"
#include<vector>
class QLTL {
private:
	vector<TAILIEU*> v;
public:
	void ADD() {
		short k=0;
		cout << "them sach: chon 1" << endl;
		cout << "them tap chi: chon 2" << endl;
		cout << "them bao: chon 3" << endl;
		cin >> k;
		switch (k) {
		case 1: {
			TAILIEU* p = new SACH;
			p->getinf();
			v.push_back(p);
			break;
		}
		case 2: {
			TAILIEU* p = new TAPCHI;
			p->getinf();
			v.push_back(p);
			break;
		}
		case 3: {
			TAILIEU* p = new BAO;
			p->getinf();
			v.push_back(p);
			break;
		}
		}
		if (v.size()>1){
		for (int i = 0; i < (v.size()-1);i++) {
			if (v[i]->getcode() == v[v.size() - 1]->getcode()) 
			{
				v.pop_back();
				cout << "tai lieu vua nhap khong hop le!" << endl;
				cout << "nhap lai: " << endl;
				QLTL::ADD();
			}
		}
		}
		system("cls");
	}
	void DELETE() {
		string s;
		cout << "nhap ma tai lieu muon xoa:" << endl;
		cin >> s;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getcode() == s) {
				v.erase(v.begin()+i);
				break;
			}
		}
	}
	void HIENTHIDS() {
		cout << "Thong tin ve tai lieu: " << endl;
		cout << endl;
		if (v.size() == 0) { cout << "No information!" << endl; }
		for (int i = 0; i < v.size(); i++) {
			v[i]->display();
		}
	}
	void FIND() {
		int x=0;
		cout << "Tim kiem sach: chon 1" << endl;
		cout << "Tim kiem tap chi: chon 2" << endl;
		cout << "Tim kiem bao: chon 3" << endl;
		cin >> x;
		switch (x) {
		case 1: {
			cout << "danh sach cac loai sach: " << endl;
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->getd() == 1) {
					v[i]->display();
				}
			}
			break;
		}
		case 2: {
			cout << "danh sach cac loai tap chi: " << endl;
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->getd() == 2) {
					v[i]->display();
				}
			}
			break;
		}
		case 3: {
			cout << "danh sach cac loai bao: " << endl;
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->getd() == 3) {
					v[i]->display();
				}
			}
			break;
		}
		}
		
	}
	void EXIT(int &a) {
		a++;
	}
	~QLTL() {
		for (int i = 0; i < v.size(); i++) {
			delete v[i];
		}
		v.clear();
	}
};