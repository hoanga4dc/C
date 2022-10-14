#pragma once
#include <string>
#include<iostream>
using namespace std;
class VANBAN {
private:
	string s;
public:
	VANBAN(){}
	VANBAN(string s) {
		this->s = s;
	}
	//set information
	void set_VB(string s) {
		this->s = s;
	}
	//get information
	string get_VB() {
		return s;
	}
	//Count numbers of word
	int Count_word() {
		int d = 0;
		int i = 0;
		while (i<s.size()){
			if ((s[i]!=' ')&&(s[i+1]==' ')) {
				d++;
				}
			i++;
		}			
		if (s[s.size() - 1] != ' ') { d++; }
		return d;
	}
	//Count numbers of charaters a
	int Count_Aa() {
		int d = 0;
		for (int i = 0; i < s.size(); i++) {
			if ((int(s[i]) == 65) || ((int(s[i]) == 97))) {
				d++;
			}
		}
		return d;
	}
	// change string
	string change() {
		string s1;
		int i = 0;
		int k = 0;
		while (i < s.size()) {
			if (s[i] != ' ') { s1.push_back(s[i]); k++; }
			if ((s[i] == ' ') && (s[i + 1] != ' ')&&(k!=0)) { s1.push_back(s[i]); }
			i++;
		}
		return s1;
	}

	
};