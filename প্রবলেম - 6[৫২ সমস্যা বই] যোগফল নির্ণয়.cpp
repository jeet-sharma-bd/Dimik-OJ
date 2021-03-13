//www.facebook.com/jeetrobin
//jeet sharma
#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
	int n,a,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		sum=a%10;// last digits
		while(a >= 10)
	    {
	        a = a / 10;//first digits
	    }
			cout<<"Sum = "<<sum+a<<endl;
		
		
	}
	
}