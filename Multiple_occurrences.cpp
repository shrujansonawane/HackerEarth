#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int n,input;
		cin>>n;
		vector <pair <long long int,long long int>> valuePair;
		for(int i=1;i<=n;i++){
			cin>>input;
			valuePair.push_back(make_pair(input,i));
		}
		sort(valuePair.begin(),valuePair.end());
		
		long long int total = 0;
		for(int i=0;i<n;i++){
			
			if(valuePair[i].first == valuePair[i-1].first){
				total += valuePair[i].second - valuePair[i-1].second;
			}
		}
		cout<<total<<endl;
	
	}
	return 0;
}
