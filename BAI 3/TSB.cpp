#include "THISINH.cpp"
class TSB :public thisinh {
public:
	void setInf() {
		thisinh::setInf();
	}
	void display() {
		thisinh::display();
		cout << "Khoi thi B: Toan, Hoa, Sinh " << endl;
		cout << "--------------------" << endl;
	}
};