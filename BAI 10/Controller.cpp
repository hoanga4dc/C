#pragma once
#include "UI.cpp"
#include"VANBAN.cpp"
#include <memory>
class control {
private:
	shared_ptr<VANBAN> v;
	shared_ptr<UI> u;
public:
	control(){}
	control(shared_ptr<VANBAN> v, shared_ptr<UI> u) {
		this->v = v;
		this->u = u;
	}
	void Run() {
		u->prompt("Nhap vao mot doan van ban:\n");
		v->set_VB(u->gets());
		u->prompt(v->Count_word()); u->prompt("\n");
		u->prompt(v->Count_Aa()); u->prompt("\n");
		u->prompt(v->change());
	}

};