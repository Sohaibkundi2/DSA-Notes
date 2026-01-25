#include <iostream>
using namespace std;

int main(){

    // pair<int,char> p = {1,'a'};

    // cout<<p.first<<endl;
    // cout<<p.second<<endl;


    pair<int,pair<char,int>> p2 = {4, {'s',2}};

    cout<<p2.first<<endl;
    cout<<p2.second.first<<" : ";
    cout<<p2.second.second<<endl;

    cout<<endl;



    return 0;
}