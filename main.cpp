#include <iostream>
#include <cmath>	
#include <string>	
#include <limits>

using namespace std;
const double PI = 3.14159265358979323846;

int main()
{
	int jednostka;
	cout << "Podaj jednostke w ktorej chcesz obliczyc objetosc kuli (1 - metry, 2 - centymetry, 3 - milimetry): " << endl;
	cin >> jednostka;
	while (cin.fail())
	{
		cout << "Niepoprawna jednostka, podaj jeszcze raz (1 - metry, 2 - centymetry, 3 - milimetry): " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> jednostka;
	}
	while (jednostka < 1 || jednostka > 3)
	{
		cout << "Niepoprawna jednostka, podaj jeszcze raz (1 - metry, 2 - centymetry, 3 - milimetry): " << endl;
		cin >> jednostka;
	}

	string znak = "";
	if (jednostka == 1)
	{
		cout << "Wybrales metry." << endl;
		znak = "m^3";
	}
	if (jednostka == 2)
	{
		cout << "Wybrales centymetry." << endl;
		znak = "cm^3";
	}
	if (jednostka == 3)
	{
		cout << "Wybrales milimetry." << endl;
		znak = "mm^3";
	}

	cout << "Podaj promien kuli, abym mogl obliczyc objetosc..." << endl;
	double promien = 0.0;
	cin >> promien;
	while (cin.fail())
	{
		cout << "Niepoprawna wartosc promienia, podaj jeszcze raz: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> promien;
	}
	cout << "Promien kuli to " << promien << endl;
	double objetosc = (4.0/3.0) * PI * pow(promien, 3);
	cout << "wiec objetosc kuli to " << objetosc << znak << endl;
	return 0;
}