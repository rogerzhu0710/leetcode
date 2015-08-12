struct ListNode* deleteDuplicates(struct ListNode* head) {

    if(head == NULL ) return NULL;

    struct ListNode* tmpHead = head;

    while(tmpHead->next!=NULL)

    {

        if(tmpHead->next->val == tmpHead->val)

        {

            struct ListNode* tmp = tmpHead->next->next;

            //tmpHead->next->next=NULL;

            tmpHead->next = tmp;

        }

        else

            tmpHead = tmpHead->next;

    }

    return head;

}