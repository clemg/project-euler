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

bool isDiv(int n) {
	FOR(i,11,20) if(n%i!=0) return false;
	return true;
}


int main() {
	int i = 2520;
	while (!(isDiv(i))) i+=2520;
	
	cout << i;
	
	return 0;
}
