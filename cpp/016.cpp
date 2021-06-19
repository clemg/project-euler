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


int main() {
	int sum = 0;
	
	FORA(i,to_string(pow(2,1000))) if(i!='.') sum+=(i-'0');
	cout << sum;

	return 0;
}
