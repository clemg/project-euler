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


int main() {
	vi fib{0, 1};

	while (!(fib.back() > 4000000)) {
		fib.PB(fib.end()[-1] + fib.end()[-2]);
	}


	int t = 0;
	for (auto i: fib) if (i%2==0) t+=i;

	cout << t;

	return 0;
}
