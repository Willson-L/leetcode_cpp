#include <stdio.h>
#include<string.h>
#include<limits.h> 
#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <string>
using namespace std;

class Solution {
public:
    struct ListNode {      
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1->val <= list2->val){
            list1->next = mergeTwoLists(list1->next,list2);
            return list1;
        }
        else{
            list2->next = mergeTwoLists(list1,list2->next);
            return list2;
        }
        
    }
};
int main(int argc, char * argv[]){     
    Solution::ListNode* list10 = new Solution::ListNode(0);
    Solution::ListNode* list20 = new Solution::ListNode(1, list10);
    Solution::ListNode* list30 = new Solution::ListNode(2, list20);
    list10->val = 4;
    list20 ->val = 2;
    list30 ->val = 1;
    list10 = list20;
    list10 = list30;

    Solution::ListNode* list11 = new Solution::ListNode(0);
    Solution::ListNode* list22 = new Solution::ListNode(1, list11);
    Solution::ListNode* list33 = new Solution::ListNode(2, list22);
    list11->val = 4;
    list22->val = 3;
    list33->val = 1;
    list11 = list22;
    list11 = list33;
    Solution::ListNode* result_list = new Solution::ListNode();
    class Solution cSolution;
    result_list = cSolution.mergeTwoLists(list10, list11);    
    system("pause");
}