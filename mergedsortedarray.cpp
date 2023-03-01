#include<bits/stdc++.h>
using namespace std;


void printlist(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

}

int *mergelist(int *a,int *b,int m,int n)
{
    int *c=new int[m+n];
    int i=0,j=0,k=0;

    while(i<m &&j<n)
    {
        if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
        }
    }
    while(i<m)
    {
        c[k++]=a[i++];
    }
    while(j<n)
    {
        c[k++]=b[j++];
    }
    return c;

}

int main()
{
    int a[]={4,5,6,7,8,9};
    int b[]={10,11,12,13,14};
    printlist(a,6);
    printlist(b,5);

    int *m=mergelist(a,b,6,5);
    printlist(m,11);

    return 0;
}
