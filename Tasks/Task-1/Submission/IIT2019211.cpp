#include <bits/stdc++.h> //changed stdio.h to bits/stdc++.h to make cin/cout work properly as they are not included in stdio.h but in bits/stdc++.h
using namespace std;

int mex=1e8;
bool arr[100000000]={false};//change dthe array type to bool to remove TLE and initialised to false

int main() //return type changed to int
{
    int l,r;
   
    cin>>l>>r;
   
    int cnt=0; //cnt=1 changed to cnt=0 as as the false value comes it will increment but when cnt=1 was there it was counting extra.....
   
    arr[0]=true;
   
    arr[1]=true;
   
    for(int i=2;i*i<mex;i++) //implementation of Sieve of Eratosthenes algorithm (i<mex changed to i*i<mex)
    {
    	if(arr[i]==false)
        for(int j=i*i;j<mex;j+=i) // (j=i changed to j=i*i and j++ to j+=i)
        	arr[j]=true;
    }
   
    for(int i=l;i<=r;i++) //changed i<r to i<=r
    {
        if(arr[i]==false) cnt++;
    }
   
    cout<<cnt<<endl;
}
