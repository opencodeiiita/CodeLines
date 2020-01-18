#include <iostream>
using namespace std;

long long int mex=1e8;
bool arr[100000009];

int main()
{
    long long int l,r;
   
    cin>>l>>r;
   
    long long int cnt=0;
   
    arr[0]=false;
   
    arr[1]=false;
   	for(long long int i=2;i<=mex;i++)arr[i]=true;
    for(long long int i=2;i*i<=mex;i++)
    {
        if(arr[i]==true){for(long long int j=i*i;j<=mex;j=j+i)
        arr[j]=false;}
    }
   
    for(long long int i=l;i<=r;i++)
    {
        if(arr[i]==true) cnt++;
    }
   
    cout<<cnt<<endl;
}