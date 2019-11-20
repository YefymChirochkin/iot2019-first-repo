#include"pch.h"
#include "vodyznuinasos.h"

double VodyznuiNasos::Power() const
{
	return Potyznist;
}

void VodyznuiNasos::setPotyznist(double value)
{
	Potyznist = value;
}

string VodyznuiNasos::Brand() const
{
	return marka;
}

void VodyznuiNasos::setMarka(const string &value)
{
	marka = value;
}

double VodyznuiNasos::Volume() const
{
	return obem;
}

void VodyznuiNasos::setObem(double value)
{
	obem = value;
}

int VodyznuiNasos::Price() const
{
	return price;
}

void VodyznuiNasos::setPrice(int value)
{
	price = value;
}

int VodyznuiNasos::TimeService() const
{
	return timeService;
}

void VodyznuiNasos::setTimeService(int value)
{
	timeService = value;
}

VodyznuiNasos::VodyznuiNasos(double Potyznist, string marka, double obem, int price, int timeService) :Potyznist(Potyznist), marka(marka), obem(obem), price(price), timeService(timeService)
{

}

VodyznuiNasos::~VodyznuiNasos()
{

}