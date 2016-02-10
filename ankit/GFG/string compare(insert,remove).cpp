# include<bits/stdc++.h>

using namespace std;

int min(int x,int y,int z)
{
	return min((x,y),z);
	
}

int play(string s1,string s2,int m,int n)
{
	int dp[m+1][n+1];
	int i,j;
	
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]=j;
			
			else
			if(j==0)
			dp[i][j]=i;
			
			else
			if(s1[i-1]==s2[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1]);
			
		}
	}
	
	return dp[m][n];
}

int main()
{
	string s1="sun";
	string s2="sate";
	cout<<play(s1,s2,s1.length(),s2.length());
	return 0;
}
