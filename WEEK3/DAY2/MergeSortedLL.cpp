#include <iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = nullptr;
    }
};
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    ListNode d(0);
    ListNode *tail = &d;

    while (l1 != nullptr && l2 != nullptr)
    {
        if (l1->val <= l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }

        tail = tail->next;
    }

    if (l1 != nullptr)
        tail->next = l1;
    else
        tail->next = l2;

    return d.next;
}

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);

    ListNode *l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);

    ListNode *merged = mergeTwoLists(l1, l2);
    printList(merged);
    return 0;
}