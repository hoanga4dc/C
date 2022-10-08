#include"QLKS.cpp"

class Control {
private:
	QLKS *Q;
public:
	Control(QLKS* _Q) {
		this->Q = _Q;
	}
	void Run() {
		int d = 0;
		while(d==0){
		UI u;
		u.prompt("Them khach thue phong: chon 1\n");
		u.prompt("Xoa khach thue phong: chon 2\n");
		u.prompt("Tinh tien thue phong cua khach: chon 3\n");
		u.prompt("Thoat: chon 4\n");
		int x = 0;
		x = u.getx();
		switch (x) {
		case 1: {system("cls"); Q->Add(); break; }
		case 2: {system("cls"); Q->DELETE(); break; }
		case 3: {system("cls"); Q->Tinhtien(); break; }
		case 4: {system("cls"); Q->exit(d); };
		}
		}
	}
};