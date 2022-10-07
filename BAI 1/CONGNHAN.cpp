#include "CANBO.cpp"
class CONGNHAN :public CANBO {
private:
	int level = 1;
public:
	void Getinf() {
		int s;
		CANBO::Getinf();
		cout << "nhap cap bac:" << endl;
		cin >> s;
		this->level =s;
	}
	void display() {
		cout << "ten: " << name << endl;
		cout << "tuoi: " << age << endl;
		cout << "gioi tinh: " << gender << endl;
		cout << "dia chi: " << adress << endl;
		cout << "cap bac: " <<level << endl;
	}
};