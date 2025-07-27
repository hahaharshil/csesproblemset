#include <stdio.h>
#include <math.h>

#define ll long long

int main(){
	ll n; scanf("%llu", &n);
	ll mx = 0; ll ans = 0;
	
	for(int i = 0; i < n; i++){
		ll x; scanf("%llu", &x);
		if(x > mx){
			mx = x;
		}
		ans = ans + (mx - x);
	}
	printf("%llu", ans);
	return 0;
}
