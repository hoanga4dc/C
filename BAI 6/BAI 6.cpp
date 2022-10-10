#include "Controller.cpp"
int main() {
	shared_ptr<school> s(new school);
	control c(s);
	c.run();
	return 0;
}