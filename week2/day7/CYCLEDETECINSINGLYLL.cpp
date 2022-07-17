#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
    Node *f=head;
    Node *s=head;
    bool ans=true;
   while(f->next!=NULL && f->next->next!=NULL && f!=NULL)
   {
       f=f->next->next;
       s=s->next;
       if(f==s)
       {
           return true;
           
       }
       
   }
   return false;
    
}