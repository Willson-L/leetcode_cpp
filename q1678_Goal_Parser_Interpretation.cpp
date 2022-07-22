#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string interpret(string command) {
        string re_str="";
        int i =0;
        while(i< command.length()){
            if(command[i]=='G'){
                re_str +='G';
                i++;
            }
            if(command[i]=='('){
                if(command[i+1] ==')'){
                    re_str +="o";
                    i +=2;
                }
                else if(command[i+1] =='a'){
                    re_str +="al";
                    i +=4;
                }
            }
        }
        return re_str;        
    }
};
int main(int argc, char * argv[]){
    string str="(al)G(al)()()G"; 
    string result;
    class Solution cSolution;    
    result = cSolution.interpret(str);        
    cout << result;    
    system("pause");
}
