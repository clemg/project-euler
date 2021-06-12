#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<pi> vp;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define PI acos(-1);
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define RFOR(i,a,b) for (int i=a; i>=b; i--)
#define FORA(i,v) for (auto i: v)

bool isPrime(ll n) {
	FOR(i,2,sqrt(n)+1) if(n%i==0) return false;
	return true;
}

int main() {
	vi primes;

	int i=3;
	while (primes.size()<10000) {
		if (isPrime(i)) primes.PB(i);
		i+=2;
	}

	cout << primes.back();

	return 0;
}
