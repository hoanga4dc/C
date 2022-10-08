#include"NGUOI.cpp"
#include<vector>
#include <memory>
class GIADINH {
private:
	int numberofGD=0;
	int Sonha=0;
	vector<unique_ptr<NGUOI>> v;
	UI u;
public:
	void setNumberofGD(int x) {
		this->numberofGD = x;
	}
	int getNumberofGD() {
		return numberofGD;
	}
	void setSonha(int x) {
		this->Sonha = x;
	}
	int getSonha() {
		return Sonha;
	}
	void Add_nguoi() {
		unique_ptr<NGUOI> p(new NGUOI);
		p->insertnguoi();
		v.push_back(move(p));
	}
	void Delete_nguoi() {
		string s;
		
		s = u.gets();
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getname() == s) {
				v.erase(v.begin()+i);
			}
		}
	}
	void Display_GD() {
		u.prompt("So Nha: ");u.prompt(Sonha); u.prompt("\n");
		u.prompt("So thanh vien:"); u.prompt(numberofGD); u.prompt("\n");
		u.prompt("cac thanh vien:"); u.prompt("\n\n");
		for (int i = 0; i < v.size(); i++) {
			u.prompt("--------------\n");
			v[i]->display();
			
		}
	}
	
};