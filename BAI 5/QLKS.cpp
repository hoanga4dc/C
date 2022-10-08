#include"nguoithue.cpp"
#include <vector>
class QLKS {
	vector<unique_ptr<NGUOI>> v;
	UI* u;
public:
	void Add() {
		unique_ptr<NGUOI> p1(new NGUOI);
		p1->insertnguoi();
		v.push_back(move(p1));
	}
	void DELETE() {
		system("cls");
		if (v.size() == 0) { u->prompt("Khong co nguoi thue phong nao de xoa!\n"); }
		else {
			string s;
			u->prompt("nhap so CMT cua nguoi can xoa:"); s = u->gets();
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->getSCMT() == s) {
					v.erase(v.begin() + i);
				}
			}
		}
	}
	void Tinhtien() {
		string s;
		u->prompt("nhap so CMT cua nguoi can tinh tien:"); s = u->gets();
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getSCMT() == s) {
				u->prompt(v[i]->getso_ngaythue() * v[i]->gettien());
				u->prompt("\n");
			}
		}
	}
	void exit(int& a) { a++; }
};
	