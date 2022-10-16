#pragma once
#include<string>
using namespace std;
class GIADINH {
private:
	string chuho;
	string sonha;
	string ma_congto;
public:
	//constructor-----
	GIADINH(){}
	GIADINH(string chuho, string sonha, string ma_congto) {
		this->chuho = chuho;
		this->sonha = sonha;
		this->ma_congto = ma_congto;
	}
	//set infomation---
	void set_chuho(string s) { this->chuho = s; }
	void set_sonha(string s) { this->sonha = s; }
	void set_macongto(string s) { this->ma_congto = s; }

	//get information----
	string get_chuho() { return chuho; };
	string get_sonha() { return sonha; }
	string get_ma_congto() { return ma_congto; }




};
