/**
tc= O(n1+n2)
sc=O(1)
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        

        // Create a dummy node to simplify handling the merged list
         ListNode* l1=list1;
          ListNode* l2=list2;
        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;


        // Merge the two lists while both have nodes
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }

        // Attach any remaining nodes from either list
        if (l1 == nullptr) {
            temp->next = l2;
        } else {
            temp->next = l1;
        }

        // Return the merged list, skipping the dummy node
        return ans->next;
    }
};

