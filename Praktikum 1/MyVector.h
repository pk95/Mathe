#pragma once
#include <vector>

class CMyVektor
{
private:
	int dimension = 0;
	std::vector<double> values;


public:
	//Konstruktor für Dimensions- und Vektorwerte
	CMyVektor(int dimesnion, std::vector<double> v)
	{
		this->dimension = dimension;
		this->values = v;
	}
	
	//gibt die Dimensionsanzahl zurueck
	int getDimension() const { return dimension; }

	//setzen und zurueckgeben einer bestimmten Komponente des Vektors
	void setValue(double x, int pos) { this->values.at(pos) = x; }
	double getValue(int pos) const { return values.at(pos); }

	//gibt die Laenge des Vektors zurueck
	double getLength();

};

CMyVektor operator+(CMyVektor a, CMyVektor b);
CMyVektor operator*(double lamda, CMyVektor a);