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


void mergelist(int *a,int left,int mid,int right)
{
    int n1=mid-left+1;
    int n2=right-mid;

    int *l=new int[n1];
    int *m=new int[n2];

    for(int i=0;i<n1;i++)
    {
        l[i]=a[left+i];
    }

    for(int i=0;i<n2;i++)
    {
        m[i]=a[mid+1+i];
    }

    int i=0,j=0,k=left;

    while(i<n1 && j<n2)
    {
        if(l[i]>m[j])
        {
            a[k++]=m[j++];
        }
        else
        {
            a[k++]=l[i++];
        }
    }
    while(i<n1)
    {
        a[k++]=l[i++];
    }
    while(j<n2)
    {
        a[k++]=m[j++];
    }
}

void mergesort(int *a,int left,int right)
{
    int mid;
    if(left<right)
    {
        mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        mergelist(a,left,mid,right);
    }
}

int binarysearch(int *a,int n,int item)
{
    int mid,low=0,high=n-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(item==a[mid])
        {
            return mid;
        }
        else if(item<a[mid])
        {
            high=mid-1;
            //binarysearch(a,high);
        }
        else
        {
            low=mid+1;
        }
    }
    return -1;
}


int main()
{
    int n=10000;
    int *a=new int[n];
    ifstream fin("10k.txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];
    }
    //printlist(a,n);

    mergesort(a,0,n-1);
    printlist(a,n);
    int item;
    cin>>item;
    int e=binarysearch(a,n,item);
    if(e<0)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found at:"<<e;
    }


    return 0;
}

