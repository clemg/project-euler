#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<unsigned long long> vull;
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
	vector<unsigned long long> numbers = {37107287533902,46376937677490,74324986199524,91942213363574,23067588207539,89261670696623,28112879812849,44274228917432,47451445736001,70386486105843,62176457141856,64906352462741,92575867718337,58203565325359,80181199384826,35398664372827,86515506006295,71693888707715,54370070576826,53282654108756,36123272525000,45876576172410,17423706905851,81142660418086,51934325451728,62467221648435,15732444386908,55037687525678,18336384825330,80386287592878,78182833757993,16726320100436,48403098129077,87086987551392,59959406895756,69793950679652,41052684708299,65378607361501,35829035317434,94953759765105,88902802571733,25267680276078,36270218540497,24074486908231,91430288197103,34413065578016,23053081172816,11487696932154,63783299490636,67720186971698,95548255300263,76085327132285,37774242535411,23701913275725,29798860272258,18495701454879,38298203783031,34829543829199,40957953066405,29746152185502,41698116222072,62467957194401,23189706772547,86188088225875,11306739708304,82959174767140,97623331044818,42846280183517,55121603546981,32238195734329,75506164965184,62177842752192,32924185707147,99518671430235,73267460800591,76841822524674,97142617910342,87783646182799,10848802521674,71329612474782,62184073572399,66627891981488,60661826293682,85786944089552,66024396409905,64913982680032,16730939319872,94809377245048,78639167021187,15368713711936,40789923115535,44889911501440,41503128880339,81234880673210,82616570773948,22918802058777,77158542502016,72107838435069,20849603980134,53503534226472};

	unsigned long long total = 0;
	FORA(i,numbers) total+=i;
	
	cout << to_string(total).substr(0,10) << endl;

	return 0;
}
