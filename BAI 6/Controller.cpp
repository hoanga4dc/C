#include "School.cpp"
class control {
private:
	unique_ptr<UI> u;
	shared_ptr<school>s;
public:
	control(shared_ptr<school> &x) {
		this->s = x;
	}
	void exit(int& a) {
		a++;
	}
	void run() {
		
		int d = 0;
		while (d ==0) {
			int k;
			u->display_menu(); k = u->getx();
			switch (k) {
			case 1: {
				system("cls");
				s->add();
				break; }
			case 2: {
				system("cls"); 
				s->display_hs_age20();
				break; }
			case 3: {
				system("cls");
				s->display_hs_age23_townDN(); 
				break; }
			case 4: {
				system("cls"); 
				control::exit(d);
				break; }
			}
		}

	}
};