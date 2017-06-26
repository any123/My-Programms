#include<bits/stdc++.h>
using namespace std;

int fun(int n){ int c=1;
    while(n!=1){
        if(n&1)
            n=3*n+1;
        else
            n=n/2;
        c++;
    }
        return c;
}
int main()
 {

     //ios_base::sync_with_stdio(false);
     //cin.tie(NULL);

	int t; cin>>t;
       while(t--){
             string s; cin>>s;
            for(unsigned int i=0;i<s.size();i++){
                cout<<s[i];
                if(s[i]==s[i+1])
                {
                    while(s[i]==s[i+1]) i++;
                }

            }
            cout<<"\n";
             }
	return 0;
}
