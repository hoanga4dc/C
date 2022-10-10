#include "Controller.cpp"

int main() {
	shared_ptr<QLTM> Q(new QLTM);
	control C(Q);
	C.Run();
	return 0;
}