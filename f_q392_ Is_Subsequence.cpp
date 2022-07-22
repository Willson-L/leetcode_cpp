#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<int> num;                 
        if(s ==t){
            return true;
        }
        for(int i =0; i<s.length(); i++){
            bool is_Sub = false;
            for(int j= 0; j<t.length(); j++){
            
                if(s[i]==t[j]){
                    is_Sub = true;
                    num.push_back(j);
                    break;
                }
            }
            if(!is_Sub){
                return false;
            }        
        }
        for(int i =0; i< num.size(); i++){
            cout << num[i];
        }
        for(int i =0; i< num.size(); i++){
            for(int j =i+1; j< num.size(); j++){
                if(num[i]>=num[j]){
                    return false;
                }
            }
        }
        return true;
    }
};
int main(int argc, char * argv[]){
    string s="bb";
    string t="ahbgdc";
    bool result;
    class Solution cSolution;    
    result = cSolution.isSubsequence(s, t);    
    cout << result;
    system("pause");
}
