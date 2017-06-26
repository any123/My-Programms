#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll merge(vector<ll>&arr,vector<ll>&temp,ll left,ll mid,ll right)
{
	ll i,j,k;
	i=left;
	j=mid;
	k=left;
	ll inv_count=0;	
	while(i<mid && j<=right)                   // LW right ke saath hamesha <= aaega,lakin mid ke saath nahi
	{
		if(arr[i]<arr[j])
		{temp[k++]= arr[i++];}
		else
		{
		temp[k++]= arr[j++];
		inv_count+=(mid-i);
		}
	}
	while(i<mid)
	{
		temp[k++]= arr[i++];
	}
	
	while(j<=right)
	{
		temp[k++]= arr[j++];
	}
	
	for(int i=left;i<=right;i++)
	arr[i]=temp[i];
	
	return inv_count;
}

ll merge_sort(vector<ll>&arr,vector<ll>&v,ll l,ll r)
{
	ll  count=0;
	if(l<r)
	{
		ll mid = (l+r)/2;
		
		count = merge_sort(arr,v,l,mid);
		count=count+ merge_sort(arr,v,mid+1,r);
		count = count+ merge(arr,v,l,mid+1,r);
		
		
	}
	return count;
}
int main() {
	
	int t; cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		vector<ll>arr(n);
		
		for(int i=0;i<n;i++)
			scanf("%lld",&arr[i]);
			
		vector<ll>temp(n,0);
	cout<<merge_sort(arr,temp,0,n-1)<<endl;
	}
	return 0;
}
