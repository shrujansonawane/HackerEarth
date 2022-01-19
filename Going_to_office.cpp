#include <iostream>

using namespace std;

int main() {
	long int d;
	cin >> d;										
	long int c,f,df,online;
	cin>>c>>f>>df;

	online = (c+(d-f)*df);

	long int s,b,m,ds,offline;
	cin>>s>>b>>m>>ds;

	offline = (b+((d/s)*m)+(d*ds));
	if(online<=offline){
		cout<<"Online Taxi";
	}
	else{
		cout<<"Classic Taxi";
	}

	return 0;
}
