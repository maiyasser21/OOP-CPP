#include <iostream>

using namespace std;
class GeoShape
{
protected:
    float d1;
    float d2;
public:
    GeoShape()
    {
        d1=d2=0;
    }
    GeoShape(float x)
    {
        d1=d2=x;
    }
    GeoShape(float x, float y)
    {
        d1=x;
        d2=y;
    }
    void setD1(float x)
    {
        d1=x;
    }
    int getD1()
    {
        return d1;
    }
    void setD2(float y)
    {
        d2=y;
    }
    int getD2()
    {
        return d2;
    }
    float calculateArea()
    {
        return 0;
    }
};
class Triangle : public GeoShape
{
    public:
    Triangle(float x, float y) : GeoShape (x,y)
    {

    }
    float calculateArea()
    {
        return 0.5*d1*d2;
    }
};
class Rect : public GeoShape
{
    public:
    Rect(float x, float y) : GeoShape (x,y)
    {

    }
    float calculateArea()
    {
        return d1*d2;
    }
};
class Circle : private GeoShape
{
    public:
    Circle(float x) : GeoShape (x)
    {

    }
    void setRadius(float r)
    {
        d1=d2=r;
    }
    float getRadius()
    {
        return d1;
    }
    float calculateArea()
    {
        return 22.0/7*d1*d1;
    }
};



int main()
{
/*Triangle t1(2,3);
cout<<"area is : "<<t1.calculateArea()<<endl;
Rect r1(3,3);
cout<<"area is : "<<r1.calculateArea()<<endl;*/
    return 0;

}
