#pragma once
#include<iostream>
#include"SOPHUC.cpp"
#include<memory>
using namespace std;
class View {
public:
	double get_d() {
		double x;
		cin >> x;
		return x;
	}
	double input_real() {
		double x=0;
		cout << "nhap phan thuc:";
		cin >> x;
		return x;
	}
	double input_imf() {
		double x = 0;
		cout << "nhap phan ao:";
		cin >> x;
		return x;
	}
	shared_ptr<SOPHUC> input_SOPHUC() {
		unique_ptr<SOPHUC> p(new SOPHUC);
		p->set_real(View::input_real());
		p->set_imf(View::input_imf());
		return move(p);
	}
	void display_SOPHUC(shared_ptr<SOPHUC> p) {
		cout << p->get_real() << "+" << p->get_imf() << "i"<<"\n---------------"<<endl;
	}
};