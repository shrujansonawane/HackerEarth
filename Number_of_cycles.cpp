#include <iostream>

using namespace std;

int main() {
	long int num;
	cin >> num;										// Reading input from STDIN
	for(long int i=0;i<num;i++){
		long int z,k;
		cin>>z;
		k = ((z)*(z-1)+1);      //formula to find the count of simple cycles
		cout<<k<<endl;
	}

}
