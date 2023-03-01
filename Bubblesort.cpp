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
        cout<<i<<" "<<a[i]<<endl;
    }
    cout<<"........................."<<endl<<endl;

    for(int j=0;j<s;j++)
    {
    for(int i=0;i<s-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    }
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<"  ";
    }

    return 0;
}
