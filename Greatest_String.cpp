#include<iostream>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		long long int q;
		cin>>q;
		for(long long int i=0;i<s.length() && (q);i++){

				if(s[i]==97||s[i]==101||s[i]==105||s[i]==111||s[i]==117){
					long long int temp = s[i];
					temp++;
					s[i]=temp;
					q--;	
				}
					

		}
		cout<<s<<endl;
	}
	return 0;
}
