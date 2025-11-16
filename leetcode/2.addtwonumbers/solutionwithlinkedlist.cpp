#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry)
        {
            int sum = 0;

            if (l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            sum += carry;
            carry = sum / 10;

            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};

void printList(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

ListNode *createList(initializer_list<int> vals)
{
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    for (int v : vals)
    {
        if (!head)
        {
            head = new ListNode(v);
            tail = head;
        }
        else
        {
            tail->next = new ListNode(v);
            tail = tail->next;
        }
    }
    return head;
}

int main()
{
    // Örnek: l1 = [2, 4, 3], l2 = [5, 6, 4]
    ListNode *l1 = createList({2, 4, 3}); // 342
    ListNode *l2 = createList({5, 6, 4}); // 465

    Solution s;
    ListNode *result = s.addTwoNumbers(l1, l2);

    cout << "Sonuç: ";
    printList(result); // Beklenen: 7 -> 0 -> 8

    return 0;
}
