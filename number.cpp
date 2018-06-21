#include"number.h"
RealNumber::RealNumber(double valx)
{
    val=valx;
}
void RealNumber::print()
{
    cout<<val<<endl;
}
RealNumber RealNumber::operator+(const RealNumber& b)
{
    return RealNumber(val+b.val);
}
RealNumber RealNumber::operator*(const RealNumber& b)
{
    return RealNumber(val*b.val);
}
IntegerNumber::IntegerNumber(int valx)
{
    val=valx;
}
IntegerNumber::IntegerNumber(const RealNumber& b)
{
    val=int(b.val);
}
ComplexNumber::ComplexNumber(complex<double> valx)
{
    val=valx;
}
void ComplexNumber::print()
{
    cout<<val<<endl;
}
ComplexNumber ComplexNumber::operator+(const ComplexNumber& b)
{
    return ComplexNumber(val+b.val);
}
ComplexNumber ComplexNumber::operator*(const ComplexNumber& b)
{
    return ComplexNumber(val*b.val);
}
