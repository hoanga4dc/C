#pragma once
#include"Certificate.cpp"
#include<vector>
#include<memory>
class List_Certificate {
private:
	vector<shared_ptr<Certificate>>v;
public:
	List_Certificate(){}
	List_Certificate(vector<shared_ptr<Certificate>> v) {
		this->v = v;
	}
	vector<shared_ptr<Certificate>> get_List_Certificate() {
		return v;
	}
	void Add_List_Certificate(shared_ptr<Certificate > p) {
		v.push_back(p);
	}
	void display_List_Certificate() {
		for (int i = 0; i < v.size(); i++) {
			v[i]->display();
		}
	}
};