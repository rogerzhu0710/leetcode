ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)

{

    if(l1 == NULL && l2 == NULL) return NULL;

 

    queue<int> s1,s2;

    queue<int> q;

    ListNode* resHeader = NULL;

    ListNode* currRes = resHeader;

    bool bAddOne = false;



    while(l1!=NULL || l2!=NULL)

    {

        if(l1 != NULL)

        {

            s1.push(l1->val);

            l1=l1->next;

        }

        else

            s1.push(0);



        if(l2 != NULL)

        {

            s2.push(l2->val);

            l2=l2->next;

        }

        else

            s2.push(0);

    }



    while(!s1.empty() || !s2.empty())

    {

        int l1Val = 0,l2Val = 0;



        l1Val = s1.front();

        s1.pop();



        l2Val = s2.front();

        s2.pop();





        int lVal = l1Val + l2Val;

        if(bAddOne)

        {

            lVal += 1;

            bAddOne = false;

        }

        if(lVal >= 10)

        {

            lVal -= 10;

            bAddOne = true;

        }

        q.push(lVal);

    }



    if(bAddOne)

    {

        q.push(1);

    }



    while(!q.empty())

    {

        ListNode* tmp = new ListNode(0);

        tmp->val = q.front();

        tmp->next = NULL;



        q.pop();



        if(resHeader==NULL)

        {

            resHeader = tmp;

            currRes =resHeader;

        }

        else

        {

            currRes->next = tmp;

            currRes = currRes->next;

        }



    }
    return resHeader;

}