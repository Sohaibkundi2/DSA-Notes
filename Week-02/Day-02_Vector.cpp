#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> vect = {1, 2, 4};


    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);

    vect.pop_back();

    cout<<"size of vect: "<< vect.size() <<endl;

    cout<<"front element: "<< vect.front() <<endl;
    cout<<"back element: "<< vect.back() <<endl;

    cout<<"Element at index 2: "<< vect.at(2) <<endl;

    // for(int i =0; i<vect.size(); i++){
    //     cout<<"vect at arr["<< i <<"]: "<< vect[i]<<endl;
    // }

    for(int val: vect){
        cout<< val <<endl;
    }

    return 0;
}