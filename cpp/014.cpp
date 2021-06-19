#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pi;
typedef vector<vector<int>> tab2di;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define PI acos(-1);
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define CFOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define RFOR(i,a,b) for (int i=a; i>=b; i--)
#define RFORC(i,a,b,c) for (int i=a; i>=b; i-=c)
#define FORA(i,v) for (auto i: v)
#define SEP FOR(i,0,60) cout << "#"; cout << "\n";


int collatzLen(int x) {
	ll n = x;
	int total = 1;
	
	while (n!=1) {
		if (n&1) n = 3*n+1;
		else n/=2;
		total++;
	}
	return total;
}


int main() {
	int max = 0;
	int maxLen = 1;
	
	int temp;
	FOR(i,1,1000000) {
		temp = collatzLen(i);
		if (temp > maxLen) {
			max = i;
			maxLen = temp;
		}
	}
	
	
	cout << max;
	
	return 0;
}
