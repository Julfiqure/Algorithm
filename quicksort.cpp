#include<bits/stdc++.h>
using namespace std;

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"          "<<a[i]<<endl;
    }

    cout<<"*******------*******"<<endl;
}

int Partition(int *a,int low,int upper)
{
    int pivot=a[low];
    int left=low;
    int right=upper;

    while(left<right)
    {
    while(a[left]<=pivot)
    {
        left++;
    }
    while(a[right]>pivot)
    {
        right--;
    }
    if(left<right)
    {
        swap(a[left],a[right]);
    }
    }
    swap(a[low],a[right]);
    return right;
}

void quicksort(int *a,int lower,int upper)
{
    int location;
    if(lower<upper)
    {
        location=Partition(a,lower,upper);
        quicksort(a,lower,location-1);
        quicksort(a,location+1,upper);
    }
}


int main()
{
    int n=10;
    //int *a=new int[n];
    int a[n]={3,6,1,2,5,7,8,9,10,4};
    print(a,n);
    quicksort(a,0,n-1);
    print(a,n);



    return 0;
}
