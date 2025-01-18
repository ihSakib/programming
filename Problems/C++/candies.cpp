#include <bits/stdc++.h>
using namespace std;

int to_be_eaten(int n_of_boxes, int *boxes)
{
    for (size_t i = 0; i < n_of_boxes; i++)
    {
        cin >> boxes[i];
    }

    int min = boxes[0];
    int eats = 0;
    for (int i = 1; i < n_of_boxes; i++)
    {
        min = boxes[i] < min ? boxes[i] : min;
    }

    for (int i = 0; i < n_of_boxes; i++)
    {
        if (boxes[i] != min)
        {
            eats += boxes[i] - min;
        }
    }

    return eats;
}

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case-- != 0)
    {
        int n_of_boxes;
        cin >> n_of_boxes;
        int boxes[n_of_boxes];

        int eats = to_be_eaten(n_of_boxes, boxes);
        cout << eats;
    }
}