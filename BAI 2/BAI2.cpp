#include"QLTL.cpp"
int main() {
	QLTL Q;
	int a = 0;
	while (a == 0) {
		int x = 0;
		cout << "Them tai lieu: chon 1" << endl;
		cout << "Xoa tai lieu theo ma: chon 2" << endl;
		cout << "Hien thi thong tin tai lieu: chon 3" << endl;
		cout << "Tim kiem tai lieu theo loai: chon 4" << endl;
		cout << "Thoat khoi chuong trinh: chon 5" << endl;
		cin >> x;
		switch (x) {
		case 1: {
			system("cls");
			Q.ADD();
			break;
		}
		case 2: {
			system("cls");
			Q.DELETE();
			break;
		}
		case 3: {
			system("cls");
			Q.HIENTHIDS();
			break;
		}
		case 4: {
			system("cls");
			Q.FIND();
			break;
		}
		case 5: {
			system("cls");
			Q.EXIT(a);
			break;
		}
		}
	}
	return 0;
}