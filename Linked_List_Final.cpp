 #include<bits./stdc++.h>
 using namespace std;
 class Node
 {
     public:
     Node *Next;
     int value;
     Node(int val)
     {
         value=val;
         Next =NULL;
     }

 };
 void insert_at_tail(Node *&head, int val)
 {
     Node *newnode = new Node(val);
     if(head==NULL)
     {
         head=newnode;
     }
     else
     {
         Node *temp = head;
         while(temp->Next!=NULL)
         {
             temp=temp->Next;
         }
         temp=newnode;
     }
 }
 void display(Node *head)
 {
     while(head!=NULL)
     {
         cout<<head->value;
         head=head->Next;
     }
 }
 int main()
 {
    Node *head=NULL;
    int choice;
    cout<<"Give your choice"<<endl;
    cout<<"Choice 1: Insert value at tail"<<endl;
    cout<<"Choice 0: exist"<<endl;
    cin>>choice;
    while(choice!=0)
    {
        int value;
        switch (choice)
        {
            case 1:
            cout<<"enter value: "<<endl;
            cin>>value;
            insert_at_tail(head,value);
            break;
            default:
            break;
        }
            cout<<"Next choice: "<<endl;
            cin>>choice;
    }

    display(head);
 }
