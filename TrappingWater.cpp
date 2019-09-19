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

// Time -> O(n) Space -> O(n)

int main()
{
	int t,n;
	std::cin>>t;
	while(t--)
	{
		std::cin>>n;
		int arr[n],sum = 0;
		for (int i = 0; i < n; ++i)
			std::cin>>arr[i];
		int left[n],right[n];
		left[0] = arr[0];
		for(int i=1; i<n; i++)
			left[i] = std::max(left[i-1],arr[i]);
		right[n-1]=arr[n-1];
		for(int i = n-2; i>=0; i--)
			right[i] = std::max(right[i+1],arr[i]);
		for(int i = 0; i<n; i++)
			sum += std::min(left[i],right[i]) - arr[i];
		std::cout<<sum<<'\n';
	}
	return 0;
}
