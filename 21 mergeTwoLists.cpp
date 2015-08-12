ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)

{

    if( l1==NULL ) return l2;

    if( l2==NULL ) return l1;



    ListNode* L = NULL;

    ListNode* tmpL = L;

    while( l1!=NULL || l2!=NULL )

    {

        if( l2==NULL || l1->val<=l2->val )

        {

            ListNode* tmp = new ListNode(0);

            tmp->val = l1->val;

            tmp->next = NULL;

            if( L==NULL )

            {

                L = tmp;

                tmpL = L;

            }

            else

            {

                tmpL->next = tmp;

                tmpL = tmpL->next;

            }

            l1 = l1->next;



        }

        else if( l1==NULL || l1->val>l2->val )

        {

            ListNode* tmp = new ListNode(0);

            tmp->val = l2->val;

            tmp->next = NULL;

            if( L==NULL )

            {

                L = tmp;

                tmpL = L;

                tmpL->next = NULL;

            }

            else

            {

                tmpL->next = tmp;

                tmpL = tmpL->next;

                tmpL->next = NULL;

            }

            l2 = l2->next;



        }

    }

    return L;

}