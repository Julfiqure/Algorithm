#include<bits/stdc++.h>
using namespace std;

int **matrix(int r,int c)
{
    int **m=new int*[r];
     for(int i=0;i<r;i++)
    {
        m[i]=new int[c];
    }
    return m;
}

void inputdata(int **s,int row,int c)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>s[i][j];
        }
    }
}

void printdata(int **d,int row,int column)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int row,column;
    cin>>row>>column;
    int **m=matrix(row,column);




    inputdata(m,row,column);
    printdata(m,row,column);



    return 0;
}
