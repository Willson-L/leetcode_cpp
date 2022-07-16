#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;        
        result.resize(m+n,-1);                
        if(m ==0){
            for(int j=0; j<n; j++){
                result[j] = nums2[j];
            }
        }
        else if(n==0){
            for(int i=0; i<m; i++){
                result[i] = nums1[i];
            }
        }
        else{
            int i,j,index;
            for( i= 0,j=0, index =0; (i<m && j<n);index++){
                if(nums1[i]<nums2[j]){
                    result[index] = nums1[i];
                    i++;                    
                }
                else{
                    result[index] = nums2[j];
                    j++;
                }                
            }
            while(i<m){
                result[index] = nums1[i];
                i++;
                index++;
            }                        
            while(j<n){
                result[index] = nums2[j];
                j++;
                index++;
            }           
        }
        nums1 =result;

        /*for(int i =0 ; i< result.size(); i ++){
            cout << result[i];
        } */   
    }
};
int main(int argc, char * argv[]){
    vector<int> nums1 ={0};
    vector<int> nums2 ={1};
    int m = 0;
    int n =1;
    class Solution cSolution;
    vector<int> result;
    cSolution.merge(nums1, m, nums2, n);    
    
    system("pause");

}