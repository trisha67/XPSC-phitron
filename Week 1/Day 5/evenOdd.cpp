#include<bits/stdc++.h>
using namespace std;

long long maxEvenSum(int n, const vector<int>& numbers) {
    long long total_sum = 0;
    int smallest_odd = INT_MAX;
    
    for (int num : numbers)
     {
        total_sum += num;
        if (num % 2 != 0) 
        {
            smallest_odd = min(smallest_odd, num);
        }
    }

    if (total_sum % 2 == 0)
     {
        return total_sum;
     } 
    else
    {
        return total_sum - smallest_odd;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    cout << maxEvenSum(n, numbers) << endl;
    return 0;
}
