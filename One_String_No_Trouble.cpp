#include <iostream>

using namespace std;

int main() {
	string s;cin>>s;
	int count=1;
	int temp=0;
	for (int i=0;i<s.length()-1;i++){

		if(s[i]!=s[i+1]){

			count++;
		}
		else{
			temp=max(temp,count);
			count=1;
			}
		
		}
		cout<<max(count,temp);

	}
	
