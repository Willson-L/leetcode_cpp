#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
class Solution {
public:
    int gcd(int m, int n) { 
        if(n == 0) 
            return m; 
        else 
            return gcd(n, m % n); 
    }
    int findGCD(vector<int>& nums) {
        int smallest = nums[0];
        int  largest=0;
        int result =1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>largest){
                largest = nums[i];
            }
            if(nums[i]<smallest){
                smallest = nums[i];
            }            
        }    
        result = gcd(largest,smallest);
        return result;
    }
};
int main(int argc, char * argv[]){
    vector<int> nums1 ={6,7,9};
    int result;
    class Solution cSolution;    
    result = cSolution.findGCD(nums1);
    cout << result;
    system("pause");

}
