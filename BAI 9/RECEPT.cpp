#pragma once
#include "GIADINH.cpp"
#include <memory>
class RECEPT {
private:
	shared_ptr<GIADINH> gd;
	int cs_moi = 0;
	int cs_cu=0;
	int cost=0;
public:
	//constructor
	RECEPT() {}
	RECEPT(shared_ptr<GIADINH>s, int a, int b) {
		this->gd = s;
		this->cs_moi = a;
		this->cs_cu = b;
	}
	//set information
	void set_pointer_gd(shared_ptr<GIADINH>s) {
		this->gd = s;
	}
	void set_cs_moi(int a) { this->cs_moi = a; }
	void set_cs_cu(int a) { this->cs_cu = a; }
	//get information
	shared_ptr<GIADINH> get_pointer_gd() { return gd; }
	int get_cs_moi() { return cs_moi; }
	int get_cs_cu() { return cs_cu; }
	int get_cost() { return (cs_moi - cs_cu) * 5; }
};