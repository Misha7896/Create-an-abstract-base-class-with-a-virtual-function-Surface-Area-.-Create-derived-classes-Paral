#pragma once
#include <iostream>
#include <fstream>
#include "Square.h"
using namespace std;

class Ball : public Square
{
	int R;
	float P = 3.14;
public:
	Ball()
	{
		R = 10;
	}
	Ball(int R)
	{
		this->R = R;
	}
	~Ball()
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

		cout << "������� ����. S= 4 * � * R^{2}. ��� S � �������, R � ������, � � ����� �� ������� ������ �������� ����� 3,14." << endl
			<< "\n��� R = " << R << ";\nS = " << 4 * P * R * R << endl << endl;
		fout << "\n��� R = " << R << ";\nS = " << 4 * P * R * R;
		fout.close();
	}
};