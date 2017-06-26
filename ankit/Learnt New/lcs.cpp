#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> find_lcs(string a,string b){
    
    int m=a.length(),n=b.length();
    vector<vector<int>>lcs(m+1,vector<int>(n+1));
    
    for(int i=0;i<=m;i++)
        {
        for(int j=0;j<=n;j++)
            {
            if(i==0 || j==0)
                lcs[i][j]=0;
            else
                if(a[i-1]==b[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
              else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    return lcs;
}
    


void print(string a,string b){
     int m=a.length(),n=b.length();
     
    vector<vector<int>>lcs(m+1,vector<int>(n+1,0));
    
    
    
    for(int i=0;i<=m;i++)
        {
        for(int j=0;j<=n;j++)
            {
            if(i==0 || j==0)
                lcs[i][j]=0;
            else
                if(a[i-1]==b[j-1])
                lcs[i][j]=lcs[i-1][j-1]+1;
              else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    
   
    
    int index = lcs[m][n];
    
    int i=m,j=n;
    
    vector<char>v(index+1); 
    string s;   
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            s+=a[i-1];
        
            i--; j--; index--;}
        else if (lcs[i-1][j] > lcs[i][j-1])
         i--;
      else
         j--;
        
    }
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    cout<<s[i]<<" ";
    
    cout<<endl;
}
int main() {

    int m,n; cin>>m>>n;
    string a,b;
    for(int i=0;i<m;i++)
    {
		char c; cin>>c;
		a+=c;
	}
	
	for(int i=0;i<n;i++)
    {
		char c; cin>>c;
		b+=c;
	}
    
    print(a,b);
    return 0;
}
