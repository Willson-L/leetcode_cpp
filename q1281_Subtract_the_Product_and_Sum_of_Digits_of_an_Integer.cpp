#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int Product =1;
        int Sum =0;
        while(n%10 >=0 && n>0){
            Product= Product*(n%10);
            Sum+= n%10;
            n=n/10;
        }
        return Product -Sum;
    }
};
int main(int argc, char * argv[]){
    int n= 234;
    class Solution cSolution;
    int result;
    result = cSolution.subtractProductAndSum(n);    
    cout << result;
    system("pause");

}