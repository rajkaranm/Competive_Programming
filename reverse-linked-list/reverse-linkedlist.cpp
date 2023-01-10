#include<iostream>
using namespace std;

typedef struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
} ListNode;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return head;

        ListNode *cur = head;
        ListNode *prev = NULL;
        ListNode *next;

        while (cur != NULL) {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};

int main() {
    ListNode* head;
    head->val = 1;

    ListNode* first;
    first->val = 2;

    head->next = first;

    ListNode *ptr = head;

    while (ptr->next != NULL) {
        cout<<ptr->val<<endl;
        ptr = ptr->next;
    }
    return 0;
}
