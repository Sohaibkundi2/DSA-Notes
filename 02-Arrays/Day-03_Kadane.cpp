#include <iostream>
using namespace std;

int main()
{

    int vec[] = {6, 2, 8, 5, -2};
    int n = 5;

    // for(int start = 0; start < n; start++){

    //     for(int end = start; end <n; end++){

    //         for (int i = start; i <= end; i++){

    //             cout<<vec[i]<<" ";
    //         }
    //         cout<<"     ";
    //     }
    //     cout<<endl;
    // }

    int maxSum = INT8_MIN;

    for(int start = 0; start < n; start++){

        int currSum= 0;

        for(int end = start; end <n; end++){

            currSum +=vec[end];
            maxSum = max(maxSum, currSum);

            if(currSum < 0){
                currSum = 0; // Reset current sum if it goes negative
            }
        }
    }
    cout << maxSum;





    return 0;
}