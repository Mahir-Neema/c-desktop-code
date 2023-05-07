#include<bits/stdc++.h>
using namespace std;
int change_Money(int n) {
    int coins[] = {10, 5, 1};
    int count = 0;
    for (int i=0;n>0;++i) {
        count = count + n / coins[i];
        n = n % coins[i];
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << change_Money(n) << endl;
    return 0;
}