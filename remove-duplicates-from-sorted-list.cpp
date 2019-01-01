//https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return head;
        
        int val = head->val;
        ListNode *prev,*current = head;
        
        while(current->next){
            prev=current;
            current = current->next;
            
            if(prev->val == current->val && current->next){
                prev->next  = current->next;
                current = prev;
                
            }
                
            else if(prev->val == current->val && !current->next){
               cout<<"Fuck";
               prev->next = nullptr;
               return head;
            }
        
        }
        
        
        return head;
    }
};
