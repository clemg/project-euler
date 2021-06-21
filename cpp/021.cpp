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


int getDivSum(int n) {
	int sum = 0;
	
	FOR(i,1,n/2+1) if(n%i==0) sum+=i;
	
	return sum;
}


int main() {
	int total = 0;
	
	FOR(i,2,10000) {
		int divSum = getDivSum(i);
		if (i!=divSum && i==getDivSum(divSum)) total+=i;
	}
	
	cout << total;
	
	
	return 0;
}
