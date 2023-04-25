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
			cout << "\n\n\n������ �������� �����!!!\n\n\n" << endl;
		}

		cout << "������� ���������. ������� ������� ����������� ��������� ����� ����� �������� ���� ������������ �������������� ������������� S = 3 * sqrt(3) / 4 �^2 ���������� ������. ������� ���� ����������� ��������� ����� ����� �������� ������� ������������ �������������� �������������. S = 4sqrt(3) / 4 a^2 = sqrt(3) * a^2 ���������� ������, ��� � � ����� ��� �����." << endl
			<< "\n��� a = " << a << ";\nS = " << sqrt(3) * a * a << endl << endl;
		fout << "\n��� a = " << a << ";\nS = " << sqrt(3) * a * a;
		fout.close();
	}
};

