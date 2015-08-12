ListNode* reverseList(ListNode* head)

{

    if(head == NULL) return NULL;

    if(head->next == NULL) return head;

    ListNode* t1 = head;

    ListNode* t2 = t1->next;

    ListNode* t3 = t2->next;



    while(t3!=NULL)

    {

        t2->next = t1;

        t1 = t2;

        t2 = t3;

        t3 = t3->next;

    }





    t2->next = t1;

    head->next = NULL;

    return t2;



}