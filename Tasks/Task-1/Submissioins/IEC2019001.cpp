#include <bits/stdc++.h>
using namespace std;

long int mex = 1e8;
vector <bool> arr(1e8+1,true); 

int main()
{
    long long int l, r;

    cin >> l >> r;

    long int cnt = 0;

    arr[0] = false;

    arr[1] = false;

    for (long int i = 2; i <= mex; i++)
    {
        if (arr[i] == true)
        {
            for (long long int j = i * i; j < mex; j += i)
                arr[j] = false;
        }
    }

    for (long int i = l; i <= r; i++)
    {
        if (arr[i] == true)
            {
                cnt++;
            }
    }

    cout << cnt << "\n";
}
