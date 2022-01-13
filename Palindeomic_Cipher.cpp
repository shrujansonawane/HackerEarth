#include <iostream>

using namespace std;
bool st = true;
int main() {
	int num;
	cin >> num;										
	for(int i =0;i<num;i++){

		string s;
		cin>>s;
		long long k = 1;
		for(int j=0;j<s.length()/2;j++){

			if(s[j] != s[s.length()-j-1]){
				st=false;
			}

		}

		if(st){
				cout<<"Palindrome"<<endl;
			}
		else{

			
			for(int j=0;j<s.length();j++){

				s[j] = s[j] - 96;
				k = k * s[j];

			}
			cout<<k<<endl;
		}
		
	}
	return 0;
}
