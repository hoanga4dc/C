#include "TAILIEU.cpp"
class TAPCHI :public TAILIEU {
private:
	string soph;
	int thangph=0;
public:
	void getinf() {
		TAILIEU::setd(2);
		string s;
		int x;
		TAILIEU::getinf();
		cout << "nhap so phat hanh:" << endl;
		cin >> s;
		soph = s;
		cout << "nhap thang phat hanh: " << endl;
		cin >> x;
		thangph = x;
	}
	void display() {
		TAILIEU::display();
		cout << "so phat hanh: " << soph << endl;
		cout << "thang phat hanh: " << thangph << endl;
		cout << "-----------------------" << endl;
	}
};