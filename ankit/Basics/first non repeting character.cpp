
# include<bits/stdc++.h>
using namespace std;

int main()
{
	int hash_arr[256],pos,k,i;
	 for(int i=0 ; i<256 ; i++)
	       
	       hash_arr[i]=0; 
	string s;
	cin>>s;
	int len; len=s.size();
	for(i=0;i<len;i++)
	{
		pos=s[i];
		hash_arr[pos]=hash_arr[pos]+1;
	}
	for(i=110;i>90;i--)
	{ 
		if(hash_arr[i]==1)
			cout<<"the first non repeting character is "<<char(i)<<"\n"; 
	
	
	}
	


  	
}
