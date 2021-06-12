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


int main() {
	FOR(a,0,1000) {
		FOR(c,a,1000) {
			FOR(b,a,c) {
				if (a+b+c==1000 && pow(a,2)+pow(b,2)==pow(c,2)) {
					cout << "a: " << a << endl;
					cout << "b: " << b << endl;
					cout << "c: " << c << endl;
					cout << "a*b*c: " << a*b*c << endl;
				}
			}
		}
	}


	return 0;
}
