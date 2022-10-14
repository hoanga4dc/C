#include "Controller.cpp"
int main() {
	shared_ptr<VANBAN> v(new VANBAN);
	shared_ptr<UI> u(new UI);
	control C(v, u);
	C.Run();
	return 0;
}