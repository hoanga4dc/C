
#include "UI.cpp"
using namespace std;
class NGUOI {
private:
	string name;
	int age=0;
	string work;
	string SCMT;
public:
	//insert information of nguoi
	void setname(string name) {
		this->name = name;
	}
	void setage(int age) {
		this->age = age;
	}
	void setwork(string work) {
		this->work = work;
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
	string getwork() {
		return work;
	}
	string getSCMT() {
		return SCMT;
	}
	//them thong tin mot nguoi
	void insertnguoi() {
		unique_ptr<UI> v;
		v->prompt("Nhap ten: ");
		name = v->gets();// v->prompt("\n");
		v->prompt("Nhap tuoi: ");
		age = v->getx();// v->prompt("\n");
		v->prompt("Nhap cong viec: " );
		work = v->gets();// v->prompt("\n");
		v->prompt("Nhap so CMT: " );
		SCMT = v->gets();// v->prompt("\n");
	}
	//hien thi thong tin mot nguoi
	void display() {
		unique_ptr<UI> v;
		v->prompt("Ten: "); v->prompt(name); v->prompt("\n");
		v->prompt("Tuoi: "); v->prompt(age); v->prompt("\n");
		v->prompt("Cong viec:"); v->prompt(work); v->prompt("\n");
		v->prompt("So CMT: "); v->prompt(SCMT); v->prompt("\n");
	}
};