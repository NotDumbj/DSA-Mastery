#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> vec = {2,1,5,6,8,4,9,7,2,3,6,4,1};
    int x;
    cin >> x;
    sort(vec.begin(), vec.end());
    if(binary_search(vec.begin(), vec.end(), x)){
        cout << "Value Found";
    }
    else{
        cout << "Value Not Found";
    }
    return 0;
}