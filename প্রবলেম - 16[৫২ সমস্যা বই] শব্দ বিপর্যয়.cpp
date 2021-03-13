#include <bits/stdc++.h> 
using namespace std; 

// reverses individual words of a string 
void reverseWords(string str) 
{ 
	stack<char> st; 
 
	for (int i = 0; i < str.length(); ++i) { 
		if (str[i] != ' ') 
			st.push(str[i]); 

		// When we see a space, we print contents 
		// of stack. 
		else { 
			while (st.empty() == false) { 
				cout << st.top(); 
				st.pop(); 
			} 
			cout << " "; 
		} 
	} 

	// Since there may not be space after 
	// last word. 
	while (st.empty() == false) { 
		cout << st.top(); 
		st.pop(); 
	} 
	cout<<endl;
} 

// Driver program to test function 
int main() 
{ 
	string str;
	int n;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,str);
			reverseWords(str); 
			cin.clear();
			cin.sync();
	}

	return 0; 
}