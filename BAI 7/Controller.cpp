#include "CBGV.cpp"
class control {
private:
	shared_ptr<CBGV> Q;
	unique_ptr<UI> u;
public:
	control(shared_ptr<CBGV> p) {
		this->Q = p;
	}
	void exit(int& d) { d++; }
	void Run() {
		int d = 0;
		while (d == 0) {
			u->prompt("them GV: chon 1");
			u->prompt("\nXoa GV theo ma ID: chon 2");
			u->prompt("\nTinh luong thuc linh cua GV: chon 3");
			u->prompt("\nThoat khoi chuong trinh: chon 4\n");
			short k = u->getx();
			switch (k) {
			case 1: {system("cls"); Q->Add(); break; }
			case 2: {system("cls"); Q->DEL(); break; }
			case 3: {system("cls"); Q->Tinhtien(); break; }
			case 4: {system("cls"); control::exit(d); break; }
			}
		}
	}
};