#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> re_num;
        re_num = nums;
        for(int i=0 ; i< nums.size(); i++){           
            re_num[i] = nums[nums[i]];
        }
        return re_num;
    }
};
int main(int argc, char * argv[]){
    vector<int> num ={5,0,1,2,3,4};    
    vector<int> result;
    class Solution cSolution;    
    result = cSolution.buildArray(num);    
    for(int i=0 ; i< result.size(); i++){
        cout << result[i];
    }
    system("pause");
}
