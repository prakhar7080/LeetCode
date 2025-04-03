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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode *temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        count=count-n;
        if(count==0){
            temp = head;
            head = head->next;
            delete temp;
        }
        else{
            temp = head;
            ListNode *prev = NULL;
            while(count--){
                prev = temp;
                temp = temp->next;
            }
            prev->next = temp->next;
            delete temp;
        }
        return head;
    }
};
