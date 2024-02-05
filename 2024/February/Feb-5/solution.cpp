class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
        if (head == NULL) {
        Node* newNode = new Node(data);
        newNode->next = newNode;  // Point to itself for circular list
        return newNode;
    }
       Node* r=new Node(data);
       Node* p=head;
       Node* q=head->next;
       Node* end;
       Node* start=head;
       while(true){
           if(start->next==head){
               end=start;
               break;
           }
           start=start->next;
       }
       start=head;
       if(data<head->data){
           r->next=head;
           end->next=r;
           return r;
       }
       if(data>end->data){
           end->next=r;
           r->next=head;
           return head;
       }
       while(true){
           int a=p->data;
           int b=q->data;
           if(data>=a && data<=b){
               p->next=r;
               r->next=q;
               break;
           }
           p=p->next;
           q=q->next;
       }
       return head;
    }
};
