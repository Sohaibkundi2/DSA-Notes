#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(0);

    s.erase(2); // value

    cout << "set count for number of 6 is : " << s.count(6) << endl;
    cout << "lower bound : value should not be less than target,  2 is : " << *(s.lower_bound(2)) << endl;
    cout << "upper boutnd : value should greater than key : " << *(s.upper_bound(2)) << endl;

    multiset<int> s2;

    s2.insert(10);
    s2.insert(10);
    s2.insert(10);
    s2.insert(10);
    s2.insert(10);

    unordered_set<int> s3;
    s3.insert(10);
    s3.insert(2);
    s3.insert(0);
    s3.insert(15);

    for (int val : s)
    {
        cout << val << " ";
    }
    cout << endl;
    for (int val : s2)
    {
        cout << val << " ";
    }
    cout << endl;
    for (int val : s3)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}