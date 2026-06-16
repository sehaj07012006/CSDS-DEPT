#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
Node* removeNthFromEnd(Node* head, int n)
{
    Node* dummy = new Node(0);
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;
    // Fast ko n steps aage le jao
    for (int i = 0; i < n; i++)
    {
        fast = fast->next;
    }
   
    while (fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    // Nth node from end delete karo
    slow->next = slow->next->next;

    return dummy->next;
}

void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int n = 2;

    cout << "Original List: ";
    printList(head);

    head = removeNthFromEnd(head, n);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}