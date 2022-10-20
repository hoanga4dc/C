#pragma once
#include<iostream>
#include<string>
#include<memory>
#include"BirthDay_Exception.cpp"
#include "Name_Exception.cpp"
#include"Phone_Exception.cpp"
#include"Email_Exception.cpp"
#include"Certificate.cpp"
#include"Experience.cpp"
#include"Fresher.cpp"
#include"Intern.cpp"
#include"Valid.cpp"
#include"Exist.cpp"
using namespace std;
class View {
private:
	Valid v;
	Exist e;
public:

	int Input_ID(vector<shared_ptr<Employee>> v) {
		int x = 0;
		cout << "nhap ID: ";
		cin >> x;
		if (e.Exist_ID(x, v)) {
			cout << "ID da ton tai, moi nhap lai:";
			return Input_ID(v);
		}
		cin.ignore();
		return x;
	}
	string Input_FullName() {
		/*string s;
		cout << "nhap ten:";
		cin >> s;
		return s;*/
		try {
			string s;
			cout << "nhap ten:";
			getline(cin, s);
			if (v.Valid_FullName(s)) { return s; }
			else {
				Name_Exception ne;
				throw ne;
			}
		}
		catch (Name_Exception ne) {
			cout << ne.notification();
			return Input_FullName();
		}
		/*cin.ignore();
		cout << "nhap ten:";
		string s = "";
		char* p = new char[100];
		fgets(p, 100, stdin);
		s = p;

		if (v.Valid_FullName(s)) { return s; }
		else {
			cout << "ten khong hop le, moi nhap lai:\n";
			return Input_FullName();}*/

	}
	string Input_BirthDay() {
		try {
			string s;
			cout << "nhap ngay sinh:";
			getline(cin, s);
			if (v.Valid_BirthDay(s)) { return s; }
			else {
				BirthDay_Exception be;
				throw be;
			}
		}
		catch (BirthDay_Exception be) {
			cout << be.notification();
			return Input_BirthDay();
		}
	}
	string Input_Phone(vector<shared_ptr<Employee>> l) {
		try {
			string s;
			cout << "nhap SDT:";
			getline(cin, s);
			if (e.Exist_Phone(s, l)) {
				cout << "SDT bi trung lap, moi nhap lai:\n";
				return Input_Phone(l);
			}
			if (v.Valid_Phone(s)) { return s; }
			else {
				Phone_Exception pe;
				throw pe;
			}
		}
		catch (Phone_Exception pe) {
			cout << pe.notification();
			return Input_Phone(l);
		}

	}
	string Input_email(vector<shared_ptr<Employee>> l) {
		try {
			string s;
			cout << "nhap email:";
			getline(cin, s);
			if (e.Exist_Email(s, l)) {
				cout << "Email bi trung lap, moi nhap lai:\n";
				return Input_email(l);
			}
			if (v.Valid_email(s)) { return s; }
			else {
				Email_Exception ee;
				throw ee;
			}
		}
		catch (Email_Exception ee) {
			cout << ee.notification();
			return Input_email(l);
		}
	}
	int Input_ExpInYear() {
		int x = 0;
		cout << "nhap ExpInYear: ";
		cin >> x;
		cin.ignore();
		return x;
	}
	string Input_ProSkill() {
		string s;
		cout << "nhap ProSkill:";
		cin >> s;
		return s;
	}
	string Input_Graduation_date() {
		string s;
		cout << "nhap ngay tot nghiep:";
		cin >> s;
		return s;
	}
	string Input_Graduation_rank() {
		string s;
		cout << "nhap xep hang tot nghiep:";
		cin >> s;
		return s;
	}
	string Input_Education() {
		string s;
		cout << "nhap truong tot nghiep:";
		cin >> s;
		return s;
	}
	/*string Majors;
	int Semester = 0;
	string University_name;*/
	string Input_Majors() {
		string s;
		cout << "nhap chuyen nganh dang hoc:";
		cin >> s;
		return s;
	}
	int Input_Semester() {
		int x = 0;
		cout << "nhap ky hoc: ";
		cin >> x;
		cin.ignore();
		return x;
	}
	string Input_University_name() {
		string s;
		cout << "nhap ten truong dai hoc:";
		cin >> s;
		return s;
	}

	int Input_CertificateID() {
		int x = 0;
		cout << "nhap Certificate ID: ";
		cin >> x;
		cin.ignore();
		return x;
	}
	string Input_CertificateName() {
		string s;

		cout << "nhap Certificate Name:";
		cin >> s;
		return s;
	}
	string Input_CretificateRank() {
		string s;
		cout << "nhap Certificate Rank:";
		cin >> s;
		return s;
	}
	string Input_CertificateDate() {
		string s;
		cout << "nhap Certificate Date:";
		cin >> s;
		return s;
	}
	shared_ptr<Certificate> Input_Certificate() {
		shared_ptr<Certificate> c(new Certificate);
		c->set_CertificateID(View::Input_CertificateID());
		c->set_CertificateName(View::Input_CertificateName());
		c->set_CretificateRank(View::Input_CretificateRank());
		c->set_CretificateDate(View::Input_CertificateDate());
		return c;
	}
	shared_ptr<List_Certificate> Input_List_Certificate() {
		shared_ptr<List_Certificate> l(new List_Certificate);
		int k = 0;
		cout << "Nhap thong tin ve bang cap:\n";
		cout << "nhap so luong bang cap: "; cin >> k;
		for (int i = 0; i < k; i++) {
			cout << "\nNhap thong tin bang cap thu " << i + 1 << endl;
			l->Add_List_Certificate(View::Input_Certificate());
		}
		return l;
	}
	shared_ptr<Experience> Input_Experience(vector<shared_ptr<Employee>> v) {
		shared_ptr<Experience> p(new Experience);
		p->inc_Employee_count();
		p->set_ID(View::Input_ID(v));
		p->set_FullName(View::Input_FullName());
		p->set_BirthDay(View::Input_BirthDay());
		p->set_Phone(View::Input_Phone(v));
		p->set_email(View::Input_email(v));
		p->set_Employee_type(0);
		p->set_ExpInYear(View::Input_ExpInYear());
		p->set_ProSkill(View::Input_ProSkill());
		p->set_List_Cer(View::Input_List_Certificate());
		return p;
	}
	shared_ptr<Fresher> Input_Fresher(vector<shared_ptr<Employee>> v) {
		shared_ptr<Fresher> p(new Fresher);
		p->inc_Employee_count();
		p->set_ID(View::Input_ID(v));
		p->set_FullName(View::Input_FullName());
		p->set_BirthDay(View::Input_BirthDay());
		p->set_Phone(View::Input_Phone(v));
		p->set_email(View::Input_email(v));
		p->set_Employee_type(1);
		p->set_Graduation_date(View::Input_Graduation_date());
		p->set_Graduation_rank(View::Input_Graduation_rank());
		p->set_Education(View::Input_Education());
		p->set_List_Cer(View::Input_List_Certificate());
		return p;
	}
	shared_ptr<Intern> Input_Intern(vector<shared_ptr<Employee>> v) {
		shared_ptr<Intern> p(new Intern);
		p->inc_Employee_count();
		p->set_ID(View::Input_ID(v));
		p->set_FullName(View::Input_FullName());
		p->set_BirthDay(View::Input_BirthDay());
		p->set_Phone(View::Input_Phone(v));
		p->set_email(View::Input_email(v));
		p->set_Employee_type(2);
		p->set_Majors(View::Input_Majors());
		p->set_Semester(View::Input_Semester());
		p->set_University_name(View::Input_University_name());
		p->set_List_Cer(View::Input_List_Certificate());
		return p;
	}
};