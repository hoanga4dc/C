#include"Manager_Employee.cpp"
#include"Menu.cpp"
int Employee::Employee_count = 0;
int main() {
	shared_ptr<Manager_Employee> Q(new Manager_Employee);
	Menu X(Q);
	X.Run();
	return 0;
}