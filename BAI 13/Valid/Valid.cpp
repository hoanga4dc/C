#pragma once
#include<sstream>
#include<string>
using namespace std;

class Valid {
public:
	bool Valid_BirthDay(string s) {
		for (int i = 0; i < s.size(); i++) {
			if ((int(s[i]) < 47) || (int(s[i]) > 57) || s.size() > 10) {
				return false;
			}
			else {
				int x1 = 0, x2 = 0, x3 = 0;// store day, month, year
				string s1; s1.push_back(s[0]); s1.push_back(s[1]);
				stringstream str2num(s1);
				str2num >> x1;
				if ((x1 < 0) || (x1 > 31)) { return false; }
				string s2;	s2.push_back(s[3]); s2.push_back(s[4]);
				stringstream str3num(s2);
				str3num >> x2;
				string s3;	s3.push_back(s[6]); s3.push_back(s[7]); s3.push_back(s[8]); s3.push_back(s[9]);
				stringstream str4num(s3);
				str4num >> x3;
				if ((x1 < 0) || (x1 > 31) || (x2 < 0) || (x2 > 12) || (x3 > 2010) || (x3 < 1950)) { return false; }
				else return true;
			}
		}
	}
	bool Valid_FullName(string s) {
		int d = 0;
		for (int i = 0; i < s.size(); i++) {
			if ((s[i] == ' ') || ((int(s[i]) > 64) && (int(s[i]) < 91)) || ((int(s[i]) > 96) && (int(s[i]) < 123))) { d++; }
		}
		if (d == s.size()) { return true; }
		else return false;
	}
	bool Valid_email(string s) {
		int d = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '@') { d++; }
		}
		if (d == 1) { return true; }
		else return false;
	}
	bool Valid_Phone(string s) {
		if (s[0] != '0') { return false; }
		if (s.size() != 10) { return false; }
		for (int i = 0; i < s.size(); i++) {
			if ((int(s[i]) < 48) || (int(s[i]) > 57)) { return false; break; }
		}
		return true;
	}
};