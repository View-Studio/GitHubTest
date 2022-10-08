#include <iostream>

using namespace std;

void add(int& a, int& b);

int main()
{
	char buffer[200];

	int a = 1;
	int b = 2;

	add(a, b);
  
	int c = 2;
	int d = a + b + c;

	return 0;
}

void add(int& a, int& b)
{
	a = a + b;
}