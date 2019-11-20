#include"pch.h"
#include <iostream>
#include "vodyznuinasos.h"
using namespace std;

int main()
{
	VodyznuiNasos a(1);
	VodyznuiNasos b(750, "Virus", 150, 8000, 5);
	VodyznuiNasos c(800, "Machine", 250, 10000, 8);
	a.YearOfProduction = 400;
	a.Producer = "Akvavin";
	b.YearOfProduction = 600;
	b.Producer = "Xerox";
	c.YearOfProduction = 1000;
	c.Producer = "Samsung";

	cout << "Obem - " << a.Volume() << endl;
	cout << "Marka - " << a.Brand() << endl;
	cout << "Price - " << a.Price() << endl;
	cout << "Potyznist - " << a.Power() << endl;
	cout << "Service - " << a.TimeService() << endl;
	cout << "Vupysheo - " << a.YearOfProduction << endl;
	cout << "Vurobnuk - " << a.Producer << endl;
	cout << "Obem - " << b.Volume() << endl;
	cout << "Marka - " << b.Brand() << endl;
	cout << "Price - " << b.Price() << endl;
	cout << "Potyznist - " << b.Power() << endl;
	cout << "Service - " << b.TimeService() << endl;
	cout << "Vupysheo - " << b.YearOfProduction << endl;
	cout << "Vurobnuk - " << b.Producer << endl;
	cout << "Obem - " << c.Volume() << endl;
	cout << "Marka - " << c.Brand() << endl;
	cout << "Price - " << c.Price() << endl;
	cout << "Potyznist - " << c.Power() << endl;
	cout << "Service - " << c.TimeService() << endl;
	cout << "Vupysheo - " << c.YearOfProduction << endl;
	cout << "Vurobnuk - " << c.Producer << endl;


}