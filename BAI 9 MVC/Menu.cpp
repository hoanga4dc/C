#pragma once
#include"QUANLY.cpp"
class menu {
private:
	shared_ptr<QUANLY> Q;
	public:
	menu(){}
	menu(shared_ptr<QUANLY> Q) {
		this->Q = Q;
		Run();
	}
	~menu(){}
		void Run() {
		
		while (true) {
			
			cout<<"them gia dinh su dung dien: chon 1\n";
			cout << "xoa gia dinh su dung dien: chon 2\n";
			cout << "chinh sua thong tin gia dinh su dung dien theo ma cong to: chon 3\n";
			cout << "Tinh tien dien cac ho gia dinh: chon 4\n";
			cout << "thoat khoi chuong trinh: chon 5\n";
			int k = 0; cin >> k;
			switch (k) {
			case 1: {
				system("cls");
				Q->Add(); break;
			}
			case 2: {
				system("cls");
				Q->Del(); break;
			}
			case 3: {
				system("cls");
				Q->Fix(); break;
			}
			case 4: {
				
				Q->display_cost(); break;
			}
			case 5: {
				exit(0); break;
			}
			}
		}
	}

};