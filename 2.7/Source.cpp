#include <iostream>
#include <cmath>
using namespace std;
double f(double x);
int main()
{
	double a;
	double b;
	double h;
	cout << "Input granicy otrezka" << endl;
	do
	{
		cout << "a= "; cin >> a;
		cout << "b= "; cin >> b;
		if (a > b) cout << "Error a should be < than b" << endl;
	} while (a > b);
	cout << "Input step: " << endl;
	cout << "h= "; cin >> h;
	for (double i = a; i <= b; i += h)
		cout << "f(" << i << ")" << f(i) << endl;
	system("pause");
	return 0;
}

double f(double x)
{
	if (x < 0) return -4;
	else if (x >= 0) return x*x;
    return 2 ;
}