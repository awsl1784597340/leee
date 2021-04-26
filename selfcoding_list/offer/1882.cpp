/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        ListNode * node = head;
        stack<int> stack1;
        if(head==NULL){
            vector<int>b;
            return b;
        }
        while(node!=NULL){
            stack1.push(node->val);
            node=node->next;
        }

        int length=stack1.size();
        int a[length];
        for(int i=0;i<length;i++){
            a[i]=stack1.top();
            stack1.pop();
        }
        vector<int>b(a,a+length);
        return b;
    }
};