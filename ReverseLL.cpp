/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* headref;
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;
        ListNode* temp = helper(head);
        head = headref;
        return head;
        
    }
    
    ListNode* helper(ListNode* head){
        if(!head->next){
            headref = head;
            return head;
        }
        
        ListNode* rest = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return head;
    }
};
