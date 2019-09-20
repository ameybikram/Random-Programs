#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<queue>
#include<stack>
#include<queue>
#include<cstring>
#include<cmath>
#define ll long long
#define mod 1000000007

int main()
{
	ll t,n;
	ll f[1001];
	f[0] = 0;
	f[1] = 1;
	for(ll i = 2 ; i<=1000; i++)
	    f[i] = (f[i-1] + f[i-2])%mod;
	std::cin>>t;
	while(t--)
	{
		ll n;
		std::cin>>n;
		std::cout<<f[n]<<'\n';
	}
	return 0;
}
