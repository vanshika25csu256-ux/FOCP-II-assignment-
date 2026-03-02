#include<iostream>
using namespace std;
#include<string>
int main() {

string stock[5];
string final[5];
cout<<"enter the stocks price\n";
for (int s = 0; s<5;s++){
    cin>>stock[0];
}

for (int i = 0; i < 5; i++) {

    for (int j = 0; j<5; j++) {
int k = 0;
if (stock[i] < stock[j] ) {

    final[k] = stock[i];
    k++;

}

    }


}




for (int m = 0; m<2;m++) {
    cout<<final[m]<<endl;
}




return 0;

}