#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n; cin >> n;
	int totalsum = (n*(n+1))/2;
	int sum = 0;
	for(int i = 0; i < n-1; i++){
		int a; cin >> a;
		sum += a;
	}
	cout << totalsum - sum << endl;
	return 0;
}
