#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int sum =0;
        for(int i =0; i < operations.size(); i++){
            if(operations[i]=="X++" ||operations[i]=="++X"){
                sum++;
            }
            else if(operations[i]=="X--" ||operations[i]=="--X"){
                sum--;
            }
        }
        return sum;
    }
};
int main(int argc, char * argv[]){
    vector<string> str = {"X++","X--","++X"};
    int result;
    class Solution cSolution;    
    result = cSolution.finalValueAfterOperations(str);        
    cout << result;    
    system("pause");
}
