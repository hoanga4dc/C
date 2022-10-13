#include "QLGV.cpp"
#include "UI.cpp"
class control {
private:
	shared_ptr<QLGV> Q;
	shared_ptr<UI> u;
public:
	control(shared_ptr<QLGV> p, shared_ptr<UI> u1) {
		this->Q = p;
		this->u = u1;
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
			case 1: {
				system("cls");
				Q->Add_GV(u->set_inf());
				break; }
			case 2: {
				system("cls");
				cout << "nhap ID GV can xoa: "; int ID = u->getx();
				Q->Del_GV(ID);
				break; }
			case 3: {
				system("cls");
				cout << "nhap ID GV can tinh luong: "; int ID = u->getx();
				u->prompt(Q->Salary_GV(ID));
				u->prompt("\n");
				break; }
			case 4: {system("cls"); control::exit(d); break; }
			}
		}
	}
};