#include<iostream>
using namespace std;
int GCD(int n,int m)
{
    if(n==m)
    {
        return n;
    }
    else if(n>m)
    {
        return GCD(n-m,m);
    }
    else
    {
        return GCD(n,m-n);
    }
}

int main()
{
    int a,b;
    cout<<"Enter Greatest number:";
    cin>>a;
    cout<<"Enter Smallest Number:";
    cin>>b;
    cout<<"GCD is:"<<GCD(a,b)<<endl;
    return 0;
}

