#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef pair<int,int> pi;

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

#define UPTO 2000000


int main() {
	vb primes(UPTO, true);
 
    FOR(i, 2, ceil(sqrt(UPTO))) {
        if (primes[i]) {
            CFOR(j, pow(i,2), UPTO, i) primes[j]=false;
        }
    }

	ll sum = 0;
	FOR(i,2,UPTO) if (primes[i]) sum+=i;
	cout << sum;

	return 0;
}
