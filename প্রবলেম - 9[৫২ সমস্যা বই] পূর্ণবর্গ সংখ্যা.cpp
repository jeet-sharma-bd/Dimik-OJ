//www.facebook.co/jeetribin
//jeet sharma
#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n,a;
	float sq;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a;
		sq=sqrt(a);// including fraction part

		if(abs(sqrt(a)) ==sq )// absolute value
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
			
	}
}