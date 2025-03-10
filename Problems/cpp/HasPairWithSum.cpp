#include <iostream>
#include <vector> 
using namespace std;

bool HasPairWithSum(const vector<int> &data, int sum)
{
    int low = 0;
    int hi = data.size() - 1;
    while (low < hi)
    {
        int s = data[low] + data[hi];
        if (s == sum)
            return true;
        else if (s < sum)
            low++;
        else
            hi--;
    }
    return false;
}

int main() {
    // only applicable for sorted array
    vector<int> data = {
        1,
        2,
        7,
        24};
    int sum = 9;

    bool x = HasPairWithSum(data, sum);

    // Output the result
    if (x){
        cout << "There exists a pair with the sum " << sum << endl;}
    else{
        cout << "No pair exists with the sum " << sum << endl;}

    return 0;
}
