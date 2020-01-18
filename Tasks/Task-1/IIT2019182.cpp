#include <bits/stdc++.h>
using namespace std;

int mex=1e8;
vector<bool>arr(mex,1);

int main()
{
    int l,r;
   
    cin>>l>>r;
   
    int cnt=0;
   
    arr[0]=false;
   
    arr[1]=false;
   
    for(int i=2;i<=sqrt(mex);i++)
    {
        if(arr[i]==true)
        {
            for(int j=i*i;j<=mex;j+=i)
            arr[j]=false;
        }
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==true)
        cnt++;
    }
   
    cout<<cnt<<endl;
}