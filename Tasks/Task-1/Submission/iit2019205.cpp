#include <bits/stdc++.h>
using namespace std;

int mex=1e8;
bool arr[100000001];

int main(){
    int l,r;
    cin>>l>>r;
    int count=0;
    
    arr[0]=1;
    arr[1]=1;

    for(int i=2; i*i<=mex; i++){
        if(arr[i]==0){
            for(int j=i*i; j<=mex; j+=i){
                arr[j]=1;
            }
        }
    }

    for(int i=l; i<=r; i++)
    {
        if(arr[i]==0) count++;
    }

    cout<<count<<endl;
}
