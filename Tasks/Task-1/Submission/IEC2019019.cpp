#include <iostream>
using namespace std;

int max=1e8;
bool arr[100000001];

int main()
{
    int l,r;

    cin>>l>>r;

    int count=0;

    arr[0]=true;

    arr[1]=true;

    for(int i=2;i*i<=max;i++)
    {
        if(arr[i]==false)
        for(int j=i*i;j<=max;j+=i)
        arr[j]=true;
    }

    for(int i=l;i<=r;i++)
    {
        if(arr[i]==false) count++;
    }

    cout<<count<<endl;
}
