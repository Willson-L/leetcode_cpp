#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int num =0;
        vector<int> nums ;
        for(int i =0 ; i < s.length(); i++){
            if(isspace(s[i])){
                if(num !=0){
                    nums.insert(nums.begin(), num);
                    num =0;
                }
            }      
            else{
                num ++;
            }
            if(i == s.length()-1){
                if(!isspace(s[i])){
                    nums.insert(nums.begin(), num);
                }
            }   
        }
        return nums[0];
    }
};
int main(int argc, char * argv[]){
    string str ="luffy is still joyboy";
    class Solution cSolution;
    int result;
    result = cSolution.lengthOfLastWord(str);    
    cout << result;
    system("pause");

}