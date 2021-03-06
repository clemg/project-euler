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
#define SEP FOR(i,0,60) cout << '#'; cout << "\n"

#define SIZE 15


int main() {
	vi n = {75,95,64,17,47,82,18,35,87,10,20,4,82,47,65,19,1,23,75,3,34,88,2,77,73,7,63,67,99,65,4,28,6,16,70,92,41,41,26,56,83,40,80,70,33,41,48,72,33,47,32,37,16,94,29,53,71,44,65,25,43,91,52,97,51,14,70,11,33,28,77,73,17,78,39,68,17,57,91,71,52,38,17,14,91,43,58,50,27,29,48,63,66,04,68,89,53,67,30,73,16,69,87,40,31,04,62,98,27,23,9,70,98,73,93,38,53,60,4,23};
	tab2di nums;
	
	// filling pyramid
	FOR(i,0,15) {
		vi line;
		FOR(j,(i*(i+1))/2,(((i+1)*(i+2))/2)) {
			line.PB(n[j]);
		}
		nums.PB(line);
	}

	// printing
	RFOR(i,SIZE-1,0) {
		RFOR(j,i,0) {
			printf("%3d", nums[i][j]);
		}
		cout << "\n";
	}

	// finding max
	RFOR(i,SIZE-2,0) {
		FOR(j,0,i+1) {
			nums[i][j] += max(nums[i+1][j], nums[i+1][j+1]);
		}
	}
	
	cout << endl << nums[0][0] << endl << endl;

	return 0;
}
