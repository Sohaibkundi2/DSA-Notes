#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(2);
    s.push(5);
    s.push(3);
    s.pop();
    s.push(9);

    stack<int> s2;

    swap( s2, s);

    cout<<s.size()<<endl;
    cout<<s2.size()<<endl;

    while( !s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;

    return 0;
}