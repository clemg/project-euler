#include <bits/stdc++.h>
#include <iostream>
#include <string> 
using namespace std;

typedef long long ll;
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


int getNbDivisors(int n) {
	int total = 0;

	FOR(i,2,sqrt(n)) if(n%i==0) total+=2;

	return total;
}


int main() {
	int i = 1;
	int triangleValue;
	
	while (getNbDivisors(triangleValue = ((i*(i+1))/2))<500) i++;

	cout << triangleValue;	

	return 0;
}
