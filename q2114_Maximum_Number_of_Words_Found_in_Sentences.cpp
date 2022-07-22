#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int> sum;
        for(int i =0; i<sentences.size(); i++){
            int sentence =0;
            for(int j= 0 ; j<sentences[i].length(); j++){
                if(isspace(sentences[i][j])){
                    sentence ++;
                }
            }
            sum.push_back(sentence);
        }
        int max = sum[0];
        for(int i =0; i<sum.size(); i++){
            if(sum[i]>max){
                max =sum[i];
            }
        }
        return max+1;
    }
};
int main(int argc, char * argv[]){
    vector<string> str ={"please wait", "continue to fight", "continue to win"};
    class Solution cSolution;
    int result;
    result = cSolution.mostWordsFound(str);    
    cout << result;
    system("pause");

}