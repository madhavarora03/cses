// Distinct_Numbers.cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;

	set<int>S;

	for(int i=0;i<n;i++) {
		int no;
		cin>>no;
		S.insert(no);
	}

	cout<<S.size()<<'\n';

	return 0;	
}