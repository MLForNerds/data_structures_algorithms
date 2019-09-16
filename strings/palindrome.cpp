// Palindrome is a word or sentence which reads the same from 
// backwards and forwards. Ex: racecar, "no word, no bond, row on".
// Incase of sentence, the spaces and commas are ignored. Only check if
// the character is alphabet or not.

#include<iostream>
#include<string>

using namespace std;

bool palindrome(string s){
    int i, j;
    i=0;
    j=s.length()-1;
    while(i<j){
        while(i<j && isalnum(s[i])==0)
            i++;
        while(i<j && isalnum(s[j])==0)
            j--;

        if(toupper(s[i])!=toupper(s[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){
    // string s="racecar";
    string s = "no word, no bond, row on";
    cout<<palindrome(s)<<endl;
}

// complexity is O(n)