#include <iostream>

using namespace std;
class Stack
{
private:

    int topOfStack;
    int sizeOfStack;
    int *st;

public:

//Stack ( Stack &z);

    Stack (int n)
    {
        st = new int[n];
        sizeOfStack = n;

        topOfStack = 0;

        cout<<"This is the constructor"<<endl;
    };
    ~Stack()
    {
        delete[] st;
        cout<<"This is the destructor"<<endl;
    };


void operator = (const Stack &s);
    void push(int);
    int pop();
    void print();

};
void Stack :: operator = (const Stack &s)
    {
        delete[] this->st;
        this->topOfStack=s.topOfStack;
        this->sizeOfStack=s.sizeOfStack;
        this->st=new int[sizeOfStack];
        for (int i=0; i<topOfStack; i++)
        {
            this->st[i]=s.st[i];
        }
    };

void Stack::push(int n)
{
    if (topOfStack == sizeOfStack)
    {
        cout<<"Stack is full"<<endl;

    }
    else
    {

        st[topOfStack]=n;
        (topOfStack)++;


    }
}
int Stack::pop()
{
    int retVal;

    if (topOfStack==0)
    {
        cout<<"Stack is empty"<<endl;
        retVal = -1;

    }
    else
    {
        (topOfStack)--;
        retVal = st[topOfStack];

    }
    return retVal;
}
void Stack::print()
{
    for (int i=0; i<topOfStack; i++)
    {
        cout<< st[i] <<endl;
    }
}

/*void ViewContent (Stack x)
{
    int t=x.topOfStack;
    while (t != 0)
    {
        cout<<x.st[--t]<<endl;
    }
}
Stack::Stack(Stack &z)
{
    topOfStack=z.topOfStack;
    sizeOfStack=z.sizeOfStack;
    st=new int [sizeOfStack];
    for (int i=0; i< topOfStack; i++)
        st[i]=z.st[i];
}

*/
int main()
{
   Stack s1(3);
   s1.push(4);
   s1.push(5);
   cout<<"s1 is : "<<endl;
   s1.print();
   Stack s2(2);
   s2=s1;
   cout<<"s2 is : "<<endl;
   s2.print();

    return 0;
}
