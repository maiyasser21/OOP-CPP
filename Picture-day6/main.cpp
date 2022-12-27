#include <iostream>

using namespace std;
class Shape {
int color;
public:
    Shape()
    {
        color=0;
    }
    void setColor(int c)
    {
        color=c;
    }
    int getColor()
    {
        return color;
    }
};
class Point
{
    int x;
    int y;
public:
    Point()
    {
        cout<<"default point constructor"<<endl;
    }
    Point(int m, int n)
    {
        cout<<"second point constructor"<<endl;
    }
    ~Point()
    {
        cout<<"this is the point destructor"<<endl;
    }
    void setX(int m)
    {
        x=m;
    }
    void setY(int n)
    {
        y=n;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
class Line : public Shape
{
    Point start;
    Point endP;
public:
    Line() : start(), endP()
    {
        cout<<"this is the line constructor"<<endl;
    }
    Line(int x1, int y1, int x2, int y2) : start(x1,y1), endP(x2,y2)
    {
        cout<<"line second constructor"<<endl;
    }
    ~Line()
    {
        cout<<"line destructor"<<endl;
    }
    void draw()
    {
        cout<<"this is the line drawer"<<endl;
        setColor(3);
    }
};
class Rect : public Shape
{
    Point ul;
    Point lr;
public:
    Rect() : ul(), lr()
    {
        cout<<"rect constructor"<<endl;
    }
    Rect(int x1, int y1, int x2, int y2) : ul(x1,y1), lr(x2,y2)
    {
        cout<<"rect second constructor"<<endl;
    }
    ~Rect()
    {
        cout<<"rect destructor"<<endl;
    }
    void draw()
    {
        cout<<"this is the rect drawer"<<endl;
        setColor(6);
    }
};
class Circle : public Shape
{
    Point centre;
    int rad;
public:
    Circle() : centre()
    {
        rad=0;
        cout<<"circle constructor"<<endl;
    }
    Circle(int m, int n, int r) : centre(m,n)
    {
        rad=r;
        cout<<"circle second destructor"<<endl;
    }
    ~Circle()
    {
        cout<<"circle destructor"<<endl;
    }
    void draw()
    {
        cout<<"this is the circle drawer"<<endl;
        setColor(5);
    }

};
class Picture
{
    int cNum;
    int rNum;
    int lNum;
    Circle *pCircle;
    Rect *pRect;
    Line *pLine;
public:
    Picture()
    {
        cNum=0;
        rNum=0;
        lNum=0;
        pCircle=NULL;
        pRect=NULL;
        pLine=NULL;
        cout<<"picture default constructor"<<endl;
    }
    Picture(int cn, int rn, int ln, Circle *pC, Rect *pR, Line *pL)
    {
        cNum=cn;
        rNum=rn;
        lNum=ln;
        pCircle=pC;
        pRect=pR;
        pLine=pL;
        cout<<"picture second constructor"<<endl;
    }
    ~Picture()
    {
        cout<<"picture destructor"<<endl;
    }
    void setCircle (int c, Circle *ptrcircle)
    {
        cNum=c;
        pCircle=ptrcircle;

    }
    void setRect (int r, Rect *ptrrect)
    {
        rNum=r;
        pRect=ptrrect;

    }
    void setLine (int l, Line *ptrline)
    {
        lNum=l;
        pLine=ptrline;

    }
    void paint()
    {
        int i;
        for (i=0; i<cNum; i++)
        {
            pCircle[i].draw();
        }
        for (i=0; i<rNum; i++)
        {
            pRect[i].draw();
        }
        for (i=0; i<lNum; i++)
        {
            pLine[i].draw();
        }
    }
};

int main()
{
Picture mypic;
Circle cArr[3]={Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
Rect rArr[2]={Rect(30,40,170,100), Rect(420,50,500,300)};
Line lArr[2]={Line(420,50,300,300), Line(40,500,500,400)};
mypic.setCircle(3,cArr);
mypic.setRect(2,rArr);
mypic.setLine(2,lArr);
mypic.paint();
    return 0;
}
