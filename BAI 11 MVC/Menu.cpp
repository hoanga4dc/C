#pragma once
#include"METHOD_SOPHUC.cpp"
class menu {
private:
	shared_ptr<MT_SOPHUC> Q;
public:
	menu() {
		 shared_ptr<MT_SOPHUC> q(new MT_SOPHUC);
		 Q = q;
		Run();
	}
	void Run() {
		while (true){
			cout << "nhap vao 1 so phuc: chon 1";
			cout << "\nhien thi cac so phuc da nhap: chon 2";
			cout << "\ncong 2 so phuc: chon 3";
			cout << "\nnhan 2 so phuc: chon 4\n";
			int k = 0;
			cin >> k;
			switch (k) {
			case 1: {
				system("cls");
				Q->Insert_SOPHUC();
				break;
			}
			case 2: {
				system("cls");
				Q->display_SOPHUC();				
				break;
			}
			case 3: {
				Q->Add();
				break;
			}
			case 4: {
				system("cls");
				Q->Mul();
				break;
			}
			}
		}
	}
};