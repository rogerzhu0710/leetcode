   int getLength(ListNode *LN)

    {

    if(LN == NULL) return 0;

    ListNode *tmp = LN;

    int length = 0;

    while(tmp!=NULL)

    {

        ++length;

        tmp = tmp->next;

    }

    return length;

    }



    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

    if(headA == NULL && headB == NULL) return NULL;



    // The alogrithm is "googled", but I still have one solutaion about this one. But it will change the structure of the list.

    int len1 = getLength(headA);

    int len2 = getLength(headB);

    



    if(len1>len2)

    {

        for(int i=0;i<len1-len2;i++)

            headA = headA->next;

    }

    else

    {

        for(int i=0;i<len2-len1;i++)

            headB = headB->next;

    }



    while(headA!=NULL&&headB!=NULL)

    {

        if(headA != headB)

        {

            headA = headA->next;

            headB = headB->next;

        }

        else

            break;

    }



    if(headA==NULL) return NULL;

    else return headA;

    }