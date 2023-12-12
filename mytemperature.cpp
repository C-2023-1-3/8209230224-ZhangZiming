#include"temptran.h"
double celsius_to_fah(double cel)
{
	cout << "Celsius" << "       " << "Fahrenheit" << endl;
	return cel * 1.8 + 32;
}
double fahrenheit_to_cels(double fah)
{
	cout << "Fahrenheit" << "       " << "Celsius" << endl;

	return (fah - 32) / 1.8;

}