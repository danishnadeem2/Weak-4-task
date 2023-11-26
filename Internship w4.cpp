#include<iostream>
using namespace std;

class Hexagon
{
private:
	double side;

public:
	Hexagon(int ld)
	{
		side = ld;
	}

	double calcArea()
	{
		return 1.5 * 1.732 * side * side;
	}

	double calcPeri()
	{
		return 6 * side;
	}

	double calcAngleSum()
	{
		return 6 * 120;
	}

	void display()
	{
		cout << "Hexagon Information." << endl;
		cout << "Area of Hexagon: " << calcArea() << endl;
		cout << "Perimetre of Hexagon: " << calcPeri() << endl;
		cout << "Angle SUM of Hexagon: " << calcAngleSum() << endl;
	}


};

class Square
{
private:
	double length;

public:
	Square(int ld)
	{
		length = ld;
		
	}

	double calcAreaSquare()
	{
		return length * length;
	}

	double calcPeriSquare()
	{
		return 4 * length;
	}

	void display()
	{
		cout << "Information of Square." << endl;
		cout << "Area of Square: " << calcAreaSquare() << endl;
		cout << "Perimeter of Square: " << calcPeriSquare() << endl;
	}
};

int main()
{
	int ld;

	cout << "Enter last digit of your CNIC: ";
	cin >> ld;

	Hexagon h(ld);
	Square s(ld);

	char c;

	do
	{
		cout << "Menu" << endl;
		cout << "Enter 1 for Hexagon Infromation." << endl;
		cout << "Enter 2 for square Information." << endl;
		cout << "Enetr your choice: ";
		cin >> c;

		if (c == '1')
		{
			h.display();
		}

		else if (c == '2')
		{
			s.display();
		}

		else
		{
			cout << "Exiting the program." << endl;
		}

	} while (c == '1' || c == '2');

	return 0;
}