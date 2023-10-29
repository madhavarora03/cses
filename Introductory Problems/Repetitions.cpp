#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;

	int n = s.length();

	int max_freq = 1;
	int freq = 1;

	for(int i=1;i<n;i++) {
		if(s[i] == s[i-1]) {
			freq++;
			max_freq = max(freq, max_freq);
		} else {
			freq = 1;
		}
	}
	
	cout<<max_freq<<'\n';

	return 0;	
}