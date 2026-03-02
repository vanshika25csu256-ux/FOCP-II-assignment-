#include<iostream>
using namespace std;

int main () {

string code[5]; 
int x = 0;

cout<<"ENTER 5 CODES\n";
for (int i = 0; i<5;i++) {

cin>>code[i];

}

for (int j = 0; j<5;j++) {
    int n = 0;
    code[j] = n;

if (n % 3 == 0 && n % 5 == 0)
{
    x++;
}
 
}



cout<<"no. divisible by 3 and 5"<<endl;
cout<<x<<endl;



}