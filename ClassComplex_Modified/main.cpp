#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
private:

    float imag;
    float real;

public:
     //Complex();
    Complex(float r, float i){
    real=r;
    imag=i;
    }
    ~Complex(){
    cout<<"this is the destructor"<<endl;
    }
    void setComplex(float r, float i);
    float getReal();
    float getImg();
    Complex add(Complex c);
    Complex sub(Complex c);
    void print();
};
void Complex::setComplex(float r, float i)
{
    imag=i;
    real=r;
}
float Complex::getReal()
{
return real;
}
float Complex::getImg()
{
    return imag;
}

/*Complex Complex::add(Complex c)
{
    Complex temp;
    temp.setComplex(real+c.getComplex(), imag+c.getComplex());
    return temp;
}
Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.setreal(real-c.getreal());
    temp.setimag(imag-c.getimag());
    return temp;
}*/
void Complex::print()
{
    if (imag<0)
    {
        cout<<real<<"-"<<fabs(imag)<<"i"<<endl;
    }
    else
    {
        cout<<real<<"+"<<fabs(imag)<<"i"<<endl;
    }
}

int main()
{
   cout<<"Value of the constructor : "<<endl;
   Complex c1(3,4);
   c1.print();
   cout<<"Value of the setter : "<<endl;;
   c1.setComplex(2,3);
   c1.print();

    return 0;
}
