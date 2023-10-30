// Maximum_Subarray_Sum.cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll INF = 0x3f3f3f3f3f3f3f3f;

int main() {
    int n;
    cin>>n;

    ll maxSum = -INF, currSum=0;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin>>v[i];
        maxSum = max(maxSum, v[i]);
    }

    for(int i=0;i<n;i++) {
        currSum+=v[i];
        maxSum = max(maxSum, currSum);
        if (currSum<0) currSum=0;
    }

    cout<<maxSum<<'\n';

    return 0;
}
