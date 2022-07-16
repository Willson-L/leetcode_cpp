#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result_num;   
        result_num = nums;     
        for(int i=0; i<nums.size();i++){
            int j=i;
            int sum =0;
            while(j>=0){                    
                sum += nums[j];
                j --;
            }
            result_num[i]=sum;
        }
        return result_num;
    }
};
int main(int argc, char * argv[]){
    vector<int> nums1 ={3,1,2,10,1};
    vector<int> result;    
    class Solution cSolution;    
    result = cSolution.runningSum(nums1);
    for(int i =0 ; i< result.size(); i ++){
        cout << result[i];        
    }
    system("pause");

}