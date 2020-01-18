#include <iostream>
using namespace std;

int mex=1e8;
bool arr[100000009];

int main()
{
    int l,r;
   
    cin>>l>>r;
   
    int cnt=0;
   
    arr[0]=false;
   
    arr[1]=false;
   	for(int i=2;i<=mex;i++)
   	    arr[i]=true;
    for( int i=2;i*i<=mex;i++)
    {
        if(arr[i]==true){
            for(int j=i*i;j<=mex;j=j+i)
                arr[j]=false;
            
        }
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==true)
            cnt++;
    }
   
    cout<<cnt<<endl;
    
    return 0;
}