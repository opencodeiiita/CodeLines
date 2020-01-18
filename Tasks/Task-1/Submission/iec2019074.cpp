#include<bits/stdc++.h>
using namespace std;

//sieve of eratosthenes algorithm
 
const int n=1e8+1;
bool arr[n];

int main()
{
	arr[0]=true;
	arr[1]=true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(arr[i]==false)
		{
			for(int j=i*i;j<=n;j+=i)
				arr[j]=true;
		}
	}
	int l,r,count=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{	
		if(arr[i]==false)
			count++;
	}
	cout<<count<<endl;



}
