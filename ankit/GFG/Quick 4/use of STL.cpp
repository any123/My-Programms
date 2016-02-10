# include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int m,n,i,num,type,a,b;
    cin>>n>>m;
    list<int>v;
    list<int>:: iterator j;
    for(i=0;i<n;i++)
        {
        cin>>num;
        v.push_back(num);
    }
    while(m--)
        {
        cin>>type;
        switch(type)
            {
            case 1: cin>>a>>b;
                    
                
    ;
            v.erase(v.begin()+a-1,v.begin()+b);
        }
        
        j=v.begin();
        for(;j!=v.end();j++)
            cout<<*j<<" ";
            				
        }
    }
    return 0;
}

