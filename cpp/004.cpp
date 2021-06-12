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

int rev(int n) {
	int r = 0;
	while (n > 0) {
		r = r*10 + n%10;
		n = n/10;
	}
	return r;
}


int main() {
	int n;
	int maxPal = 0;

	RFOR(i,999,100) {
		RFOR(j,999,100) {
			n = i*j;
			if (n == rev(n)) {
				maxPal = max(maxPal, n);
			}
		}
	}

	cout << maxPal;

	return 0;
}
