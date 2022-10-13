#include "UI.cpp"
#include "QLGV.cpp"
#include "Controller.cpp"
int main() {
	shared_ptr<QLGV> Q(new QLGV);
	shared_ptr<UI> u;
	control C(Q, u);
	C.Run();
}