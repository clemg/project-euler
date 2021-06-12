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

#define TO 100


int main() {
	int a = (TO * (TO+1)*(2 * TO+1))/6;
	int b = pow((TO * (TO+1))/2,2);

	cout << abs(a-b);

	return 0;
}
