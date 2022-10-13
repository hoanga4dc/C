#include"QLTM.cpp"
#include "UI.cpp"
class control {
private:
	shared_ptr<QLTM> Q;
	shared_ptr<UI> u;
public:
	control(shared_ptr<QLTM> p, shared_ptr<UI> u) {
		this->Q = p;
		this->u = u;
	}
	void exit(int& a) { a++; }
	void Run() {
		int d = 0;
		while (d == 0) {
			u->prompt("Them the muon: chon 1");
			u->prompt("\nXoa the muon the ma the: chon 2");
			u->prompt("\nHien thi cac the muon: chon 3");
			u->prompt("\nThoat: chon 4\n");
			int k = u->getx();
			switch (k) {
			case 1: {
				system("cls"); 
				Q->Add(u->insert_card());
				break; }
			case 2: {
				system("cls"); 
				u->prompt("nhap ma so the can xoa: ");
				Q->DEL(u->gets()); 
				break; }
			case 3: {
				system("cls"); 
				u->display_list_card(Q);
				break; }
			case 4: {system("cls"); control::exit(d); break; }
			}
		}
	}

};