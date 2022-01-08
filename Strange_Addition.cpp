#include <iostream>

using namespace std;

int revers(int n){
	int reverse=0, rem;
	while(n>0)    
  	{    
     	rem=n%10;      
    	reverse=reverse*10+rem;    
     	n=n/10; 
		   
  	} 
      return reverse;
}

int main() {
	int t;
	cin >> t;										
	while(t--){

		int m,n;
		cin>>m>>n;
		int f,s,z;
		f=revers(m);
		s=revers(n);
		
		z=revers(f+s);
		cout<<z<<endl;
   
	}

    return 0;
}
