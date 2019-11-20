#ifndef VODYZNUINASOS_H
#define VODYZNUINASOS_H
#include <string>
using namespace std;

class VodyznuiNasos
{
private:
	double Potyznist;
	string marka;
	double obem;
public:
	int YearOfProduction;
	string Producer;
	VodyznuiNasos(double Potyznist = 1000, string marka = "Apple", double obem = 300, int price = 10000, int timeService = 12);
	~VodyznuiNasos();
	double Power() const;
	void setPotyznist(double value);
	string Brand() const;
	void setMarka(const string &value);
	double Volume() const;
	void setObem(double value);
	int Price() const;
	void setPrice(int value);

	int TimeService() const;
	void setTimeService(int value);

protected:
	int price;
	int timeService;
};

#endif // VODYZNUINASOS_H
