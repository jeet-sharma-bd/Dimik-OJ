//www.facebook.co/jeetribin
//jeet sharma
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main () {
int n,a;
cin>>n;
vector<int>vec;

	for(int k=0;k<n;k++){
			for(int j=0;j<3;j++){
				cin>>a;
				vec.push_back(a);
			}
			sort(vec.begin(),vec.end());
			cout<<"Case "<<k+1<<":";
			for(auto i=vec.begin();i<vec.end();i++){
				cout<<" "<<*i;			
			}
					cout<<endl;
					vec.clear();
		
			}
	return 0;
}