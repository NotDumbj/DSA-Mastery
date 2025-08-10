#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<int, char>> vec1 = {{1,'a'}, {1,'b'}, {1,'c'}, {2,'x'}, {2,'y'}, {2,'z'}};
    vector<pair<int, char>> vec2 = vec1; // copy for stable sort

    // Unstable normal sort
    sort(vec1.begin(), vec1.end(),
         [](const pair<int, char> &p1, const pair<int, char> &p2) {
             return p1.first < p2.first; // ignore second completely
         });

    // Stable sort
    stable_sort(vec2.begin(), vec2.end(),
         [](const pair<int, char> &p1, const pair<int, char> &p2) {
             return p1.first < p2.first; // same comparator
         });

    cout << "sort():        ";
    for (auto &value : vec1) {
        cout << "(" << value.first << ", " << value.second << ") ";
    }
    cout << "\n";

    cout << "stable_sort(): ";
    for (auto &value : vec2) {
        cout << "(" << value.first << ", " << value.second << ") ";
    }
    cout << "\n";

    return 0;
}
