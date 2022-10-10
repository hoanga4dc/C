#include "Student.cpp"
#include <vector>
#include <memory>
class school {
private:
	vector<unique_ptr<student>> v;
	unique_ptr<UI> u;
public:
	void add() {
		
		unique_ptr<student> p(new student);
		
		u->prompt("Nhap ten:"); p->setname(u->gets());
		u->prompt("Nhap tuoi:"); p->setage(u->getx());
		u->prompt("Nhap que quan:"); p->settown(u->gets());
		u->prompt("Nhap lop:"); p->setclass_student(u->gets());
		v.push_back(move(p));
	}

	void display_hs_age20() {
		int d = 0;
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getage() == 20) { v[i]->display(); u->prompt("\n-------------------"); d++; }
		}
		if (d == 0) { u->prompt("\nNo information!"); }
	}
	
	void display_hs_age23_townDN() {
		int d = 0;
		for (int i = 0; i < v.size(); i++) {
			if ((v[i]->getage() == 23) && (v[i]->gettown() == "DN")) {
				v[i]->display();
				u->prompt("\n-------------------"); d++;
			}
		}
		if (d == 0) { u->prompt("\nNo information!"); }
	}

};