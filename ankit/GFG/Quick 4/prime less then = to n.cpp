# include<bits/stdc++.h>

using namespace std;
void write_prime(int arr[],int n)
{
	for(int i=2;i<=n;i++)
	{
		if(arr[i])
		cout<<i<<" ";
	}
}
int prime_find(int n)
{	int arr[n+1];
    memset(arr,1,sizeof(arr));
    
	for(int i=2;i*i<=n;i++)
	{
		if(arr[i])
		{
			for(int j=2*i;j<=n;j=j+i)
			arr[j]=0;
		}
	}
	write_prime(arr,n);
	
}


int main()
{
   int num; cin>>num;
   prime_find(num);	
}

