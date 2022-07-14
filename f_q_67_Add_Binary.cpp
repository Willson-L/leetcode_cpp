#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {        
        int len_max = a.length() > b.length() ? a.length():b.length();        
        for(int i= len_max;i>=0; i--){            
        }
    }
};
int main(int argc, char * argv[]){
    string a ="11";
    string b ="0";
    class Solution cSolution;
    int result = cSolution.addBinary(a,b);    
    cout << result<<endl;
    system("pause");

}