#include "QLCB.cpp"

int main() {
	QLCB QL;
	int d = 0;
	while (d == 0) {
		int x=0;
		cout << "Them can bo: chon 1" << endl;
		cout << "Tim can bo: chon 2" << endl;
		cout << "Hien thi thong tin danh sach can bo: chon 3" << endl;
		cout << "Thoat khoi chuong trinh: chon 4" << endl;
		cin >> x;
		switch (x) {
		case 1: {QL.ADD(); break; }
		case 2: {QL.FIND(); break; }
		case 3: {QL.HIENTHIDS(); break; }
		case 4: {QL.EXIT(d); break; }
		}
	}
	return 0;
}