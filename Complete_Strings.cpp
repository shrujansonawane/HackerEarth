#include <bits/stdc++.h>
# include <map>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int>map;
		for(int i=;i<s.length();i++){
			map[s[i]]++;
		}
		if(map.size()==26){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	

	
	return 0;	
}

