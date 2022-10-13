#include "Controller.cpp"

int main() {
	shared_ptr<QLTM> Q(new QLTM);
	shared_ptr<UI> u(new UI);
	control C(Q,u);
	C.Run();
	return 0;
}