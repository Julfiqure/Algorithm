#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    int *a=new int[s];
    for(int i=0;i<s;i++)
    {
        a[i]=rand();
    }
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
}
