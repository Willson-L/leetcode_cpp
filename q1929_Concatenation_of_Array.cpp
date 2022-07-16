#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;        
        int n =nums.size(); 
        int n2=nums.size()*2;
        result.resize(n2);                
        for(int i =0 ; i < n; i++){
            result[i] = nums[i];
            result[n+i] = nums[i];
        }            
        return result;   
    }
};
int main(int argc, char * argv[]){
    vector<int> nums1 ={1,2,1};
    vector<int> result;    
    class Solution cSolution;    
    result = cSolution.getConcatenation(nums1);
    for(int i =0 ; i< result.size(); i ++){
        cout << result[i];        
    }
    system("pause");

}