#include <iostream>
#include <initializer_list>

using namespace std;

int minmax(string type, initializer_list<int> numbers)
{
    int result = *numbers.begin();

    for (auto i : numbers)
    {
        if (type == "min")
        {
            result = i < result ? i : result;
        }
        else if (type == "max")
        {
            result = i > result ? i : result;
        }
    }

    return result;
}

int main()

{
    cout << "Min: " << minmax("min", {5, 3, 2, 8, 1}) << endl;
    cout << "Max: " << minmax("max", {5, 3, 2, 8, 1}) << endl;
    return 0;
}