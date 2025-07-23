#include<iostream>
#include<cmath>
using namespace std;

bool palindromeChecker(string data, int len, int rindex, int index=0){
    if(index==floor(len/2)){ // I used floor(len/2) but it can be replaced with index >= rindex for simplicity
        return true;
    }
    if(!(data[index]==data[rindex])){
        return false;
    }
    return palindromeChecker(data, len, rindex-1, index+1);
}   

int main()
{
    string word;
    cin >> word;
    if(palindromeChecker(word, word.length(), word.length()-1)){
        cout << "Palindrome";
    }
    else {
        cout << "Not Palindrome";
    }
    return 0;
}