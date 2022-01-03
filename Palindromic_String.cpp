#include <iostream>
using namespace std;
int flag=0;
int main() {
	string n;
	cin >> n;	
	int z = n.length();									
	for(int i=0; i<z; i++){
		if(n[i] != n[z-i-1]){
            flag = 1;
            break;
   		}
	}	   
   if (flag) {
        cout <<"NO"; 
    }    
    else {
        cout << "YES"; 
    }

}		

