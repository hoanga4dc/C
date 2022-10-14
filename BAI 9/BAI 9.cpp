#include "Controller.cpp"
int main() {
	shared_ptr<QUANLY> Q(new QUANLY);
	shared_ptr<UI> u(new UI);
	control c(Q, u);
	c.Run();
	return 0;
}