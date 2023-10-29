// Missing_Number.cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll n;
	cin>>n;

	ll sum = 0;

	for(ll i=1;i<n;i++) {
		ll no;
		cin>>no;
		sum+=no;
	}

	cout << (n*(n+1)/2) - sum << "\n";

	return 0;	
}