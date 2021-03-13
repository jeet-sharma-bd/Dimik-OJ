//www.facebook.com/jeetrobin
//jeet sharma
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str;
	
	int n,cnt=0;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,str);			
		
			for(int i=0;i<str.length();i++){
				if(str[i] ==' ' && str[i+1] !=' ')
					cnt++;			
			}	
			
				cout<<"Count = "<<cnt+1<<endl;	
				cnt=0;
	}

	return 0; 
}