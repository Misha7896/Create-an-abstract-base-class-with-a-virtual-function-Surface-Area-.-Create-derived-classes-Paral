#pragma once
#include <iostream>
#include <fstream>
#include "Square.h"
using namespace std;

class Tetrahedron : public Square
{
	int a;
public:
	Tetrahedron()
	{
		a = 10;
	}
	Tetrahedron(int a)
	{
		this->a = a;
	}
	~Tetrahedron()
	{

	}

	void square() override
	{
		ofstream fout;
		ifstream fin;
		fout.open("myFile.txt", ofstream::app);

		if (!fout.is_open())
		{
			cout << "\n\n\nОшибка открытия файла!!!\n\n\n" << endl;
		}

		cout << "Площадь тетраэдра. Площадь боковой поверхности тетраэдра равна сумме площадей трех конгруэнтных равносторонних треугольников S = 3 * sqrt(3) / 4 а^2 квадратных единиц. Площадь всей поверхности тетраэдра равна сумме площадей четырех конгруэнтных равносторонних треугольников. S = 4sqrt(3) / 4 a^2 = sqrt(3) * a^2 квадратных единиц, где а – длина его ребер." << endl
			<< "\nПри a = " << a << ";\nS = " << sqrt(3) * a * a << endl << endl;
		fout << "\nПри a = " << a << ";\nS = " << sqrt(3) * a * a;
		fout.close();
	}
};

