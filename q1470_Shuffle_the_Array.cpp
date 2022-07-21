#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {        
        vector<int> re_nums;        
        //re_nums = nums;
        for(int i = 0; i<n; i++){        
            re_nums.push_back(nums[i]);
            re_nums.push_back(nums[n+i]);
        }  
        return re_nums;
    }
};
int main(int argc, char * argv[]){
    vector<int> nums1 ={2,5,1,3,4,7};
    int n =3;
    vector<int> result;    
    class Solution cSolution;    
    result = cSolution.shuffle(nums1, n);    
    for(int i=0; i<result.size(); i++){
        cout << result[i]<<endl;
    }    
    system("pause");
}