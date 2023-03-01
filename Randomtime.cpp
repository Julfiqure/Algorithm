#include<bits/stdc++.h>
//#include<stdlib.h>
//#include<time.h>
using namespace std;

//stdlib.h-->rand()
//srand()  //seeds

int main()
{
    srand(time(0));
    for(int i=0;i<1000;i++)
    {
        cout<<rand()<<endl;
    }
    return 0;
}

