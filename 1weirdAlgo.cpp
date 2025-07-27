#include <bits/stdc++.h>
using namespace std;
/*
Submission details
Task:	Weird Algorithm
Sender:	hahaharshil
Submission time:	2025-07-24 15:03:05 +0300
Language:	C++ (C++17)
Status:	READY
Result:	ACCEPTED
*/

int main(){
	long long n; cin >> n;
	while(n != 1){
		cout << n << ' ';
		if(n%2 == 0){
			n /= 2;
		}else{
			n = 3*n + 1;
		}
	}
	cout << 1 << '\n';
	return 0;
}
