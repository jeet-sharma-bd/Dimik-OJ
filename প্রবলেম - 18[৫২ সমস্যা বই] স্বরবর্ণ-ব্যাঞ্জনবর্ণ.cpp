//www.facebook.com/jeetrobin
//jeet sharma
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	string str;
	string v,c;	
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,str);			
		
			for(int i=0;i<str.length();i++){
				if(str[i] =='a' || str[i] =='e' ||  str[i] =='i'|| str[i] =='o' || str[i] =='u' || str[i] =='A' || str[i] =='E' ||  str[i] =='I'|| str[i] =='O' || str[i] =='U' && str[i] !=' ')
					v.push_back(str[i]);
				else
				 if(str[i] != ' ' && str[i]>='a' && str[i]<'z' || str[i]>='A' && str[i]<'Z'){
					c.push_back(str[i]);
					}
			}	
			
				cout<<v<<"\n"<<c<<"\n";	
				v.clear();
				c.clear();
	}

	return 0; 
}