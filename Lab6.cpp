// Lab61.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

struct BaseAuto
{
	string Mark;
	string Number;
	string Port;
	int Weight;
	int Cost;
};

int main()
{

	setlocale(LC_ALL, "ru");
	ofstream out("G.txt", ios::binary || ios::out);

	BaseAuto Auto;
	/*-----*/
	cout << "\nВведите Марку Машины: ";
	cin >> Auto.Mark;
	out.write((char*)&Auto.Mark,sizeof Auto.Mark);
	cout << "Введите номер Машины: ";
	cin >> Auto.Number;
	out.write((char*)&Auto.Number, sizeof Auto.Number);
	cout << "Введите место прибытия груза: ";
	cin >> Auto.Port;
	out.write((char*)&Auto.Port, sizeof Auto.Port);
	cout << "Введите Стоимость Машины: ";
	cin >> Auto.Cost;
	out.write((char*)&Auto.Cost, sizeof Auto.Cost);
	cout << "Введите вес Машины: (10 тонн максимум)";
	cin >> Auto.Weight;
	if (Auto.Weight >> 100)
	{
		while (Auto.Weight >> 100)
		{
			cout << "Error";
			cin >> Auto.Weight;
		}
		out.write((char*)&Auto.Weight, sizeof Auto.Weight);
		/**/

	}
	out.close();

		string B;
		ifstream in("G.txt", ios::binary || ios::in);
		in.read((char*)&B, sizeof B);
		in.close();

		cout << B;
		
	
}




