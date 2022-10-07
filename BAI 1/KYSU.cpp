#include "CANBO.cpp"
class KYSU :public CANBO {
private:
	string nganh;
public:
	void Getinf() {
		string s;
		CANBO::Getinf();
		cout << "nhap nganh dao tao:" << endl;
		cin >> s;
		this->nganh = s;
	}
	void display() {
		cout << "ten: " << name << endl;
		cout << "tuoi: " << age << endl;
		cout << "gioi tinh: " << gender << endl;
		cout << "dia chi: " << adress << endl;
		cout << "nganh: " << nganh << endl;
	}
};