#include<bits/stdc++.h>

using namespace std;


void solved(int a, int b){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<=i;j++){
			cout<<b;
			if(j<i){
				cout<<" ";
			}			
		}
		cout<<endl;
	}
	for(i=a-1;i>0;i--){
			for(j=i;j>=1;j--){
				cout<<b;
					if(j>1){
				cout<<" ";
			}			
			}
		cout<<endl;
	}
	
	cout<<endl;
}
int main(){
	int n;
int a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		solved(a,b);
	}
			
}