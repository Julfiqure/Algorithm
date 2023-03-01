#include<bits/stdc++.h>
using namespace std;

void printlist(int *p,int s)
{
    for(int i=0;i<s;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<"\n....................."<<endl;
}

void insertionsorting(int *p,int s)
{
    for(int i=1;i<s;i++)
    {
        int value=p[i];
        int j=i-1;
        while(j>=0 && p[j]>value)
        {
            swap(p[j],p[j+1]);
            j=j-1;
        }
        p[j+1]=value;
    }
}

void sortedprint(int *p,int s)
{
    ofstream fout ("15ksortedprint.txt");
    for(int i=0;i<s;i++)
    {
        fout<<p[i]<<endl;
    }

}

int main()
{
    int n=15000;
    int *a=new int[n];
    ifstream fin("15ksortedprint.txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }

    cout<<"................"<<endl;

    printlist(a,n);
    /*insertionsorting(a,n);
    cout<<"\n......................"<<endl;
    printlist(a,n);
    sortedprint(a,n);*/

    return 0;
}
