
#include<iostream>
using namespace std;
int main(){
 int A,B;
 cin>>A>>B;
 if (A%B==0 || B%A==0)
    cout<<"Multiples\n";
 else
    cout<<"No Multiples\n";
 return 0;
}
