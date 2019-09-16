// Program to find the anagram strings. anagram strings means 
// two strings having same characters but may be in different order
// ex: silent, listen.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isAnagram(string A, string B){
    int n1, n2, i;
    n1=A.length();
    n2=B.length();
    if(n1!=n2){
        return false;
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for(i=0;i<n1;i++){
        if(A[i]!=B[i]){
            return false;
        }
    }
    return true;
}


int main(){
    string s1="listen", s2="silent";
    cout<<isAnagram(s1,s2)<<endl;
    return 0;
}

// time complexity is O(nlogn) - n for loop and logn for sort().