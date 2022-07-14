#include <stdio.h>
#include<string.h>
#include<limits.h> 
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> upper_quotation;
        for (int i = 0; i <s.size(); i++){
            switch (s[i]){
                case '[':
                case '(':
                case '{':
                {
                    upper_quotation.push(s[i]);                    
                    break;
                }
                case ']':{
                    if(upper_quotation.size() == 0 || upper_quotation.top() != '['){                 
                        return false;    
                    }
                    upper_quotation.pop();
                    break;
                }
                case ')':{
                    if(upper_quotation.size() == 0 || upper_quotation.top() != '('){
                        return false;
                        
                    }
                    upper_quotation.pop();
                    break;
                }
                case '}':{
                    if(upper_quotation.size() == 0 || upper_quotation.top() != '{'){
                        return false;    
                    }
                    upper_quotation.pop();
                    break;
                }

            }
        }
        if(upper_quotation.size() !=0){ return false;}
        else {return true;}
          
    }
};
int main(int argc, char * argv[]){    
    /*for(int i =0 ; i < argc; i ++){
        printf("%s\n", argv[i]);
    }    */
    class Solution cSolution;
    bool result;
    
    result = cSolution.isValid("[]{}{}{}}");    
    //result = cSolution.isValid(argv[1]);    
    fputs(result ? "true" : "false", stdout);
}