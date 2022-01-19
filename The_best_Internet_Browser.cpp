#include <iostream>

using namespace std;

int main() {
	int tc;
	cin >> tc;
	int ori = 0;
	
	while(tc--){

		string s;
		cin>>s;
		int joo = 0;
		for(int i=4;i<s.length();i++){

			if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){

				joo++;
			}
			
			if(s[i] == '.' && s[i+1] == 'c' && s[i+2] == 'o' && s[i+3] == 'm'){
				break;
			}


		}
		ori = s.length();
		joo = joo+4;
		cout<<ori-joo<<"/"<<ori<<"\n";
	}										

	return 0;
}
