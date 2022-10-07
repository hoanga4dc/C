#include "CANBO.cpp"
class NHANVIEN :public CANBO {
private:
	string cv;
public:
	void Getinf() {
		string s;
		CANBO::Getinf();
		cout << "nhap nhiem vu:" << endl;
		cin >> s;
		this->cv = s;
	}
	void display() {
		cout << "ten: " << name << endl;
		cout << "tuoi: " << age << endl;
		cout << "gioi tinh: " << gender << endl;
		cout << "dia chi: " << adress << endl;
		cout << "nhiem vu: " << cv << endl;
	}
};