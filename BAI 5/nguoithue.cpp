#include "UI.cpp"
#include "PHONG.cpp"
#include <memory>
using namespace std;
class NGUOI {
private:
	string name;
	int age = 0;
	string SCMT;
	int so_ngaythue = 0;
	unique_ptr<PHONG> lp;
public:
	//insert information of nguoi
	void setname(string name) {
		this->name = name;
	}
	void setage(int age) {
		this->age = age;
	}
	void setso_ngaythue(int x) {
		this->so_ngaythue = x;
	}
	void setSCMT(string SCMT) {
		this->SCMT = SCMT;
	}
	
	// get information of nguoi
	string getname() {
		return name;
	}
	int getage() {
		return age;
	}
	string getSCMT() {
		return SCMT;
	}
	int getso_ngaythue() {
		return so_ngaythue;
	}
	int gettien() {
		return lp->getprice();
	}
	//them thong tin mot nguoi
	void insertnguoi() {
		unique_ptr<UI> v;
		v->prompt("Nhap ten: ");
		name = v->gets();// v->prompt("\n");
		v->prompt("Nhap tuoi: ");
		age = v->getx();// v->prompt("\n");
		v->prompt("Nhap so CMT: ");
		SCMT = v->gets();// v->prompt("\n");
		v->prompt("Nhap so ngay thue: ");
		so_ngaythue = v->getx();// v->prompt("\n");
		v->prompt("Nhap loai phong thue: A(phong loai A), B(phong loai B), C(phong loai C).");
		string phong;
		phong = v->gets();
		if (phong == "A") {
			unique_ptr<PHONG> p1(new PHONGA);
			lp = move(p1);
		}
		if (phong == "B") {
			unique_ptr<PHONG> p1(new PHONGB);
			lp = move(p1);
		}
		if (phong == "C") {
			unique_ptr<PHONG> p1(new PHONGC);
			lp = move(p1);
		}


	}
	//hien thi thong tin mot nguoi
	void display() {
		unique_ptr<UI> v;
		v->prompt("Ten: "); v->prompt(name); v->prompt("\n");
		v->prompt("Tuoi: "); v->prompt(age); v->prompt("\n");
		v->prompt("So CMT: "); v->prompt(SCMT); v->prompt("\n");
	}
};