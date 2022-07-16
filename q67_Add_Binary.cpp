#include <stdio.h>
#include <iostream>
#include <string>
#include<string.h>

using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {        
        int i=a.size()-1, j=b.size()-1;
        int carry=0, sum;
        string res="";
        while( i>=0 || j>=0 || carry){
            sum = carry;
            if(i>=0){
                sum += a[i]-'0';
                i--;
            }
            if(j>=0){
                sum += b[j]-'0';
                j--;                
            }
            res = to_string(sum%2) +res;
            carry = sum /2;
        }
        return res;
    }
};
int main(int argc, char * argv[]){
    string a ="11";
    string b ="1";
    class Solution cSolution;
    string result = cSolution.addBinary(a,b);    
    cout << result<<endl;
    system("pause");

}