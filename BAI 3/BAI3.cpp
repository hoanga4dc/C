#include "QLTS.cpp"
int main() {
	QLTS Q;
	int a = 0;
	while (a == 0) {
		int k = 0;
		cout << "1. Them thi sinh" << endl;
		cout << "2. Hien thi thong tin thi sinh" << endl;
		cout << "3. Tim kiem thi sinh theo so bao danh" << endl;
		cout << "4. Thoat khoi chuong trinh" << endl;
		cin >> k;
		switch (k) {
		case 1: {system("cls"); Q.ADD(); break; }
		case 2: {system("cls"); Q.HIENTHI(); break; }
		case 3: {system("cls"); Q.FIND(); break; }
		case 4: {system("cls"); Q.EXIT(a); break; }
		}
	}
	return 0;
}