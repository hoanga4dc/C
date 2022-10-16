#pragma once
using namespace std;
class SOPHUC {
private:
	double real;
	double imf;
public:
	SOPHUC() {}
	SOPHUC(double x, double y){
		this->real = x;
		this->imf = y;
	}
	//set imformation
	void set_real(double x) { this->real = x; }
	void set_imf(double y) { this->imf = y; }

	//get information
	double get_real() { return real; }
	double get_imf() { return imf; }

	
};