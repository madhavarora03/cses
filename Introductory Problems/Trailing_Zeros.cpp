// Trailing_Zeros.cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin>>n;

	ll cnt = 0;

	// no. of trailing 0's in n! = exponent of 5 in n = [n/5] + [n/5^2]+...
	while(n) {
		n/=5;
		cnt+=n;
	}

	cout<<cnt;

	return 0;
}