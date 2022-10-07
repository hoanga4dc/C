#include "THISINH.cpp"
class TSC :public thisinh {
public:
	void setInf() {
		thisinh::setInf();
	}
	void display() {
		thisinh::display();
		cout << "Khoi thi C: Van, Su, Dia " << endl;
		cout << "--------------------" << endl;
	}
};