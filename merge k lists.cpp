#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(onullptr) {}
};

struct compare {
    bool operator()(ListNode* l1, ListNode* l2) {
        return l1->val > l2->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    priority_queue<ListNode*, vector<ListNode*>, compare> pq;

    // Initial population of the priority queue with the head of each list
    for (ListNode* list : lists) {
        if (list != nullptr) {
            pq.push(list);
        }
    }

    // Dummy head and tail to build the result list
    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (!pq.empty()) {
        // Get the node with the smallest value
        ListNode* node = pq.top();
        pq.pop();
        
        // Add it to the result list
        tail->next = node;
        tail = tail->next;

        // If there are more nodes in the current list, add the next node to the priority queue
        if (node->next != nullptr) {
            pq.push(node->next);
        }
    }

    return dummy.next;
}

// Utility function to print a list
void printList(ListNode* node) {
    while (node != nullptr) {
        cout << node->val << " -> ";
        node = node->next;
    }
    cout << "nullptr" << endl;
}

// Example usage
int main() {
    // Example linked lists (Note: Ideally, these should be created dynamically)
    ListNode a(1);
    ListNode b(4);
    ListNode c(5);
    a.next = &b;
    b.next = &c;

    ListNode d(1);
    ListNode e(3);
    ListNode f(4);
    d.next = &e;
    e.next = &f;

    ListNode g(2);
    ListNode h(6);
    g.next = &h;

    vector<ListNode*> lists = {&a, &d, &g};

    ListNode* result = mergeKLists(lists);
    printList(result);

    return 0;
}
