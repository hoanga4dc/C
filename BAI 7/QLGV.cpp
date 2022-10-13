#pragma once
#include"Teacher.cpp"
#include <vector>

class QLGV {
private:
	vector<unique_ptr<Nguoi>> v;
public:
	QLGV(){}
	QLGV(vector<unique_ptr<Nguoi>> p) {
		this->v = move(p);
	}
	void Add_GV(unique_ptr<Nguoi> p) {
		v.push_back(move(p));
	}
	void Del_GV(int ID) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getID() == ID) {
				v.erase(v.begin() + i);
			}
		}
	}
	int Salary_GV(int ID) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getID() == ID) {
				return (v[i]->getluong_cung() + v[i]->getluong_thuong() - v[i]->getluong_phat());
			}
		}
	}
};