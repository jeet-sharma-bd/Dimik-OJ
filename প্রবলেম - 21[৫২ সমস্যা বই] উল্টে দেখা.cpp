//www.facebook.com/jeetrobin
//jeet sharma
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str;
	
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,str);			
		
		reverse(str.begin(),str.end());
		cout<<str<<endl;
			
	}

	return 0; 
}