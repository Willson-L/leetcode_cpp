#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {        
        if(haystack.length() <needle.length()){return -1;}
        for(int i =0; i< haystack.length(); i++){
            for(int j=0; j<needle.length(); j++){
                if(haystack[i+j] != needle[j]){                                        
                    break;
                }
                else{
                    if(j+1 ==needle.length()){return i;}
                }
            }
        }
        return -1;        
    }
};
int main(int argc, char * argv[]){
    string haystack ="hellellow";
    string needle ="ello";
    class Solution cSolution;
    int result = cSolution.strStr(haystack,needle);    
    cout << result<<endl;
    system("pause");

}