#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;	
	long int a,b,count;	
									
	while(num--){
		cin>>a>>b;
		count=0;
		int temp=0;
		
		for(int i=a;i<=b;i++){
			temp=i;
			int revnum=0;
		while(temp!=0){
			int z = temp%10;
			revnum = 10*revnum+z;
			temp = temp/10;
			}
			if(i == revnum){
				count++;
			
		
			}
			
		}
		cout<<count<<endl;

	}
	return 0;
}
