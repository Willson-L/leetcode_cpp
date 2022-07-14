#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans ={0,0};
        for(int i =0 ; i < nums.size(); i++){
            for(int j =0 ; j < nums.size(); j++){
                int sum_num = 0;
                if(i != j){
                    sum_num =  nums[i] + nums[j];
                    if(sum_num == target){
                        ans[0] =i;
                        ans[1] =j;
                        return ans;
                    }
                }                
            }
        }
        return ans;
    }
};
int main(int argc, char * argv[]){
    vector<int> intput = {3,2,4};
    vector<int> result;
    int target = 6;
    class Solution cSolution;
    result = cSolution.twoSum(intput,target);
    for(int i= 0; i< result.size(); i++){
        cout << result[i];
    }

}