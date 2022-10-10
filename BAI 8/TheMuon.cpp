#include "Student.cpp"

class Card {
private:

	string ma;
	string ngaymuon;
	string ngaytra;
	string code_sach;
	shared_ptr<student> p;
public:
	//khoi tao
	Card(){}
	Card(string ma, string ngaymuon, string ngaytra, string code_sach, shared_ptr<student> p1) {
		this->ma = ma;
		this->ngaymuon = ngaymuon;
		this->ngaytra = ngaytra;
		this->code_sach = code_sach;
		this->p = move(p1);
	}

	// set information
	void set_ma(string ma) { this->ma = ma; }
	void set_ngaymuon(string s) { this->ngaymuon = s; }
	void set_ngaytra(string s) { this->ngaytra = s; }
	void set_code_sach(string s) { this->code_sach = s; }
	void set_student(unique_ptr<student> p1) { this->p = move(p1); }

	// get information
	string get_ma() { return ma; }
	string get_ngaymuon() { return ngaymuon; }
	string get_ngaytra() { return ngaytra; }
	string get_codesach() { return code_sach; }
	
	//display thong tin the muon

	void display() {
		unique_ptr<UI> u;
		u->prompt("\nMa the: "); u->prompt(ma);
		u->prompt("\nNgay muon: "); u->prompt(ngaymuon);
		u->prompt("\nNgay tra: "); u->prompt(ngaytra);
		u->prompt("\nMa sach: "); u->prompt(code_sach);
		u->prompt("\nThong tin hoc sinh muon: "); p->Getinf();
		
	}
	
};