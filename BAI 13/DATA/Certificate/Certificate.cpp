#pragma once
#include<iostream>
#include<string>
using namespace std;

class Certificate {
private:
	int CertificateID=0;
	string CertificateName;
	string CertificateRank;
	string CertificateDate;
public:
	Certificate() {}
	Certificate(int a, string b, string c, string d) {
		this->CertificateID = a;
		this->CertificateName = b;
		this->CertificateRank = c;
		this->CertificateDate = d;
	}
	//set infomation of Certificate
	void set_CertificateID(int a) { this->CertificateID = a; }
	void set_CertificateName(string a) { this->CertificateName = a; }
	void set_CretificateRank(string a) { this->CertificateRank = a; }
	void set_CretificateDate(string a) { this->CertificateDate = a; }
	//get infomation of Certificate
	int get_CertificateID() { return CertificateID; }
	string get_CertificateName() { return CertificateName; }
	string get_CertificateRank() { return CertificateRank; }
	string get_CertificateDate() { return CertificateDate; }
	//display
	void display() {
		cout << "CertificateID: " << CertificateID << endl;
		cout << "CertificateName: " << CertificateName << endl;
		cout << "CertificateRank: " << CertificateRank << endl;
		cout << "CertificateDate: " << CertificateDate << endl;
		cout << "-------------------\n";
	}
};