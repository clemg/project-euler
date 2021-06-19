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

#define N 20


int main() {
	vector<ull> map((N+1)*(N+1),1);
	
	RFOR(i,N-1,0) {
		RFOR(j,N-1,0) {
			int pos = (j*(N+1))+i;
			map[pos] = map[pos+1] + map[pos+(N+1)];
		}
	}
	
	cout << map[0];

	return 0;
}
