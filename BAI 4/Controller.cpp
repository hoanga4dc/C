#include "KHUPHO.cpp"
class Controller {
private:
	UI* u;
	KHUPHO* k;
public:
	Controller(KHUPHO* _k) {
		//u = _u;
		k = _k;
		Run();
		Show();
	}
	void Run() {
		int d=0;
		u->prompt("Nhap so so luong ho gia dinh can them:\n");
		d = u->getx();
		for (int i = 0; i < d; i++) {
			u->prompt("Nhap thong tin ve ho gia dinh thu "); u->prompt(i+1); u->prompt("\n");
			k->Add_GD();
		}
	}
	void Show() {
		k->displayKP();
	}
};