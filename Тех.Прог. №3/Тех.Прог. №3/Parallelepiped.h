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
			cout << "\n\n\n������ �������� �����!!!\n\n\n" << endl;
		}

		cout << "������� ���������������. S = 2 (a � b + a � h + b � h), ��� S - ������� �������������� ���������������, a - �����, b - ������, h - ������." << endl;
		cout << "\n��� a = " << a << "; b = " << b << "; h = " << h << ";"
			<< "\nS = " << 2 * (a * b + a * h + b * h) << endl << endl;
		fout << "\n��� a = " << a << "; b = " << b << "; h = " << h << ";"
			<< "\nS = " << 2 * (a * b + a * h + b * h);
		fout.close();
	}
};

