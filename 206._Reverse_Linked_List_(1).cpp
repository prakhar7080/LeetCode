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
    ListNode* reverseList(ListNode* head) {
        // if (!head) return NULL;
        vector<int>arr;
        ListNode* temp = head;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        temp = head;
        int i= arr.size()-1;
        // for(int i=arr.size()-1;i>=0;i--){
        //     temp->val = arr[i];
        //     temp = temp->next;
        // }
        while(temp){
            temp->val = arr[i];
            i--;
            temp = temp->next;
        }
        return head;
    }
};
