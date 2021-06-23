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
#define PI acos(-1)
#define FOR(i,a,b) for (int i=a; i<b; i++)
#define CFOR(i,a,b,c) for (int i=a; i<b; i+=c)
#define RFOR(i,a,b) for (int i=a; i>=b; i--)
#define RFORC(i,a,b,c) for (int i=a; i>=b; i-=c)
#define FORA(i,v) for (auto i: v)


bool isAbSum(vi abNums, int n) {
	FORA(i,abNums) {
		if (i>n-i) break;
		if (find(abNums.begin(), abNums.end(), n-i) != abNums.end()) return true;		
	}
	return false;	
}

int main() {
	vi abNums;
	
	int sum;
	FOR(i,0,28123) {
		sum = 0;
		FOR(j,1,i/2+1) {
			if (i%j==0) sum+=j;
		}
		if (sum > i) {
			abNums.PB(i);
		}
	}

		
	ll total = 0;
	FOR(i,0,23124) {
		if (!isAbSum(abNums, i)) total += i;
	}
	cout << total;
	
	
	return 0;
}
