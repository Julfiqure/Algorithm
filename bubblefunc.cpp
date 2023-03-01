#include<bits/stdc++.h>
using namespace std;

int *data(int s)
{
    int *d=new int[s];
    for(int i=0;i<s;i++)
    {
        d[i]=rand();
    }
    return d;
}

void bubble(int *a,int s)
{
    for(int i=0;i<s;i++)
    {
        for(int i=0;i<s-1;i++)
        {
            if(a[i]>a[i+1])
            {
                swap(a[i],a[i+1]);
            }
        }
    }
}

void print(int *a,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n.................."<<endl;

}

int search(int *a,int s,int item)
{
    for(int i=0;i<s;i++)
    {
        if(a[i]==item)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int s,p;

    cin>>s;
    int *a=data(s);

    //data(s);
    print(a,s);
    bubble(a,s);
    print(a,s);
    cout<<"\nEnter item:";
    cin>>p;
    int it=search(a,s,p);

    if(it==-1)
    {
        cout<<"Not Found.";
    }
    else
    {
        cout<<"Found At:"<<it+1;
    }
    return 0;
}
