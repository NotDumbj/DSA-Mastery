#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<pair<int, int>> vec = {{2,6}, {1,9}, {4,3}, {5,1}, {6,5}, {7,8}, {3,2}, {9,4}};
    sort(vec.begin(), vec.end(), [](const pair<int, int> p1, const pair<int, int> p2){ return p1.second < p2.second; });
    for(auto &value : vec){
        cout << "(" << value.first << ", " << value.second << ") ";
    }
    return 0;
}