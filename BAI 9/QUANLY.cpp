#pragma once
#include"RECEPT.cpp"
#include<vector>
class QUANLY {
private:
	vector < shared_ptr<RECEPT> >v;
public:
	QUANLY(){}
	QUANLY(vector < shared_ptr<RECEPT> >v) {
		this->v = v;
	}
	vector < shared_ptr<RECEPT> > get_list_RECEPT() {
		return v;
	}

	void Add(shared_ptr<RECEPT> x) {
		v.push_back(x);
	}
	void Del(string chuho) {
		for (int i = 0; i < v.size(); i++) {
			if ((v[i]->get_pointer_gd())->get_chuho() == chuho) { v.erase(v.begin() + i); }
		}
	}
	void Fix(string ma_congto, shared_ptr<RECEPT> p) {
		for (int i = 0; i < v.size(); i++) {
			if ((v[i]->get_pointer_gd())->get_ma_congto() == ma_congto) {
				v.erase(v.begin() + i);
				v.insert(v.begin() + i, p);
			}
		}
	}
	
};
