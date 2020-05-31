#include <iostream>

using namespace std;

void fun()
{
	cout << "Error" << endl;;
}

int main()
{
	fun();
	int a = 2;
	cout << "hello " << a;
	return 0;
}