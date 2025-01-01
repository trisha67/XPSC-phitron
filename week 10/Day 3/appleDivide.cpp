#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> weights(n);
    for (int i = 0; i < n; ++i) {
        cin >> weights[i];
    }

    int total_weight = 0;
    for (int weight : weights) {
        total_weight += weight;
    }

    int min_diff = total_weight;
    for (int mask = 0; mask < (1 << n); ++mask) {
        int group1_weight = 0;
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                group1_weight += weights[i];
            }
        }
        int group2_weight = total_weight - group1_weight;
        int diff = abs(group1_weight - group2_weight);
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;
    return 0;
}
