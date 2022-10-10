#include "UI.cpp"
#include <memory>
class student {
protected:
	string name;
	int age = 0;
	string lop;
public:
	//khoi tao
	student () {}
	student(string name, int age, string lop) {
		this->name = name;
		this->age = age;
		this->lop = lop;
	}
	//set information

	void set_name(string name) { this->name = name; }
	void set_age(int age) { this->age = age; }
	void set_lop(string lop) { this->lop = lop; }

	//get information
	string get_name() { return name; }
	int get_age() { return age; }
	string get_lop() { return lop; }

	//ham insert thong tin cua 1 hoc sinh
	void Setinf() {
		unique_ptr<UI> u;
		u->prompt("Nhap ten: "); name = u->gets();
		u->prompt("nhap tuoi: "); age = u->getx();
		u->prompt("nhap lop: "); lop = u->gets();
		u->prompt("\n-------------\n");

	}

	// get information of student
	void Getinf() {
		unique_ptr<UI> u;
		u->prompt("\nTen: "); u->prompt(name);
		u->prompt("\nTuoi: "); u->prompt(age);
		u->prompt("\nLop: "); u->prompt(lop);
	 }
	//-------------------

};