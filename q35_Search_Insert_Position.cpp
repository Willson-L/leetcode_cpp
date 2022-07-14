#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=0;
        for(int i =0 ; i< nums.size(); i++){
            if (nums[i] < target){                
                index++;                
            }
            if(nums[i] == target){
                continue;        
            }
        }
        return index;
    }
};
int main(int argc, char * argv[]){
    vector<int> intput = {1,3,5,6};    
    int target = 2;
    class Solution cSolution;
    int result;
    result = cSolution.searchInsert(intput,target);    
    cout << result;
    

}