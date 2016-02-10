# include<bits/stdc++.h>

using namespace std;

int find_x(int n,int p)
{
	int x=0;
	while(n)
	{
		n=n/p;
		x=x+n;
	}
	return x;
	
}

int main()
{
	int n=10,p=3;
	cout<<"Larget power of "<<p<<" that divides "<<n<<"! is"<<find_x(n,p);
	return 0;
}
