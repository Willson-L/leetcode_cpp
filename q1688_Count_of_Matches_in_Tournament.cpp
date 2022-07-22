#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int sum =0;
    int numberOfMatches(int n) {        
        if(n %2 ==0  && n!=2){
            if(((n-1)/2 +1)!=1){
                sum += n/2;
                return numberOfMatches(n/2);
            }         
            else{
                return sum;
            }
        }
        else if(n == 2){
            return sum +=1;
        }
        else{
            n= n+1;
            sum -=1;
            return numberOfMatches( n);
        }
    }
};
int main(int argc, char * argv[]){
    int n = 14;
    int result;
    class Solution cSolution;    
    result = cSolution.numberOfMatches(n);        
    cout << result;    
    system("pause");
}
