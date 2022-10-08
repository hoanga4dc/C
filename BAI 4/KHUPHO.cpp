#include "GIADINH.cpp"
class KHUPHO {
private:
	vector<unique_ptr<GIADINH>> v;
	UI u;
public:
	void Add_GD() {
		int d;
		unique_ptr<GIADINH> p(new GIADINH);
		u.prompt("Nhap so nha: ");
		d = u.getx();
		p->setSonha(d);
		u.prompt("Nhap so luong thanh vien trong gia dinh: ");
		d = u.getx();
		p->setNumberofGD(d);
		for (int i = 0; i < d; i++) {
			u.prompt("Them thong tin thanh vien thu: "); u.prompt(i+1); u.prompt("\n");
			p->Add_nguoi();
		}
		v.push_back(move(p));
	}
	void displayKP() {
		system("cls");
		u.prompt("Thong tin ve cac gia dinh trong khu pho:\n");
		u.prompt("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		if (v.size() == 0) { u.prompt("No information!\n"); }
		else 
			for (int i = 0; i < v.size(); i++) {
				u.prompt("Ho gia dinh thu:"); u.prompt(i + 1); u.prompt("\n");
				v[i]->Display_GD();
				u.prompt("\n-----------------------------------\n");
			}
	}
};