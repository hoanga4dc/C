#include "TAILIEU.cpp"
class BAO :public TAILIEU {
private:
	string ngayph;
public:
	void getinf() {
		TAILIEU::setd(3);
		string s;
		TAILIEU::getinf();
		cout << "nhap ngay phat hanh:" << endl;
		cin >> s;
		ngayph = s;
			}
	void display() {
		TAILIEU::display();
		cout << "ngay phat hanh: " << ngayph << endl;
		cout << "-----------------------" << endl;
	}
};