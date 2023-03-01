#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=15000;
    int *a=new int[n];
    ofstream fout ("15k.txt");
    for(int i=0;i<n;i++)
    {
        fout<<rand()%100+1<<endl;
    }

    return 0;
}

