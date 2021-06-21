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
#define SEP FOR(i,0,60) cout << "#"; cout << "\n"


bool isLeap(int n) {
	if ((n%4==0) && ((n%100!=0) || (n%400==0))) return true;
	return false;
}


int main() {
	vi DpM = {30,27,30,29,30,29,30,30,29,30,29,30};
	int total = 0;
	
	
	int day = 5;
	FOR(i,1901,2001) {
		if (isLeap(i)) DpM[1] = 28;
		
		FORA(j,DpM) {
			if (day==0) total++;
			
			day = (day+j)%7;
		}
		
		DpM[1] = 27;
	}
	
	cout << total;
	
	return 0;
}

