#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        else if(n ==1){
            return true;
        }
        else if(n %2 ==0){
            return isPowerOfTwo(n /2);
        }
        else{
            return false;
        }        
    }
};
int main(int argc, char * argv[]){    
    int intput = 1;
    class Solution cSolution;
    bool result;
    result = cSolution.isPowerOfTwo(intput);    
    cout << result;
    system("pause");

}