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

// Time -> O(n) Space -> O(1) 
//Space Optimized method without using extra space

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
		int low=0,high=n-1,left_max = 0, right_max = 0;
		while(low<=high)
		{
			if(arr[low] < arr[high])
			{
				if(arr[low] > left_max)
					left_max = arr[low];
				else
					sum += left_max-arr[low];
				low++;
			}
			else
			{
				if(arr[high] > right_max)
					right_max = arr[high];
				else
					sum += right_max-arr[high];
				high--;
			}
		}
		std::cout<<sum<<'\n';
	}
	return 0;
}
