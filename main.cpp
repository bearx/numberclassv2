#include"number.h"
int main()
{
	Number* p;
	RealNumber a(14.8),b(15.1);
	RealNumber c=a+b;
	RealNumber d=a*b;
	p=&c;
	(*p).print();
	p=&d;
	(*p).print();
	cout<<endl;
	IntegerNumber a1(14),b1(15);
	IntegerNumber c1=a1+b1;
	IntegerNumber d1=a1*b1;
	p=&c1;
	(*p).print();
	p=&d1;
	(*p).print();
	cout<<endl;
	ComplexNumber a2(complex<double>(14,12)),b2(15);
	ComplexNumber c2=a2+b2;
	ComplexNumber d2=a2*b2;
	p=&c2;
	(*p).print();
	p=&d2;
	(*p).print();
	cout<<endl;
	return 0;
}
