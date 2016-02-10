# include<string>
# include<iostream>

using namespace std;

int main()
{
	char str[5][10];
	char ch;
	cout<<"enter strings "<<endl;
	for(int i=0;i<3;i++)
	{
		cin>>str[i];
	}
	for(int j=0;j<3;j++)
	{
		cout<<str[j];
	}
	return 0;
}
