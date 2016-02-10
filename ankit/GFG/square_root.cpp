# include<bits/stdc++.h>

using namespace std;

int floor_sqrt(int x)
{
	if(x==1||x==0)
	return x;
	
	int i=1,result=1;
	
	while(result<=x)
	{
	if(result==x)
	return result;
	i++;
	result=i*i;
	}
	return i-1;
}

int main()
{
	int x=11;
	cout<<"square_root is "<<floor_sqrt(x);
	return 0;
}
