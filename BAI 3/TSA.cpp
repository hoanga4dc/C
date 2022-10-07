#include "THISINH.cpp"
class TSA :public thisinh {
public:
	void setInf() {
		thisinh::setInf();
	}
	void display() {
		thisinh::display();
		cout << "Khoi thi A: Toan, Ly, Hoa "<< endl;
		cout << "--------------------" << endl;
	}
};