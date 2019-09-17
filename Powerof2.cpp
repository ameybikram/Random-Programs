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
		std::cin>>n;
		if(n == 0)
		{
			std::cout<<"NO\n";
			continue;
		}
		if((n & (n-1)) == 0)
			std::cout<<"YES"<<'\n';
		else
			std::cout<<"NO"<<'\n';
	}
	return 0;
}
