#pragma once
#include"SOPHUC.cpp"
#include "View.cpp"
#include<memory>
class MT_SOPHUC {
private:
	shared_ptr<SOPHUC> sp;
	shared_ptr<View> v;
public:
	void Insert_SOPHUC() {
		cout << "nhap vao mot so phuc:\n";
		sp=v->input_SOPHUC();
	}
	void display_SOPHUC() {
		cout << "so phuc vua nhap: \n";
		v->display_SOPHUC(sp);
	}
	void Add() {
		shared_ptr<SOPHUC> p(new SOPHUC);
		shared_ptr<SOPHUC> p1(new SOPHUC);
		shared_ptr<SOPHUC> p2(new SOPHUC);
		cout << "nhap so phuc thu nhat: \n";
		p1 = v->input_SOPHUC();
		cout << "nhap so phuc thu hai: \n";
		p2 = v->input_SOPHUC();
		p->set_real(p1->get_real() + p2->get_real());
		p->set_imf(p1->get_imf() + p2->get_imf());
		v->display_SOPHUC(p);
		
	}
	void Mul() {
		shared_ptr<SOPHUC> p(new SOPHUC);
		shared_ptr<SOPHUC> p1(new SOPHUC);
		shared_ptr<SOPHUC> p2(new SOPHUC);
		cout << "nhap so phuc thu nhat: \n";
		p1 = v->input_SOPHUC();
		cout << "nhap so phuc thu hai: \n";
		p2 = v->input_SOPHUC();
		p->set_real(p1->get_real()*p2->get_real() - p1->get_imf()*p2->get_imf());
		p->set_imf(p1->get_real()*p2->get_imf()+ p1->get_imf()* p2->get_real());
		v->display_SOPHUC(p);
		
	}

};