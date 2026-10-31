
// Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        return head;
    }
    struct ListNode *travel, *end;
    travel = head;
    int count = 0;
    end = NULL;
    while (travel != NULL)
    {
        count++;
        travel = travel->next;
    }
    count = count - n;
    if (count == 0)
    {

        head = head->next;
        return head;
    }
    else
    {
        travel = head;
        for (int i = count; i > 0; i--)
        {
            end = travel;
            travel = travel->next;
        }
        if (travel->next == NULL)
        {
            free(travel);
            end->next = NULL;
            return head;
        }
        else
        {
            end->next = end->next->next;
            free(travel);
            return head;
        }
    }
}