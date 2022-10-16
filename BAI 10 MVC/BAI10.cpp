#include"Method_VB.cpp"
int main() {
	shared_ptr<View> u(new View);
	shared_ptr<VANBAN> s(new VANBAN);
	Method_VB M(s, u);
	return 0;
}