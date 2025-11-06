#include<iostream>
using namespace std;

int main(){
    // Bitwise operators

    // Right shift operator performs division by powers of 2
    // Left shift operator performs multiplication by powers of 2
    cout<<"Bitwise operators"<<endl;
    cout<<"------------------"<<endl;
    // Right shift operator (>>)
    for(int i=1; i<=10; i++){
        cout<<(i>>1)<<endl;
    }
    cout<<"------------------"<<endl;
    // Left shift operator (<<)
    for(int i=1; i<=10; i++){
        cout<<(i<<1)<<endl;
    }

    cout<<"------------------"<<endl;

    int a=6, b=5;
    // AND operator (&)
    cout<<(a&b)<<endl;
    // OR operator (|)
    cout<<(a|b)<<endl;
    // XOR operator (^)
    cout<<(a^b)<<endl;

    return 0;
}   