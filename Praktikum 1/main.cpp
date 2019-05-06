using namespace std;
#include <iostream>
#include <vector>
#include "MyVector.h"

int main()
{
	vector<double> pos;

	//Testwerte Vektor 1
	CMyVektor testVektor1(2, pos);
	testVektor1.setValue(3.21, 1);
	testVektor1.setValue(-0.234, 2);

	//Testwerte Vektor 2
	CMyVektor testVektor2(3, pos);
	testVektor2.setValue(7, 0);
	testVektor2.setValue(5.789, 1);
	testVektor2.setValue(-3.124, 2);

	system("pause");
	return 0;
}