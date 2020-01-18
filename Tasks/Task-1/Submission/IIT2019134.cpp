#include <iostream>
using namespace std;

int up=1e8;
bool arr[100000001];

int main()
{
    int l,r;
   
    cin>>l>>r;
   
    int c=0;
   
    arr[0]=true;
   
    arr[1]=true;
   
    for(int i=2;i*i<=up;i++)
    {
        if(arr[i]==false)
        for(int j=i*i;j<=up;j+=i)
        arr[j]=true;
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==false) c++;
    }
   
    cout<<c<<endl;
}