#include<iostream>
#include<math.h>
using namespace std;
int main(){

	int t;
	cin>>t;

	for(int i=0;i<t;i++){
		float t0,t1,t2,v1,v2,d;
		float p1,p2,z,y;
		cin>>t0>>t1>>t2>>v1>>v2>>d;
		//cout<<d<<"\n"<<v2<<"\n";
		z=ceil((d/v1)*60);
		y=ceil((d/v2)*60);
		//cout<<z<<"\n"<<y<<"\n";
		p1=t1+z;
		p2=t2+y;
		if((t0 > t1) && (t0 > t2)){
			cout<<"-1"<<endl;
			
		}
		else {
			if(t0 > t1) {
			cout<<p2<<endl;
			}
			else if(t0 > t2) {
			cout<<p1<<endl;
			
			}
			else{
				if(p1<=p2){
				cout<<p1<<endl;
			
				}
			else {
				cout<<p2<<endl;
				}
			
			}
		}

	}
	return 0;
}
