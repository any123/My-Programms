# include<bits/stdc++.h>
# include<iostream>
using namespace std;

float power(float x,int y)
{
	float temp;
	if(y==0)
	return 1;
	temp=power(x,y/2);
	if(y%2==0)
	return temp*temp;
	else
	{
		if(y>0)
		return x*temp*temp;
		else
		return temp*temp/x;
	}
}

int main()
{
	// see i have made changes
float x; int y; cin>>x>>y;
	cout<<x<<" raised to power to "<<y<<" is \n"<<power(x,y);
	return 0;
}
