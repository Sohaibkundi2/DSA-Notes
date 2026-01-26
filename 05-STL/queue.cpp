#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(2);
    q.push(5);
    q.push(3);
    q.pop();
    q.push(9);

    queue<int> q2;

    swap( q2, q);

    cout<<q.size()<<endl;
    cout<<q2.size()<<endl;

    while( !q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;

    return 0;
}