#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>

#include "Square.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"
#include "Ball.h"
#include "Figure.h"

using namespace std;
ofstream fout;
ifstream fin;

int main()
{
	setlocale(LC_ALL, "ru");
	Figure Fi;
	Parallelepiped parallelepiped;
	Tetrahedron tetrahedron;
	Ball ball;

	string str;

	while (true)
	{
		int c;
		cout << "\tВыберете фигуру, площадь поверхности которой хотите посчитать:"
			<< "\n1. «Параллелепипед»"
			<< "\n2. «Тетраэдр»"
			<< "\n3. «Шар»"
			<< "\n4. Загрузка всех посчитанных площадей"
			<< "\n5. Выход" << endl;
		c = _getch();

		switch (c)
		{
		case '1':
			system("cls");
			Fi.figure(&parallelepiped);
			break;

		case '2':
			system("cls");
			Fi.figure(&tetrahedron);
			break;

		case '3':
			system("cls");
			Fi.figure(&ball);
			break;

		case '4':
			fin.open("myFile.txt");

			if (!fin.is_open())
			{
				cout << "\nОшибка открытия файла!" << endl;
				return 1;
			}

			system("cls");
			while(!fin.eof())
			{
				str = "";
				getline(fin, str);
				cout << str << endl;
			}
			cout << endl;
			fin.close();
			break;

		case '5':
			return 0;
		}
	}
}
