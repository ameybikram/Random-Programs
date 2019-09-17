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



int main()
{
	ll t,n;
	std::cin>>t;
	while(t--)
	{
		ll a = 1,res = 0,base = 1;
		std::cin>>n;
		while(n)
		{
			ll last_digit = n%10;
			res += last_digit * base;
			base *= 2;
			n /= 10;
		}
		std::cout<<res<<'\n';
	}
	return 0;
}
