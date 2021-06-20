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
	
	//1-9 by counting
	sum += 36;
	//10-19 by counting
	sum += 70;
	//20-99 by pattern
	sum += (6+6+5+5+5+7+6+6)*10 //numbers
		+8*36; //tens
	//100-999 by pattern
	sum += 36*100 //1-9 100 times
		+9*854 //1-99 9 times
		+7*9; //hundreds
	//100-999 by pattern
	sum += 10*891; //hundreds and (900-9)
	//1000
	sum += 11;

	cout << sum;

	return 0;
}
