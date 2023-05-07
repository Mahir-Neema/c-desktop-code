#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vi>
#define vc vector<char>
#define vi vector<int>
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front


void maxSlidingWindow(const vi & nums, int k) {
    vi ans;
    deque<int> index;
    int id = 0;
    index.push_front(id);
    id++;
    while(id<k) {
        if (nums[id] >= nums[index.front()]) index.push_front(id);
            
        else {
            while(nums[index.back()] < nums[id])
                index.popb();
            index.pb(id);
        }
        id++;
    }
    ans.pb(nums[index.front()]);
    while ((size_t)id < nums.size()) {
        while (id-index.front() >= 3) index.popf();
        if (nums[id] >= nums[index.front()]) index.pf(id);
        else {
            while(nums[index.back()] < nums[id])
                index.popb();
            index.pb(id);
        }
        id++;
        ans.pb(nums[index.front()]);
    }
    

    for (size_t i = 0; i < nums.size() - k + 1; ++i) {
        int window_max = nums.at(i);
        for (size_t j = i + 1; j < i + k; ++j)
            window_max = max(window_max, nums.at(j));

        cout << window_max << " ";
    }
}

int main() {
    int n = 0;
    cin >> n;

    vi A(n);
    for (size_t i = 0; i < n; ++i)
        cin >> A.at(i);

    int w = 0;
    cin >> w;

    maxSlidingWindow(A, w);

    return 0;
}