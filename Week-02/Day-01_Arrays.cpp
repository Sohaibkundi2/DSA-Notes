#include <iostream>
using namespace std;

int main()
{

    double marks[] = {88, 84, -35, 29, 92};
    int sz = 5;

    // cout<<"marks at [0]: "<< marks[0]<<endl;
    // cout<<"marks at [1]: "<< marks[1]<<endl;
    // cout<<"marks at [2]: "<< marks[2]<<endl;
    // cout<<"marks at [3]: "<< marks[3]<<endl;
    // cout<<"marks at [4]: "<< marks[4]<<endl;

    // cout<<"size of marks: "<< sizeof(marks)/__SIZEOF_DOUBLE__<<endl;

    // for(int i =0; i<sz; i++){
    //     cout<<"marks at arr["<< i <<"]: "<< marks[i]<<endl;
    // }

    // to find the smallest number in the array
    int smallest = marks[0];
    for (int i = 1; i < sz; i++)
    {
        if (marks[i] < smallest)
        {
            smallest = marks[i];
        }
    }
    // cout<<"Smallest number is: "<< smallest<<endl;

    // to find the largest number in the array
    int largest = marks[0];
    for (int i = 1; i < sz; i++)
    {
        if (marks[i] > largest)
        {
            largest = marks[i];
        }
    }

    // cout<<"Largest number is: "<< largest <<endl;

    // to double the values of the array
    // for(int i = 1; i < sz; i++){
    //         marks[i] = marks[i] *2;
    // }

    // cout<<"Doubled values are: "<<endl;
    // for(int i =0; i<sz; i++){
    //     cout<<"marks at arr["<< i <<"]: "<< marks[i]<<endl;
    // }

    int start = 0;
    int end = sz - 1;
    while (start < end)
    {
        int temp = marks[start];
        marks[start] = marks[end];
        marks[end] = temp;
        start++;
        end--;
    }

    cout << "\nReversed array: ";
    for (int i = 0; i < sz; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}