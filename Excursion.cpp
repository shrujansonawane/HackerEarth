// Write your code here
#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;										
	for(int i=0;i<t;i++){
		int count =0;
		int n,m,k;
		int b,g;
		cin>>n>>m>>k;
		count = count + n/k;
		count = count + m/k;
		
		b = n%k;
		g = m%k;
		if(b!=0){
			count=count+1;
		}
		
		
		if(g!=0){
			count=count+1;
		}
		
		cout<<count<<endl;


	}		
}
