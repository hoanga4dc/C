#include"QLTM.cpp"

class control {
private:
	shared_ptr<QLTM> Q;
	unique_ptr<UI> u;
public:
	control(shared_ptr<QLTM> p) {
		this->Q = p;
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
			case 1: {system("cls"); Q->Add(); break; }
			case 2: {system("cls"); Q->DEL(); break; }
			case 3: {system("cls"); Q->display_all(); break; }
			case 4: {system("cls"); control::exit(d); break; }
			}
		}
	}

};