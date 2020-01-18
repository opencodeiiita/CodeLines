#include <bits/stdc++.h>
using namespace std;

const int mex=1e8;
bool arr[mex+1];

int main()
{
    int l,r;
    
    cin>>l>>r;
    
    int cnt=0;
   
    arr[0]=true;
   
    arr[1]=true;
   
    for(int i=2;i*i<mex+1;i++)
    {
        if(arr[i]==false)
        for(int j=2*i;j<mex+1;j+=i)
        arr[j]=true;
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==false) cnt++;
    }
   
    cout<<cnt<<endl;
}