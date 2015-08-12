 ListNode* removeNthFromEnd(ListNode* head, int n) {

      ListNode* Aheader = head;

      while(head!=NULL)

      {

        ListNode* tmp = head;

        for(int i=0;i<n;i++)

          tmp = tmp->next;



        if(tmp == NULL)

        {

           if(head->next) return head->next;

           else return NULL;

        }



        if(tmp->next == NULL)

        {

          //ListNode* LN = head->next;

          head->next = head->next->next;

          break;

          //delete LN;

        }

        head = head->next;

      }

      return Aheader;

    }