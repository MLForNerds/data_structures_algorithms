// Converting roman letters to integer. I-1, V-5, X-10, L-50, C-100, D-500, M-1000
// LXXIX=79
// Approach: we will start from the right end of the string to left in a loop
//           we will find the equivalent int value of that roman character.
//           we keep two variables p-to store the previous roman value, ans-for answer
//           we will compare every int value of roman character one by one and
//           add/subtract the int value to the answer depending on condition.
//           condition: if curr(int)<prev(int) - subtract the current int from ans
//                      else - add the current int to ans.

#include<iostream>
#include<string>

using namespace std;

int value(char roman){
    switch (roman)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    
    default:
        break;
    }
}

int romantoInt(string A){
    int i, p=0, ans=0, n;
    n=A.length()-1;

    for(i=n;i>=0;i--){
        if(value(A[i])>=p){
            ans=ans+value(A[i]);
        }
        else{
            ans=ans-value(A[i]);
        }
        p=value(A[i]);
    }
    return ans;
}

int main(){
    string s= "LXXIX";
    int val = romantoInt(s);
    cout<<val<<endl;
}
//complexity O(n)