//www.facebook.com/jeetrobin
//jeet sharma

#include <bits/stdc++.h>
using namespace std;

int main () {
	int n,cnt=0,len;
	string str;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
	  getline(cin,str);// take input in a line of string

	  	for( int i=1;i<str.length();i++)
		{
			  if(str[i]==' ' && str[i+1] !=' ')//find how many space on it and their is no double space together
			  {
			  	cnt++;//counter space
			  }
		}
	
		cout<<cnt+1<<endl;// print word its total space + 1
		cnt=0;	
	}
}