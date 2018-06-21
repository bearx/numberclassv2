#ifndef NUMBER_Header
#define NUMBER_Header
#include<iostream>
#include<complex>
using namespace std;
class Number
{
	public:
	virtual void print()=0;
};
class RealNumber:public Number
{
	public:
		RealNumber(double valx=0);
		void print();
	    RealNumber operator+(const RealNumber& b);
		RealNumber operator*(const RealNumber& b);
		double val;
};
class IntegerNumber:public RealNumber
{
	public:
		IntegerNumber(int valx=0);
		IntegerNumber(const RealNumber& b);
};
class ComplexNumber:public Number
{
	public:
		ComplexNumber(complex<double> valx=0);
		void print();
		ComplexNumber operator+(const ComplexNumber& b);
		ComplexNumber operator*(const ComplexNumber& b);
		complex<double> val;
};
#endif
