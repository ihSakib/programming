#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;

    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        vector<string> word(n);
        vector<int> sub_string_match_count(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> word[i];
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (word[j].find(word[i]) != string::npos)
                {
                    sub_string_match_count[i]++;
                }
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << sub_string_match_count[i] << endl;
        }
    }

    return 0;
}
