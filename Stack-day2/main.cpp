#include <iostream>

using namespace std;

class Stack
{
private:

    int topOfStack;
    int sizeOfStack;
    int *st;
    static int counter;

public:

    static int getCounter()
    {
        return counter;
    }

    Stack (int n)
    {
        sizeOfStack = n;
        st = new int[sizeOfStack];
        topOfStack = 0;
        counter=0;

        cout<<"This is the constructor with counter = "<<counter<<endl;
    };
    ~Stack()
    {
        delete[] st;
        cout<<"This is the destructor"<<endl;
        counter--;
        cout<<"destructor counter = "<<counter<<endl;

    };

    void push(int);
    int pop();
    void print();


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
        counter++;


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
int Stack::counter=0;


int main()
{
    Stack s1(5);
    s1.push(5);
    s1.push(14);
    s1.push(13);
    s1.push(6);
    s1.push(4);
    s1.print();

    cout<<endl;

    for (int i=0; i<5; i++)
    {
        cout<<"The popped value is "<<s1.pop()<<endl;
    }
    cout<<"The count is : \n"<< s1.getCounter()<< endl;


    return 0;
}
