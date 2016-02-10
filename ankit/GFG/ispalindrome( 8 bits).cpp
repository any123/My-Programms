# include<bits/stdc++.h>

using namespace std;
bool iskthbitset(unsigned int x,unsigned int k)
{
	return(x&(1<<(k-1)))?true:false;
}
bool ispalindrone(unsigned int x)
{
	int l=1;
	int r=sizeof(unsigned int)*8;
	
	while(l<r)
	{
		if(iskthbitset(x,l)!=iskthbitset(x,r))
		return false;
		l++; r--;
	}
	return true;
}
int main()
{	int x=7;
	if(ispalindrone(x))
	cout<<"yes it is/n";
	else
	cout<<"no its not";
}
