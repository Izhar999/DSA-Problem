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
    bool isPalindrome(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;

        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
        }

        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* nxt=head;

        while(curr!=s){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        if(f!=nullptr){
            s=s->next;
        }

        while(s!=nullptr && prev!=nullptr){
            if(s->val!=prev->val){
                return false;
            }
            s=s->next;
            prev=prev->next;
        }
        return true;
    }
};