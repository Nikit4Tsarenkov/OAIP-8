#include <iostream>
#include <cmath>
using namespace std;
int func(double a, double b) {
	return (a + sin(b)) / (b + sin(a));
}
void main()
{
	int y;
	y = func(1, 4) + func(7, 5) + func(3, 2);
	cout << y << endl;
	system("pause");
}

