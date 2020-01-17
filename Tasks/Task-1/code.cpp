#include <stdio.h>
using namespace std;

int mex=1e8;
long long int arr[mex];

void main()
{
    int l,r;
   
    cin>>l>>r;
   
    int cnt=1;
   
    arr[0]=true;
   
    arr[1]=true;
   
    for(int i=2;i<mex;i++)
    {
        for(int j=i;j<mex;j++)
        arr[j]=true;
    }
   
    for(int i=l;i<r;i++)
    {
        if(arr[i]==false) cnt++;
    }
   
    cout<<cnt<<endl;
}