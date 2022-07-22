#include <stdio.h>
#include<string.h>
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num=0;
        for(int i =0; i<jewels.length(); i++){
            for(int j =0; j<stones.length(); j++){
                if(jewels[i] ==stones[j]){
                    num++;
                }
            }
        }
        return num;
    }
};
int main(int argc, char * argv[]){
    string jewels ="z";
    string stones ="ZZ";
    int result;
    class Solution cSolution;
    result = cSolution.numJewelsInStones(jewels, stones);
    cout << result;
    system("pause");
}