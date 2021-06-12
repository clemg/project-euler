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
	int t = 0;

	FOR(i,0,1000) {
		if (i%3==0 || i%5==0) t+=i;
	}

	cout << t;

	return 0;
}
