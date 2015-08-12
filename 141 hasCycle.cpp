bool hasCycle(ListNode *head) {

    ListNode* header1 = head;

    ListNode* header2 = head;



    while(header1!=NULL && header2!=NULL)

    {

        if(header1!=NULL)

            header1 = header1->next;

        else return false;



        if(header2->next!=NULL)

            header2 = header2->next->next;

        else return false;



        if(header1 == header2) return true;

    }



    return false;



}