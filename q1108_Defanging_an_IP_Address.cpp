#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string re_str="";
        for(int i =0 ; i< address.length(); i++){
            if(address[i]=='.'){
                re_str += "[.]";
            }
            else{
                re_str +=address[i];
            }
        }
        return re_str;
    }
};
int main(int argc, char * argv[]){
    string address="127.0.0.1"; 
    string result;
    class Solution cSolution;    
    result = cSolution.defangIPaddr(address);        
    cout << result;    
    system("pause");
}
