#include "Teacher.cpp"
#include<vector>
class CBGV {
private:
	unique_ptr<UI> u;
	vector<unique_ptr<Nguoi>> v;
public:
	//insert teacher
	void Add() {
		unique_ptr<Nguoi> p(new Nguoi);
		u->prompt("Nhap ten: "); p->set_name(u->gets());
		u->prompt("Nhap tuoi: "); p->set_age(u->getx());
		u->prompt("Nhap que quan: "); p->set_town(u->gets());
		u->prompt("Nhap ID:"); p->set_ID_GV(u->getx());
		u->prompt("Nhap luong cung: "); p->set_luong_cung(u->getx());
		u->prompt("Nhap luong thuong: "); p->set_luong_thuong(u->getx());
		u->prompt("Nhap luong phat: "); p->set_luong_phat(u->getx());
		u->prompt("-----------------\n");

		//kiem tra xem ID_GV da ton tai chua, neu ton tai, yeu cau nhap lai
		int k = p->get_ID_GV();
		v.push_back(move(p));
		if (v.size() > 1) {
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->get_ID_GV() == k) {
					v.pop_back();
					u->prompt("ID GV da ton tai, yeu cau dien lai thong tin!");
					CBGV::Add();
				}
			}
		}
		
	}

	// delete teacher form ID_GV
	void DEL() {
		if (v.size() == 0) { u->prompt("Khong co GV de xoa!\n-----------------\n"); }
		else {
			int d = 0;//kiem tra xem id vua nhap co ton tai trong danh sach GV ko!
			u->prompt("\n Nhap ID GV can xoa:");
			int k = u->getx();
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->get_ID_GV() == k) {
					v.erase(v.begin() + i); d++;
				}
			}
			if (d == 0) { u->prompt("\n ID_GV vua nhap khong ton tai!\n--------------------\n"); }
		}
	}
	//tinh thu nhap thuc te cua GV
	void Tinhtien() {
		if (v.size() == 0) { u->prompt("No information!"); }
		else {
			u->prompt("Nhap ID giao vien can tinh luong: "); int k = u->getx();
			int d = 0;
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->get_ID_GV() == k) {
					d++;
					int a = v[i]->get_luong_cung() + v[i]->get_luong_thuong() - v[i]->get_luong_phat();
					v[i]->set_luong_thuc(a);
					u->prompt("\nKet qua tinh luong:"); u->prompt(v[i]->get_luong_thuc()); u->prompt("\n--------------------\n");
					break;//thoat vong lap for khi da thuc hien dc yeu cau
				}
			}
			if (d == 0) { u->prompt("ID khong ton tai!\n--------------------\n"); }
		}
	}

};
