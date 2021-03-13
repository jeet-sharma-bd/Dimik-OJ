#include<bits/stdc++.h>

using namespace std;


void solved(string str){
	string temp=str;
 		reverse(temp.begin(),temp.end());
	if(str== temp){
		cout<<"Yes! It is Palindrome!"<<endl;
	}else
		cout<<"Sorry! It is not Palindrome!"<<endl;

}
int main(){
	int n;
	string str;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		solved(str);
	}
			
}