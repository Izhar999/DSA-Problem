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
    ListNode* revo(ListNode* l){
        ListNode* prev=nullptr;
        ListNode* curr=l;
        ListNode* nxt=l;
        while(curr!=nullptr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* h1=revo(l1);
        ListNode* h2=revo(l2);
        int carry=0;
        ListNode* head=nullptr;
        
        while(h1!=nullptr || h2!=nullptr || carry){
            int sum=carry;
            if(h1!=nullptr){
                sum=sum+h1->val;
                h1=h1->next;
            }
            if(h2!=nullptr){
                sum=sum+h2->val;
                h2=h2->next;
            }
            int digit=sum%10;
            carry=sum/10;

            ListNode* curr = new ListNode(digit);
            curr->next=head;
            head=curr;
        }
        return head;

    }
};