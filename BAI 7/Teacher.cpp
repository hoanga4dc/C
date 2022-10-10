#include "UI.cpp"
#include <memory>
class Nguoi {
private:
	string name;
	int age=0;
	string town;
	int ID_GV=0;
	int luong_thuc=0;
	int luong_cung=0;
	int luong_thuong=0;
	int luong_phat=0;
public:
	//khoi tao
	Nguoi(){}
	Nguoi(string name, int age, string town, int ID_GV, int luong_thuc, int luong_cung, int luong_thuong, int luong_phat) {
		this->name = name;
		this->age = age;
		this->ID_GV = ID_GV;
		this->town = town;
		this->luong_cung = luong_cung;
		this->luong_thuc = luong_thuc;
		this->luong_thuong = luong_thuong;
		this->luong_phat = luong_phat;
	}
	
	//set information
	void set_name(string s) { this->name = s; }
	void set_age(int s) { this->age = s; }
	void set_town(string s) { this->town = s; }
	void set_ID_GV(int a) { this->ID_GV = a; }
	void set_luong_thuc(int a) { this->luong_thuc = a; }
	void set_luong_cung(int a) { this->luong_cung = a; }
	void set_luong_thuong(int a) { this->luong_thuong = a; }
	void set_luong_phat(int a) { this->luong_phat = a; }

	//get information
	string get_name() { return name; }
	int get_age() { return age; }
	string get_town() { return town; }
	int get_ID_GV() { return ID_GV; }
	int get_luong_thuc() { return luong_thuc; }
	int get_luong_cung() { return luong_cung; }
	int get_luong_thuong() { return luong_thuong; }
	int get_luong_phat() { return luong_phat; }

	//display information of teacher
	void display() {
		unique_ptr<UI> u;
		u->prompt("Ho va ten: "); u->prompt(name);
		u->prompt("Tuoi: "); u->prompt(age);
		u->prompt("ID GV: "); u->prompt(ID_GV);
		u->prompt("Que quan: "); u->prompt(town);
	}

};