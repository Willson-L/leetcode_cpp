#include <stdio.h>
#include<string.h>
#include<limits.h> 
#include <iostream>
#include <vector>
#include <stack>
#include <list>
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
        ListNode* result_list;
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
        if(list1->val <= list2->val)
        
    }
};
int main(int argc, char * argv[]){    
    /*for(int i =0 ; i < argc; i ++){
        printf("%s\n", argv[i]);
    }    */        
    Solution::ListNode* list1 = new Solution::ListNode(0);
    list1->val = 1;
    list1->next = NULL;
    /*list1.val = {0,1,2,3};
    list2.val = {1,2,3,4};*/
    //cSolution.mergeTwoLists(list1, list2);    
   
}