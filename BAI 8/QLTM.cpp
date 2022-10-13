#pragma once
#include"TheMuon.cpp"
#include <vector>
class QLTM {
private:
	vector < shared_ptr <Card>> v;
	
public:
	QLTM(){}
	vector<shared_ptr<Card>> get_list_card() {
		return v;
	}
	//Add one card
	void Add(shared_ptr<Card> p) {
		v.push_back(p);			
	}
	//Delete one card with code 
	void DEL(string code_the) {
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->get_ma() == code_the) {
				v.erase(v.begin() + i);				
			}
		}
	}
};