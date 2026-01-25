#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l={1,2,5,2,4,3};

    // l.push_back(2);
    // l.push_front(0);
    // l.pop_back();
    // l.pop_front();

    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;

    // cout<<" size is "<<l.size();


    return 0;
}