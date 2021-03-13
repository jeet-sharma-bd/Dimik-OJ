//www.facebook.co/jeetribin
//jeet sharma
#include <bits/stdc++.h>
using namespace std;
void solved(){
	int a;
	cin>>a;
	long long int fact=1;
		for(int j=1;j<a;j++){
			fact+=fact*j;
		}
		cout<<fact<<endl;
}
int main () {
	int n;
	cin>>n;
	
		for(int i=0;i<n;i++){
			solved();
		}

	return 0;
}