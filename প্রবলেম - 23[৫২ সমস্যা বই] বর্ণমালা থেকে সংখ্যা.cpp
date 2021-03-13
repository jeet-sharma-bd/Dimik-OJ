//www.facebook.com/jeetrobin
//jeet sharma
#include <bits/stdc++.h> 
using namespace std;


int main()
{
   string str;
   int value=64;
   int n;
   cin>>n;
   for(int j=0;j<n;j++){
   		cin>>str;
			for(int i=0;i<str.size();i++)
	 		{
	 			printf("%d",abs(value-str[i]));
			}
			cout<<endl;
   }

   return 0;
}