#include <bits/stdc++.h>
using namespace std;

int max_index(vector<int> weights, vector<int> values) {
    int maxini = 0;
    double max = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            maxini = i;
        }
    }
    return maxini;
}

double optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;

    for (int i=0;i<weights.size();i++) {
        if (capacity==0){
            return value;
        } 
        int index = max_index(weights, values);
        int a = min(capacity, weights[index]);
        value += a * (double) values[index] / weights[index];
        weights[index] -= a;
        capacity -= a;
    }

    return value;
}

int main() {
    int n;
    int capacity;
    cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin>>values[i]>>weights[i];
    }

    double optimal_value = optimal_value(capacity, weights, values);

    cout.precision(10);
    cout << optimal_value <<"/n";
    return 0;
}