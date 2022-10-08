#include <iostream>

using namespace std;

void add(int& a, int& b);

int main()
{
	int a = 1;
	int b = 2;

	add(a, b);

	return 0;
}

void add(int& a, int& b)
{
	a = a + b;
}