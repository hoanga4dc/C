#pragma once
#include"VANBAN.cpp"
#include"View.cpp"

class Method_VB {
private:
	shared_ptr<VANBAN> doc;
	shared_ptr < View> u;
public:
	Method_VB(shared_ptr<VANBAN> doc,	shared_ptr < View> u) {
		this->doc = doc;
		this->u = u;
		input_documment();
		Count_word();
		Count_Aa();
		change();
	}
	//insert a documment
	void input_documment() {
		doc->set_VB(u->input_VB());
		cout << "-------------------\n";
	}
	//Count numbers of word
	void Count_word() {
		string s = doc->get_VB();
		int d = 0;
		int i = 0;
		while (i <s.size()) {
			if ((s[i] != ' ') && (s[i + 1] == ' ')) {
				d++;
			}
			i++;
		}
		if (s[s.size() - 1] != ' ') { d++; }
		cout << "so tu trong van ban: " << d << endl;
	}
	//Count numbers of charaters a
	void Count_Aa() {
		string s = doc->get_VB();
		int d = 0;
		for (int i = 0; i < s.size(); i++) {
			if ((int(s[i]) == 65) || ((int(s[i]) == 97))) {
				d++;
			}
		}
		cout << "so luong khi tu A(a) co trong van ban la: " << d << endl;
	}
	//change string
	void change() {
		string s1;
		string s = doc->get_VB();
		int i = 0;
		int k = 0;
		while (i < s.size()) {
			if (s[i] != ' ') { s1.push_back(s[i]); k++; }
			if ((s[i] == ' ') && (s[i + 1] != ' ') && (k != 0)) { s1.push_back(s[i]); }
			i++;
		}
		cout << "van ban sau khi bien doi: " << s1<<endl;
	}
};