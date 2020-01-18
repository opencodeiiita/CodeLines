#include <bits/stdc++.h>
int dp[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
   
    int k; cin>>k;
   
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>dp[i][j];
        }
    }
    int s=1,e=n+1;
   
    while(s<e){
       
        int m=(s+e)/2;
       
        bool flag=0;
       
        for(int i=m;i<=n;i++){
            for(int j=m;j<=n;j++){
                if((dp[i][j]-dp[i-m][j]-dp[i][j-m])=>k) flag=1;
            }
        }
        if(flag) s=m;
        else e=m;
    }
    cout<<s<<endl;
}