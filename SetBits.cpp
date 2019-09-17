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

/*Given a positive integer N, print count of set bits in it. 
For example, if the given number is 6(binary: 110), output should be 2 as there are two set bits in it. 
*/
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
