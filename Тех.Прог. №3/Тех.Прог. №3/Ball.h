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
			cout << "\n\n\nОшибка открытия файла!!!\n\n\n" << endl;
		}

		cout << "Площадь шара. S= 4 * П * R^{2}. Где S – площадь, R – радиус, П – число Пи которое всегда примерно равно 3,14." << endl
			<< "\nПри R = " << R << ";\nS = " << 4 * P * R * R << endl << endl;
		fout << "\nПри R = " << R << ";\nS = " << 4 * P * R * R;
		fout.close();
	}
};