#include <stdio.h>
#include <iostream>


using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        double t =x; 
        double err =  1e-15;       
        while((t-(double)x/t)>err * t ){

            t = ((double)x/t + t) /2;
            cout<< t<<endl;
        }
        return abs(t);
    }
};
int main(int argc, char * argv[]){
    //int x= 8;
    //int x= 2147483647;
    int x= 2147395599;
    class Solution cSolution;
    int result;
    result = cSolution.mySqrt(x);    
    cout << result;
    system("pause");

}