# include<bits/stdc++.h>

using namespace std;

int largestpower(int n,int p)
{
	int x=0;
	while(n)
	{
		n=n/p;
		x=x+n;
	}
	return x;
}

int power(int x,unsigned int y,int p)
{
	x=x%p;
	int res=1;
	while(y>0)
	{
		if(y&1)
		res=(res*x)%p;
		y=y>>1;
		x=(x*x)%p;
	}
	return res;
}

int modFact(int n,int p)
{
	if(n>=p)
	return 0;
	int res=1;
	bool isprime[n+1];
	memset(isprime,1,sizeof(isprime));
	for(int i=2;i*i<=n;i++)
	{
		if(isprime[i])
		{
			for(int j=2*i;j<=n;j=j+i)
			isprime[j]=0;
		}
	}
	
	for(int i=2;i<=n;i++)
	{
		if(isprime[i])
		{
			int k=largestpower(n,i);
			res=(res*power(i,k,p))%p;
		}
	}
	return res;
}



int main()
{
	int n=25,p=29;
	cout<<n<<"factorial % "<<p<<" is"<<modFact(n,p);
	return 0; 
}
