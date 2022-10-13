#pragma once
using namespace std;
#include<string>
#include<memory>
class Nguoi {
private:
	string name;
	int age=0;
	string address;
	int ID=0;
	int luong_cung=0;
	int luong_thuong=0;
	int luong_phat=0;
	int luong_thuc = 0;
public:
	Nguoi(){}
	Nguoi(string name, int age, string address, int ID, int luong_cuong, int luong_thuong, int luong_phat, int luong_thuc) {
		this->name = name;
		this->address = address;
		this->age = age;
		this->ID = ID;
		this->luong_cung = luong_cung;
		this->luong_thuong = luong_thuong;
		this->luong_phat = luong_phat;
		this->luong_thuc = luong_thuc;
	}
	void setname(string name) {
		this->name = name;
	}
	void setage(int age) {
		this->age = age;
	}
	void setaddress(string address) {
		this->address = address;
	}
	void setID(int ID) {
		this->ID = ID;
	}
	void setluong_cung(int a) {
		this->luong_cung = a;
	}
	void setluong_thuong(int a) {
		this->luong_thuong = a;
	}
	void setluong_phat(int a) {
		this->luong_phat = a;
	}
	string getname() {
		return name;
	}
	int getage() {
		return age;
	}
	string getaddress() {
		return address;
	}
	int getID() {
		return ID;
	}
	int getluong_cung() {
		return luong_cung;
	}
	int getluong_thuong() {
		return luong_thuong;
	}
	int getluong_phat() {
		return luong_phat;
	}
};