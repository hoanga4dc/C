#include "Controller.cpp"
#include "UI.cpp"
int main() {
	shared_ptr<CBGV> Q(new CBGV);
	control c(Q);
	c.Run();
	return 0;
}