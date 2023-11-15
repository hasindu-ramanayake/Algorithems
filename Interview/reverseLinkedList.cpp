#include <bits/stdc++.h>

using namespace std;



// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if ( head == nullptr ) return head;
        ListNode* first = head;
        ListNode* sec = head->next;
        if ( sec == nullptr ) return head;
        head->next = nullptr;
        ListNode* thr = sec->next;
        
        while ( thr != nullptr ) {
            sec->next = first;
            first = sec;
            sec = thr;
            thr =thr->next;
        }
        sec->next = first;
        return sec;
    }
};