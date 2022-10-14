#pragma once
#include"QUANLY.cpp"
#include"UI.cpp"
class control {
private:
	shared_ptr<QUANLY> Q;
	shared_ptr<UI> u;
public:
	control(){}
	control(shared_ptr<QUANLY> Q, shared_ptr<UI> u) {
		this->Q = Q;
		this->u = u;
	}
	void exit(int& a) { a++; }
	void Run() {
		int d = 0;
		while (d == 0) {
			
			u->prompt("them gia dinh su dung dien: chon 1\n");
			u->prompt("xoa gia dinh su dung dien: chon 2\n");
			u->prompt("chinh sua thong tin gia dinh su dung dien theo ma cong to: chon 3\n");
			u->prompt("Tinh tien dien cac ho gia dinh: chon 4\n");
			u->prompt("thoat khoi chuong trinh: chon 5\n");
			int k = u->getx();
			switch (k) {
			case 1: {
				system("cls");
				Q->Add(u->insert_RECEPT()); break;
			}
			case 2: {
				system("cls");
				u->prompt("nhap ten chu ho cua GD muon xoa:");
				Q->Del(u->gets()); break;
			}
			case 3: {
				system("cls");
				u->prompt("nhap ma cong to cua GD can sua doi thong tin:");
				string x = u->gets();
				u->prompt("nhap lai thong tin:");
				Q->Fix(x, u->insert_RECEPT()); break;
			}
			case 4: {
				u->prompt("thong tin cac chu ho va tien dien thang nay:\n");
				u->display_cost_all(Q->get_list_RECEPT()); break;
			}
			case 5: {
				control::exit(d); break;
			}
			}
		}
	}

};