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

void selectionsorting(int *p,int s)
{
    for(int i=0;i<s;i++)
    {
        int Min=i;
        for(int j=i+1;j<s;j++)
        {
            if(p[j]<p[Min])
            {
                Min=j;
            }
            swap(p[Min],p[i]);
        }
    }
}

void sortedprint(int *p,int s)
{
    ofstream fout ("15ksortedprints.txt");
    for(int i=0;i<s;i++)
    {
        fout<<p[i]<<endl;
    }

}


int main()
{
    int n=15000;
    int *a=new int[n];
    ifstream fin("15ksortedprints.txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    printlist(a,n);
    /*selectionsorting(a,n);
    cout<<"\n......................"<<endl;
    printlist(a,n);
    sortedprint(a,n);*/

    return 0;
}

