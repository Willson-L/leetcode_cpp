#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {        
        
        for(int i = digits.size()-1; i>=0; i--){                                        
            digits[i]= digits[i] + 1;
            if(digits[i] ==10){
                digits[i] = 0;                           
                if(digits.size()-i ==digits.size()){
                    digits.insert(digits.begin(),1);
                }
            }    
            else{
                break;
            }   
        }   
        return digits;  
    }
};
int main(int argc, char * argv[]){
    vector<int> intput = {9,9};        
    class Solution cSolution;
    vector<int> result;    
    result = cSolution.plusOne(intput);    
    for (int i =0; i< result.size(); i++){
        cout << result[i];
    }        
    system("pause");
}