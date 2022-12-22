#include <iostream>

using namespace std;

void swap_byvalue(int,int);
void swap_byaddress(int *, int *);
void swap_byreference(int &, int &);

int main()
{
    int x=7;
    int y=8;
    swap_byvalue(x,y);
    swap_byaddress(&x,&y);
    swap_byreference(x,y);


    return 0;
}
void swap_byvalue(int x, int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    cout<<"x after swap by value is : "<<x<<endl;
    cout<<"y after swap by value is : "<<y<<endl;
}
void swap_byaddress(int *x, int *y)
{
    int temp=0;
    temp= *x;
    *x=*y;
    *y=temp;
    cout<<"x after swap by address is : "<<*x<<endl;
    cout<<"y after swap by address is : "<<*y<<endl;

}
void swap_byreference(int &x, int &y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    cout<<"x after swap by reference is : "<<x<<endl;
    cout<<"y after swap by reference is : "<<y<<endl;
}
