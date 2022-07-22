#include <stdio.h>
#include<string.h>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        int sum=0;
        if(s!=""){
            sum =1;
        }
        for(int i=0 ; i< s.length(); i++){
            if(isspace(s[i])){
                sum++;
            }
        }
        return sum;
    }
};
int main(int argc, char * argv[]){
    string s ="";
    int result;
    class Solution cSolution;
    result = cSolution.countSegments(s);
    cout << result;
    system("pause");
}