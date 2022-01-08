#include<bits/stdc++.h>

using namespace std;


 

int main(){

int n = 3;

string s1 , s2, s3;

cin>>s1>>s2>>s3;

string s = "" + s1 + s2 + s3;

int d = 0 , o = 0 , x = 0;


 

for(int i = 1; i <= n*n; i++){

if(s[i-1] == '.') d++;

else if(s[i - 1] == 'O') o++;

else if(s[i - 1] == 'X') x++;

}

if((abs(x - o) == 1 || abs(x - o) == 0) && !(o != 0 && x == 0)){

if(s[0] == 'X' && s[1] == 'X' && s[2] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'X' && s[3] == 'X' && s[6] == 'X' ) {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'X' && s[4] == 'X' && s[8] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[1] == 'X' && s[4] == 'X' && s[7] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'X' && s[5] == 'X' && s[8] == 'X'){

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[3] == 'X' && s[4] == 'X' && s[5] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[6] == 'X' && s[7] == 'X' && s[8] == 'X'){

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'X' && s[4] == 'X' && s[6] == 'X') {

if(x > o)

cout<<"X won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'O' && s[4] == 'O' && s[8] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'O' && s[1] == 'O' && s[2] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[0] == 'O' && s[3] == 'O' && s[6] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[1] == 'O' && s[4] == 'O' && s[7] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'O' && s[5] == 'O' && s[8] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[3] == 'O' && s[4] == 'O' && s[5] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[6] == 'O' && s[7] == 'O' && s[8] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else if(s[2] == 'O' && s[4] == 'O' && s[6] == 'O') {

if(x == o)

cout<<"O won.";

else cout<<"Wait, what?";

}

else{

if(d == 9) cout<<"X's turn.";

else if(d == 0) cout<<"It's a draw.";

else{

if(x > o) cout<<"O's turn.";

else if(o > x) cout<<"X's turn.";

else if(x == o) cout<<"X's turn.";

}

}

}

else cout<<"Wait, what?";

return 0;

}
