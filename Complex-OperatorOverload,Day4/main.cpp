#include <iostream>
#include <math.h>
using namespace std;
class Complex
{
private:

    float imag;
    float real;

public:
    ///////////////////////Prototypes Operator Overload//////////////////////////////////
    Complex operator +(Complex c);
    Complex operator +=(Complex c);
    Complex operator +(float x);
    Complex operator -(Complex c);
    Complex operator -=(Complex c);
    Complex operator -(float x);
    Complex operator ++();
    Complex operator --();
    Complex operator ++(int);
    Complex operator --(int);
    int operator ==(Complex c);
    operator float();
    friend Complex operator +(float x, Complex c);
    friend Complex operator -(float x, Complex c);
    /////////////////////////////////Prototypes Complex/////////////////////////////////
    void setComplex(float r, float i);
    float getReal();
    float getImg();
    void print();
    /////////////////////Constructors and destructor///////////////////////////////////
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex (float r)
    {
        real=imag=r;
    }
    Complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    ~Complex()
    {
        cout<<"this is the destructor"<<endl;
    }

};
////////////////////implementations///////////////////////

Complex Complex::operator +(Complex c)
{
    Complex b;
    b.real=real+c.real;
    b.imag=imag+c.imag;
    return b;
}
Complex Complex::operator +(float x)
{
    Complex b;
    b.real=real+x;
    b.imag=imag;
    return b;
}
Complex Complex::operator -(Complex c)
{
    Complex b;
    b.real=real-c.real;
    b.imag=imag-c.imag;
    return b;
}
Complex Complex::operator -(float x)
{
    Complex b;
    b.real=real-x;
    b.imag=imag;
    return b;
};
int Complex::operator ==(Complex c)
{
    if (this->real == c.real && this->imag == c.imag)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
Complex Complex::operator +=(Complex c)
{
    this->real+=c.real;
    this->imag+=c.imag;
    return *this;
}
Complex Complex::operator -=(Complex c)
{
    this->real-=c.real;
    this->imag-=c.imag;
    return *this;
};
Complex Complex::operator ++()
{
    real++;
    return *this;
}
Complex Complex::operator --()
{
    real--;
    return *this;
};
Complex Complex::operator ++(int)
{
   Complex temp=*this;
   real++;
   return temp;
};
Complex Complex::operator --(int)
{
   Complex temp=*this;
   real--;
   return temp;
};
Complex::operator float()
{
    return real;
}
////////////////////////////////////////////////////////////////////////////////
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
};
/////////////////////////////// Stand Alone Functions ////////////////////////
Complex operator +(float x, Complex c)
{
    Complex b;
    b.real = x + c.real;
    b.imag = c.imag;
    return b;
}
Complex operator -(float x, Complex c)
{
    Complex b;
    b.real = x - c.real;
    b.imag = c.imag;
    return b;
};


int main()
{

    Complex c1(3,4);

    cout<<"Value of c1 : "<<endl;;

    c1.print();

    Complex c2(5,7);

    cout<<"Value of c2 : "<<endl;;

    c2.print();

    cout<<"value of float in c2 is \n"<<(float)c2<<endl;

    /*c1+=c2;
    cout<<"Value of c1+=c2 is : " <<endl;
    c1.print();
    c1-=c2;
    cout<<"Value of c1-=c2 is : " <<endl;
    c1.print();
    /*if (c1 == c2)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }*/

    //Complex c3;
    //c3= --c1;
    /*Complex c3;
    c3= c1--;
    //c3 = c1 + c2;
    //c3 = c1 + 5;
    //c3 = c1 - c2;
    //c3 = c1 - 5;
    //c3 = 2 - c1;
    cout<<"the value of c3 is : "<<endl;
    c3.print();

*/
    return 0;
}
