#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string, int> m;

    m["name-id"] = 101;
    m["order-id"]=13942;
    m["quantity"] = 5;
    m.insert({"active",1});

    //ans will in acending order
    // unique key value pair

    cout<<m.count("active")<<endl; //1 -> number of items

    //multi map
    multimap<string,string> name;
    name.insert({"Name is", "Sohaib"});
    name.insert({"Name is", "Sohaib"});
    name.insert({"Name is", "Sohaib"});
    name.insert({"Name is", "Sohaib"});

    // unordermap
    // same but printing unorder and unique

    for(auto pair:m){
        cout<<pair.first <<": "<<pair.second<<endl;
    }
    for(auto pair:name){
        cout<<pair.first <<": "<<pair.second<<endl;
    }

    return 0;
}