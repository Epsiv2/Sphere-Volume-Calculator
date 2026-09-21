#include <iostream>
#include <cmath>	
#include <string>	
#include <limits>

using namespace std;
const double PI = 3.14159265358979323846;

int main()
{
	int unit;
	cout << "Enter unit (1 - meters, 2 - centimeters, 3 - millimeters): " << endl;
	cin >> unit;
	while (cin.fail())
	{
		cout << "Invalid unit, please enter again (1 - meters, 2 - centimeters, 3 - millimeters): " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> unit;
	}
	while (unit < 1 || unit > 3)
	{
		cout << "Invalid unit, please enter again (1 - meters, 2 - centimeters, 3 - millimeters): " << endl;
		cin >> unit;
	}

	string sign = "";
	if (unit == 1)
	{
		cout << "You selected meters." << endl;
		sign = "m^3";
	}
	if (unit == 2)
	{
		cout << "You selected centimeters." << endl;
		sign = "cm^3";
	}
	if (unit == 3)
	{
		cout << "You selected millimeters." << endl;
		sign = "mm^3";
	}

	cout << "Enter the radius of the sphere, so I can calculate the volume..." << endl;
	double radius = 0.0;
	cin >> radius;
	while (cin.fail())
	{
		cout << "Invalid radius value, please enter again: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> radius;
	}
	cout << "The radius of the sphere is " << radius << endl;
	double volume = (4.0/3.0) * PI * pow(radius, 3);
	cout << "Therefore, the volume of the sphere is " << volume << sign << endl;
	return 0;
}
