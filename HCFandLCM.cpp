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

ll gcd(ll a, ll b)
{
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

int main()
{
	ll t,n1,n2;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n1>>n2;
		ll hcf = gcd(n1,n2);
		ll lcm = (n1*n2)/hcf;
		std::cout<<lcm<<" "<<hcf<<" ";
		std::cout<<'\n';
	}
	return 0;
}
