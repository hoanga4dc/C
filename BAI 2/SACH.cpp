#include "TAILIEU.cpp"
class SACH :public TAILIEU {
private:
	string tentg;
	int sotrang=0;
public:
	void getinf() {
		TAILIEU::setd(1);
		string s;
		int x;
		TAILIEU::getinf();
		cout << "nhap ten tg:" << endl;
		cin >> s;
		tentg = s;
		cout << "nhap so trang: " << endl;
		cin >> x;
		sotrang = x;
	}
	void display() {
		TAILIEU::display();
		cout << "ten tg: " << tentg << endl;
		cout << "so trang: " << sotrang << endl	;
		cout << "-----------------------" << endl;
	}
};