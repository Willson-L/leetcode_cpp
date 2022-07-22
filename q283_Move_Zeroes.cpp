#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_num = 0;
        vector<int> re_num;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] != 0){
                re_num.push_back(nums[i]);
            }
            else{
                zero_num ++;
            }
        }
        for(int i =0; i< zero_num; i++){
            re_num.push_back(0);
        }
        nums = re_num;
        /*for(int i =0; i< re_num.size(); i++){
            cout << re_num[i];
        }*/
    }
};
int main(int argc, char * argv[]){
    vector<int> nums1 ={0,1,0,3,12};

    class Solution cSolution;    
    cSolution.moveZeroes(nums1);
    
    system("pause");

}
