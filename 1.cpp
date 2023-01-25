#include<iostream>
using namespace std;

//Functions
//-->Recursive function
//-->Library Function-->math.h
//-->user defined
//f(a,b)=2*(a+b)
//dereferencing operator==*;
//cout<<Address (x+i)<<" "<<value *(x+i)<<" "<<value x[i];

int f(int x,int y)
{
    return 2*(x+y);
}

int main()
{
    cout<<f(10,1)<<endl;
    return 0;
}
