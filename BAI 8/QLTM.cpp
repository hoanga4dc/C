#include"TheMuon.cpp"
#include <vector>
class QLTM {
private:
	vector < unique_ptr <Card>> v;
	unique_ptr<UI> u;
public:
	void Add() {
		unique_ptr<Card> C(new Card);
		u->prompt("nhap ma the: "); C->set_ma(u->gets());
		u->prompt("nhap ngay muon: "); C->set_ngaymuon(u->gets());
		u->prompt("nhap ngay tra: "); C->set_ngaytra(u->gets());
		u->prompt("nhap ma sach: "); C->set_code_sach(u->gets());
		u->prompt("nhap thong tin hoc sinh:\n");
		unique_ptr<student> p2(new student);
		p2->Setinf();
		C->set_student(move(p2));
		v.push_back(move(C));
	}
	void DEL() {
		u->prompt("nhap ma the muon xoa:"); string s = u->gets();
		int d = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_ma() == s) {
				v.erase(v.begin() + i);
				d++;
				u->prompt("Da xoa thong tin the!\n-----------------\n");
			}
		}
		if (d == 0) { u->prompt("Khong ton tai ma the!\n-------------------\n"); }
	}
	void display_all() {
		int d = 0;
		for (int i = 0; i < v.size(); i++) {
			v[i]->display();
			u->prompt("\n-----------------\n");
			d++;
		}
		if (d == 0) { u->prompt("No information!\n------------------\n"); }
	}

};