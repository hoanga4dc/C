#include"UI.cpp"
class PHONG {
public:
	virtual int getprice() = 0;
	virtual string get_loaiphong() = 0;
};
class PHONGA :public PHONG {
private:
	string loaiphong = "phong loai A";
public:
	int getprice() {
		return  500;
	}
	string get_loaiphong() {
		return loaiphong;
	}
};
class PHONGB :public PHONG {
	string loaiphong = "phong loai B";
public:
	int getprice() {
		return 300;
	}
	string get_loaiphong() {
		return loaiphong;
	}
};
class PHONGC :public PHONG {
	string loaiphong = "phong loai C";
public:
	int getprice() {
		return  100;
	}
	string get_loaiphong() {
		return loaiphong;
	}
};
