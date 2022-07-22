#include <stdio.h>
#include<string.h>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool buddyStrings(string s, string goal) {
        string r_s="";
        for(int i = s.length()-1; i>=0; i--){
            r_s +=s[i];
        }
        if(r_s == goal){
            return true;
        }
        return false;
    }
};
int main(int argc, char * argv[]){
    string s ="aa";
    string goal ="aa";
    bool result;
    class Solution cSolution;
    result = cSolution.buddyStrings(s, goal);
    cout << result;
    system("pause");
}