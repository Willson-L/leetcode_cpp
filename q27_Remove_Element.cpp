#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int remove_num = 0;
        int j=0;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[j] = nums[i];
                j++;
            }
            else{
                remove_num++;
            }
        }
        for(int i =0 ; i < remove_num; i++){
            nums.erase(nums.end()-1);

        }  
        for(int i =0 ; i<nums.size(); i++){
            cout<< nums[i];

        }   
        return (int(nums.size())) ;
    }
};
int main(int argc, char * argv[]){
    vector<int> intput = {3,2,2,3};
    int target =3;
    class Solution cSolution;
    int result;
    result = cSolution.removeElement(intput,target);    
    cout << result<<endl;
    system("pause");

}