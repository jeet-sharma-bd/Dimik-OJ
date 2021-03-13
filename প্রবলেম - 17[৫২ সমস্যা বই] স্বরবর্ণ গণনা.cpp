//www.facebook.com/jeetrobin
//jeet sharma
#include <bits/stdc++.h> 
using namespace std; 

void solved(string str){
	transform(str.begin(),str.end(),str.begin(),[](unsigned char c){return tolower(c);});
	int cnt=0;
	
	for(int i=0;i<str.length();i++){
		if(str[i] =='a' || str[i] =='e' ||  str[i] =='i'|| str[i] =='o' || str[i] =='u')
		cnt++;
	}
	cout<<"Number of vowels = "<<cnt<<endl;
}

int main() 
{ 
	string str;
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,str);
			solved(str); 
			cin.clear();
			cin.sync();
	}

	return 0; 
}