#include"TSA.cpp"
#include"TSB.cpp"
#include"TSC.cpp"
#include<vector>
class QLTS {
private:
	vector<thisinh*> v;
public:
	void ADD() {
		system("cls");
		int x = 0;
		cout << "1. Them thi sinh khoi A" << endl;
		cout << "2. Them thi sinh khoi B" << endl;
		cout << "3. Them thi sinh khoi C" << endl;
		cin >> x;
		switch (x) {
		case 1: {
			thisinh* p = new TSA;
			p->setInf();
			v.push_back(p);
			break;
		}
		case 2: {
			thisinh* p = new TSB;
			p->setInf();
			v.push_back(p); break;
		}
		case 3: {
			thisinh* p = new TSC;
			p->setInf();
			v.push_back(p); break;
		}
		}
	}
	void HIENTHI() {
		cout << "Thong tin ve cac thi sinh: " << endl << endl;
		for (int i = 0; i < v.size(); i++) {
			v[i]->display();
		}
	}
	void FIND() {
		string s;
		cout << "nhap so bao danh: " << endl;
		cin >> s;
		cout << "Thong tin tim kiem:" << endl;
		int d = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getsbd() == s) {
				v[i]->display();
				++d;
			}
		}
		if (d == 0) { cout << "No Information!" << endl; }

	}
	void EXIT(int& a) {
		a++;
	}
};
