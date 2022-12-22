#include <iostream>

using namespace std;
class Stack
{
private:

    int topOfStack;
    int sizeOfStack;
    int *st;
    //static int counter;

public:

//friend void ViewContent (Stack &x);
friend void ViewContent (Stack x);
Stack ( Stack &z);

    Stack (int n)
    {
        st = new int[n];
        sizeOfStack = n;

        topOfStack = 0;
        //counter++;

        cout<<"This is the constructor"<<endl;
    };
    ~Stack()
    {
        delete[] st;
        //counter--;
        cout<<"This is the destructor"<<endl;
    };

    void push(int);
    int pop();
    void print();
    //static int getCounter();

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
/*int Stack::getCounter()
{
    return counter;
}*/

void ViewContent (Stack x)
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


int main()
{
    Stack s1(5);
    s1.push(5);
    s1.push(14);
    s1.push(13);
    s1.push(6);
    s1.push(4);

    cout<<"The printed value is :"<<endl;
    s1.print();
    cout<<"The value from ViewContent is :"<<endl;
    ViewContent(s1);


   /* for (int i=0; i<5; i++)
    {
        cout<<"The popped value is "<<s1.pop()<<endl;
    }
    //cout<<"The count is : \n"<< s1.getCounter()<< endl;

*/
    return 0;
}
