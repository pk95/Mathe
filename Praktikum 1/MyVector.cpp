#include "MyVector.h"
#include<vector>

double CMyVektor::getLength() 
{
	double length = 0;

	for (int i = 0; i < this->values.size(); i++)
	{
		length = length + this->values.at(i) * this->values.at(i);
	}

	return length;
};

CMyVektor operator+(CMyVektor a, CMyVektor b)
{
	//neuer temporaerer Vektor fuer Berechnung
	std::vector<double> tempValue;

	//wenn Dimensionen nicht uebereinstimmen, koennen Vektoren nicht addiert werden
	if (a.getDimension() != b.getDimension())
	{
		return a;
	}

	else
	{
		//laeuft alle Dimensionen des Vektors a durch
		for (int i = 0; i < a.getDimension(); i++)
		{
			double erg = a.getValue(i) + b.getValue(i);		//da Vektoren gelich gross, wird nur eine Schleife zum zaehlen benötigt
			tempValue.push_back(erg);
		}
	}

	//uebergabe an den Konstruktor
	CMyVektor result(a.getDimension(), tempValue);

	return result;
}

CMyVektor operator*(double lamda, CMyVektor a)
{
	//neuer temporaerer Vektor fuer Berechnung
	std::vector<double> tempValue;

	//laeuft alle Dimensionen des Vektors durch
	for (int i = 0; i < a.getDimension(); i++)
	{
		//multipliziert den Wert der in dieser Dimension gespeichert ist mit Lamda
		double erg = a.getValue(i) * lamda;
		tempValue.push_back(erg);		//gibt das Ergebnis an Temporaeren Vektor zurueck
	}

	//uebergabe an den Konstruktor
	CMyVektor result(a.getDimension(), tempValue);

	return result;
}