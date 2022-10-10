#include "UI.cpp"
#include <memory>
class student {
private:
	string name;
	int age=0;
	string town;
	string class_student;
public:
	//ham khoi tao
	student (){}
	student(string name, int age, string town, string class_student) {
		this->name = name;
		this->age = age;
		this->town = town;
		this->class_student = class_student;
	}

	//set information
	void setname(string name) { this->name = name; }
	void setage(int age) { this->age = age; }
	void settown(string town) { this->town = town; }
	void setclass_student(string class_student) { this->class_student = class_student; }

	//get information
	string getname() { return this->name; }
	int getage() { return this->age; }
	string gettown() { return this->town; }
	string getclass_student() { return this->class_student; }

	//hien thi thong tin cua mot hoc sinh
	void display() {
		unique_ptr<UI> u;
		u->prompt("\nTen hoc sinh: "); u->prompt(name);
		u->prompt("\nTuoi: "); u->prompt(age);
		u->prompt("\nQue quan: "); u->prompt(town);
		u->prompt("\nLop: "); u->prompt(class_student);
	}
};