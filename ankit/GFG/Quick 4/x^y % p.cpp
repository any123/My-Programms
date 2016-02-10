# include<iostream>
using namespace std;

int power(int x,unsigned int y, int p)
{
	int res=1; x=x%p;
    while(y>0)
    {
    	if(y&1)		// check if y is odd
    	res=(res*x)%p;
    	
    	y=y>>1;			// y=y/2
    	x=(x*x)%p;
    }
    return res;
}

int main()
{
	int x=2, y=5, p=13;
	cout<<power(x,y,p);
	return 0;
}
