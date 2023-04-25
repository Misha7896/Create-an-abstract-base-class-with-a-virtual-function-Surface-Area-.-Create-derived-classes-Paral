#pragma once
#include <iostream>
#include <fstream>
#include "Square.h"
using namespace std;

class Parallelepiped : public Square
{
public:
	int a, b, h;
	Parallelepiped()
	{
		a = 10;
		b = 15;
		h = 5;
	}
	Parallelepiped(int a, int b, int h)
	{
		this->a = a;
		this->b = b;
		this->h = h;
	}
	~Parallelepiped()
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

		cout << "Площадь параллелепипеда. S = 2 (a · b + a · h + b · h), где S - площадь прямоугольного параллелепипеда, a - длина, b - ширина, h - высота." << endl;
		cout << "\nПри a = " << a << "; b = " << b << "; h = " << h << ";"
			<< "\nS = " << 2 * (a * b + a * h + b * h) << endl << endl;
		fout << "\nПри a = " << a << "; b = " << b << "; h = " << h << ";"
			<< "\nS = " << 2 * (a * b + a * h + b * h);
		fout.close();
	}
};

