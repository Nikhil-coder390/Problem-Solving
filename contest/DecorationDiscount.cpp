#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int minSum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int sum = arr[i] + (arr[i + 1] / 2);
            minSum = min(minSum, sum);
            int newSum = 0;
            for (int j = i + 1; j < n; j++)
            {
                newSum = arr[i] + arr[j];
                if (sum <= newSum)
                {
                    minSum = min(minSum, sum);
                }
                else
                {
                    minSum = min(minSum, newSum);
                }
            }
        }
        cout << minSum << endl;
        t--;
    }
    return 0;
}
