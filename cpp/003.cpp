#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define PI acos(-1);
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define RFOR(i,a,b) for (int i=a; i>=b; i--)
#define FORA(i,v) for (auto i: v)

bool isPrime(ll n) {
	FOR(i,2,n) if(n%i==0) return false;
	return true;
}

int main() {
	ll start = 600851475143L;
	vi divs;
	
	while (!(isPrime(start))) {
		int i = 2;
		while (!(start%i==0)) i++;
		divs.PB(i);
		start = start/i;
	}
		
	FORA(i, divs) cout << i << endl;
	cout << start;
	
	return 0;
}
