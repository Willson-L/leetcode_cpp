#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> re_vector;
        re_vector.resize(accounts.size());
        for(int i =0; i< accounts.size(); i++){
            int sum = 0;
            for(int j =0 ; j<accounts[i].size(); j++){
                
                sum += accounts[i][j];
            }
            re_vector[i] = sum;
        }
        int result_max = re_vector[0];
        for(int i =0 ; i < re_vector.size(); i++){
            if(re_vector[i] >result_max){                
                result_max =re_vector[i];
            }
        }
        return result_max;
    }
};
int main(int argc, char * argv[]){
    vector<vector<int>> nums1 ={{2,8,7},{7,1,3},{1,9,5}};
    int result;    
    class Solution cSolution;    
    result = cSolution.maximumWealth(nums1);    
    cout << result;
    system("pause");

}