# include<bits/stdc++.h>

using namespace std;



struct play
{
int age;
string name;
};

bool mine(play p1,play p2){
	return p1.age < p2.age;
}
int main()
{
	
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	
	
	play p;
	vector<play>v(3);
	int a; string b;
	for(int i=0;i<3;i++)
	{
		cin>>a>>b;
		v[i].age=a;
		v[i].name=b;
	}
	
	for(int i=0;i<3;i++)
	cout<<v[i].age<<" "<<v[i].name<<endl;
	
	sort(v.begin(),v.end(),mine);
	
	for(int i=0;i<3;i++)
	cout<<v[i].age<<" "<<v[i].name<<endl;
}
