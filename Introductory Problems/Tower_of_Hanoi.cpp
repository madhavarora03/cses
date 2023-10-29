// Tower_of_Hanoi.cpp
#include<bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, int src, int helper, int dest) {
	if(n==0) {
		return;
	}
	// Move n-1 discs from source to helper, using dest as intermediate
	towerOfHanoi(n-1, src, dest, helper);
	// Place one disc correctly
	cout<<src<<" "<<dest<<"\n";
	// Move n-1 discs from helper to dest, using src as intermediate
	towerOfHanoi(n-1, helper, src, dest);
}

int main() {
	int n;
	cin>>n;

	cout<<(1<<n)-1<<'\n';
	towerOfHanoi(n, 1, 2, 3);

	return 0;	
}