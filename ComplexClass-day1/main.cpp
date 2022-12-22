#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
    float imag;
    float real;
public:
   float getimag();
   void setimag(float i);
    float getreal();
    void setreal(float r);
    Complex add(Complex c);
    Complex sub(Complex c);
    void print();
};
void Complex::setimag(float f)
{
    imag=f;
}
float Complex::getimag()
{
return imag;
}
void Complex::setreal(float r)
{
    real=r;
}
float Complex::getreal()
{
    return real;
}
Complex Complex::add(Complex c)
{
    Complex temp;
    temp.setreal(real+c.getreal());
    temp.setimag(imag+c.getimag());
    return temp;
}
Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.setreal(real-c.getreal());
    temp.setimag(imag-c.getimag());
    return temp;
}
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
    Complex c1;
    Complex c2;
    Complex resault;
    float r1;
    float r2;
    float img1;
    float img2;
    cout<<"Enter the first real number : "<<endl;
    cin>>r1;
    c1.setreal(r1);
    cout<<"Enter the first imaginary number : "<<endl;
    cin>>img1;
    c1.setimag(img1);
    cout<<"Enter the second real number : "<<endl;
    cin>>r2;
    c2.setreal(r2);
    cout<<"Enter the second imaginary number : "<<endl;
    cin>>img2;
    c2.setimag(img2);
    cout<<"The First number is : "<<endl;
    c1.print();
    cout<<"The second number is : "<<endl;
    c2.print();
    resault=c1.add(c2);
    cout<<"The value of addition is : ";
    resault.print();
    cout<<"The value of substraction is : ";
    resault=c1.sub(c2);
    resault.print();
    return 0;
}
