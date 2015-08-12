    ListNode* removeElements(ListNode* head, int val) {

    ListNode* Aheader = head;

    ListNode* preNode = head;

    while(head!=NULL)

    {

        if(head->val == val)

        {

            if(preNode == Aheader && preNode == head)

            {

                head = head->next;

                //preNode->next = NULL;

                preNode = head;

                Aheader = head;

            }

            else

            {

                preNode->next = head->next;

                head = head->next;

                //head->next = NULL;

            }

        }

        else

        {

            preNode = head;

            head = head->next;

        }

    }

    return Aheader;         

    }