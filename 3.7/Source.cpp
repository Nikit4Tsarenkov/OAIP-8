#include <iostream>
#include <cmath>
using namespace std;
void rootCount(int a, int b, int c) {
	int D = (b*b) - (4 * (a * c));
	if (D > 0) 
		cout << 2;
	else if (D = 0)
		cout << 1;
	else
		cout << 0;
}
 void main()
{
	int a, b, c;
	float a1, b1, c1;
	cout << "Input first koef: "; cin >> a;
	cout << "Input second koef: "; cin >> b;
	cout << "Input third koef: "; cin >> c;
	cout << "Input veshest first koef: "; cin >> a1;
	cout << "Input veshest second koef: "; cin >> b1;
	cout << "Input veshest third koef: "; cin >> c1;
	rootCount(a, b, c);
	rootCount(a1, b1, c1);
	system("pause");
}

 double rootCount(float a1, float b1, float c1) {
	 float D = (b1*b1) - (4 * (a1 * c1));
	 if (D > 0)
		 return 2;
	 else if (D = 0)
		 return 1;
	 else
		 return 0;
 }


Nikita Loh
