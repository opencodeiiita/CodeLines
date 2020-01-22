


#include<bits/stdc++.h>
using namespace std;
    long long dp[1001][1001];

    bool check(long long n,long long k,long long mid){
    	for(int i=0;i+mid<=n;i++){
    		for(int j=0;j+mid<=n;j++){
    			long long  sum=dp[i+mid-1][j+mid-1];
    			if(i>0) sum-=dp[i-1][j+mid-1];
    			if(j>0) sum-=dp[i+mid-1][j-1];
    			if(i>0&&j>0) sum+=dp[i-1][j-1];
    			if(sum<=k) return true;
    		}
    	}
    	return false;
    }
    int main(){
    	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        long long n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<n;j++)
        		cin>>dp[i][j];
        }
        for(int i=1;i<n;i++)
        	dp[i][0]+=dp[i-1][0];
        for(int j=1;j<n;j++)
        	dp[0][j]+=dp[0][j-1];
        for(int i=1;i<n;i++){
        	for(int j=1;j<n;j++){
        		dp[i][j]+=(dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]);
    		}
    	}
    	long long e=n;
    	long long s=1;
    	while(e>s+1){
    		long long mid=s+(e-s)/2;

    		if(check(n,k,mid))
    			s=mid;
    		else
    			e=mid-1;
    	}
    	if(check(n,k,s+1))
    	cout<<(s+1)<<endl;
    	else
    	cout<<s<<endl;
    	return 0;
    }
