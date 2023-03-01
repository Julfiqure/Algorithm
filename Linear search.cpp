#include<bits/stdc++.h>
using namespace std;

int linear(int *t,int e,int y)
{
    for(int i=0;i<e;i++)
    {
        if(t[i]==y)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int s;
    cin>>s;
    int *a=new int[s];
    //srand(time(0));
    for(int i=0;i<s;i++)
    {
        a[i]=(rand())%10000;
    }
    for(int i=0;i<s;i++)
    {
        cout<<i<<" "<<a[i]<<endl;
    }
    int index=linear(a,s,333);

    if(index==-1)
    {
        cout<<"\nNot Found.";
    }
    else
    {
        cout<<"\nFound at:"<<index;
    }

    return 0;
}
