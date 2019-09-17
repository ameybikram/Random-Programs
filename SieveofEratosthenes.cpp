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

void prime(int n)
{
	int arr[n+1],p,c = 0;
	std::fill(arr,arr+n,1);
	for(int p = 2; p*p<=n ;p++)
		if(arr[p] != 0)
			for(int i = p*p; i<= n; i+=p)
				arr[i] = 0;
	for (int i = 2; i <= n; ++i)
		if(arr[i])
			std::cout<<i<<" ";
}		

int main()
{
	ll t,n;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n;
		prime(n);
		std::cout<<'\n';
	}
	return 0;
}
