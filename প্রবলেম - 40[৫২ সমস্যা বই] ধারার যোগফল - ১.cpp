#include<bits/stdc++.h>

using namespace std;


void solved(int base,int p){
	int sum=0;
	for(int j=0;j<=p;j++){
		sum+=pow(base,j);
	}
	cout<<"Result = "<<sum<<endl;
}
int main(){
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		solved(a,b);
	}
			
}