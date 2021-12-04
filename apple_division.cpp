
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
ll md = 1e9+7;
ll inf=1e16;
#define pb push_back
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vii;
typedef vector<pair<ll, ll>> vll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef unsigned long long ull;
#define mp make_pair
#define ull unsigned long long
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(x) __builtin_popcountll(x)
#define dbg(x) cerr<<#x<<" = "<<x<<endl
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pll,null_type, less<pll> ,rb_tree_tag, tree_order_statistics_node_update> indexed_set;
 
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];

int fin=(1<<n);
ll mini=md;
for(int i=0;i<fin;i++){
	ll sum1=0,sum0=0;
 for(int j=0;j<n;j++){
	 if(((1<<j)&i))sum1+=arr[j];
	 else sum0+=arr[j];
 }
 mini=min(mini,abs(sum1-sum0));
 
}
cout<<mini<<"\n";

return 0;
}
