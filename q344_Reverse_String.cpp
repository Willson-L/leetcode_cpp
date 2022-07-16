#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> restr;
        restr =s;
        for(int i =0 ; i < s.size(); i++){            
            restr[s.size()-1-i] = s[i];
        }
        for(int i =0 ; i< restr.size(); i ++){
        cout << restr[i];        
    }
    }
};
int main(int argc, char * argv[]){
    vector<char> nums1 ;
    nums1.insert(nums1.end(),'a');
    nums1.insert(nums1.end(),'b');
    nums1.insert(nums1.end(),'c');
    vector<char> result;    
    class Solution cSolution;    
    cSolution.reverseString(nums1);
    
    system("pause");

}
