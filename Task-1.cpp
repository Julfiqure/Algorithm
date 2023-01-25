#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1)+fibonacci(n-2);
    }

}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<n<<"th Fibonacci is:"<<fibonacci(n);

    return 0;
}
