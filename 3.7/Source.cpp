#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int number, a = 0;
	cout << "input number"; cin >> number;
			while (number % 10 == 0){
		number /= 10;
	}
	while (number != 0)
	{
		if (number % 10 == 0)
			a++;
		number /= 10;
	}
	cout << a << endl;
	system("pause");
	return 0;
}
