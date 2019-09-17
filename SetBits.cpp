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
		ll a = 1,count = 0;
		std::cin>>n;
		while(n >= a)
		{
			if(n & a)
				count++;
			a = a<<1;
		}
		std::cout<<count<<'\n';
	}
	return 0;
}
