#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){

		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			int a = s[i];
			if(a<91 && i>0){
				cout<<"_";
				s[i]=s[i]+32;
				cout<<s[i];

			}
			else if(a<91 && i == 0){
				s[i]=s[i]+32;
				cout<<s[i];
				
			}
			else
				cout<<s[i];

		}
		cout<<"\n";
	}										
	return 0;
}
