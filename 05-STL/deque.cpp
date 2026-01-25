#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> q={1,2,5,2,4,3};

    // q.push_back(2);
    // q.push_front(0);
    // q.pop_back();
    // q.pop_front();
    // cout<<"value at position 3 is "<<q[3]<<endl;
    for(int val:q){
        cout<<val<<" ";
    }
    cout<<endl;



    return 0;
}