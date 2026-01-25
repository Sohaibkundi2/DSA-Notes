#include<iostream>
#include<vector>

using namespace std;
int main(){

    vector<int> vec = {1,2,3,4,5};
    vector<int> vec2(vec);
    vector<float> vec3(2,4);

    // vector<int>::iterator itr; // we can initialized here or in loop also

    // vec.erase(vec.begin());
    // vec.erase(vec.begin() +3);
    // vec.erase(vec.end()-1); 

    // vec.insert(vec.begin(), 6);
    // vec.insert(vec.begin() +2, 7);
    // vec.insert(vec.end(), 8);

    // vec.clear();

    // if(!vec.empty()){
    //     cout<<"vector is not empty "<< endl;
    // }

    // cout<<"value at position 2 is : "<<vec[2]<<endl;
    // cout<<"value at position 4 is : "<<vec2[4]<<endl;
    // cout<<"value at position 0 is : "<<vec3[0]<<endl; 

    // for( vector<int>::iterator itr = vec.begin(); itr !=vec.end(); itr++){
    //     cout<< *(itr)<<" ";
    // }
    //    cout<<endl;
    for( auto itr = vec.begin(); itr !=vec.end(); itr++){
        cout<< *(itr)<<" ";
    }
       cout<<endl;
    for( auto itr = vec.rbegin(); itr !=vec.rend(); itr++){
        cout<< *(itr)<<" ";
    }
    cout<<endl;

    return 0;
}