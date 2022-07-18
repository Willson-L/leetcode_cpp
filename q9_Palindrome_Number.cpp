#include <stdio.h>
#include<string.h>
#include<limits.h> 
#include <iostream>
#include <vector>


using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
                int y = 0;
        int z = x; 
        if (x <0) return false;
        while(z !=0){
            if(y >(INT_MAX/10) | y<(INT_MIN/10)) return false;            
            y = y *10 + z%10;
            z =z/10;
            
        }
        if(y ==x) return true;
        else return false;             
    }
};
int main(int argc, char * argv[]){
    int intput= argc;
    intput = 13042431;
    class Solution cSolution;
    bool result;
    result = cSolution.isPalindrome(intput);
    fputs(result ? "true" : "false", stdout);
}