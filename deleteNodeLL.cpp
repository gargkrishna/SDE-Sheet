// problem link -> https://leetcode.com/problems/delete-node-in-a-linked-list/
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
    void deleteNode(ListNode* node) {
        if(!node->next) *(node) = NULL;  // edge case
         *(node) = *(node->next);
    }
};

// time O(1)
// space O(1)