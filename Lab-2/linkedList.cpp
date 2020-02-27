#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        next = NULL;
    }
};

Node* createList()
{
    cout << "Enter elements for list: ";
    int data;
    cin >> data;
    Node *head = NULL;
    Node *temp;
    while(data != -1)
    {
        if(head == NULL)
        {
            head = new Node(data);
            temp = head;
        }
        else
        {
            Node *newNode = new Node(data);
            temp -> next = newNode;
            temp = temp -> next;
        }
        cin >> data;
    }

    return head;
}

void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }

    cout << "NULL\n";
}

Node* deleteByValue(Node *head, int elem)
{
    if(head == NULL){
        return NULL;
    }

    if(head -> data == elem) {
        Node *newHead = head -> next;
        delete head;
        head = newHead;
        return head;
    }

    Node *temp = head, *prev;
    while(temp != NULL && temp -> data != elem) {
        prev = temp;
        temp = temp -> next;
    }

    if(temp == NULL)
        cout << "Element not found in list";
    else
    {
        prev -> next = temp -> next;
        delete temp;
        return head;
    }
    return head;
}

int searchValue(Node *head, int val)
{
    if(head == NULL)
        return -1;

    Node *temp = head;
    int pos = 1;

    while(temp != NULL)
    {
        if(temp -> data == val)
            return pos;
        temp = temp -> next;
        pos++;
    }

    return -1;
}

int searchPosition(Node *head, int pos)
{
    if(head == NULL)
        return -1;

    Node *temp = head;
    int t = 1;

    while(temp != NULL && t < pos)
    {
        temp = temp -> next;
        t++;
    }

    if(temp == NULL)
        return -1;
    else
        return temp -> data;
}


Node* insert_pos(Node *head)
{
    int pos, i = 1, elem;
    cout << "Enter element to be inserted : ";
    cin >>  elem;
    Node *temp = new Node(elem);

    temp -> next = NULL;
    
    if(head == NULL)
    {
        return NULL;
    }
    else
    {
        cout << "Enter position of insertion : ";
        cin >> pos;
        Node *cur = head;
        Node *prev;
        while(cur != NULL && i <= pos)
        {
            prev = cur;
            cur = cur -> next;
            i++;
        }
        prev -> next = temp;
        temp -> next = cur;
    }

    return head;
}

Node* delete_pos(Node *head)
{
    int pos, i;


    cout << "Enter index of element to be deleted : ";
    cin>>pos;
    if(head==NULL)
    {
        cout<<"Empty List\n";
        return NULL;
    }
    Node *cur=head,*prev=NULL;
    for(i=0;i<pos;i++)
    {
        prev=cur;
        cur=cur->next;
    }
    if(i==0)
    {
        cur=cur->next;
        head=cur;
        return head;
    }
    else if(cur==NULL)
    {
        cout<<"Out of bounds";
    }
    else
    {
        prev->next=cur->next;
        delete cur;
    }

    return head;
    
};

int main()
{

    Node *head = createList();

    cout << "1.Insert at position\n2.Delete at position\n3. Delete by value\n4. Search by position\n5. Search by value\n6. Display\n7. Exit\n";

    int ch;
    cout << "Enter choice: ";
    cin >> ch;


    while(ch < 8)
    {
        switch(ch)
        {
            case 1:
            {
                head = insert_pos(head);
                break;
            }

            case 2:
            {
                head = delete_pos(head);
                break;
            }

            case 3: 
            {
                cout << "Enter element to be deleted: ";
                int elem;
                cin >> elem;

                head = deleteByValue(head, elem);
                break;
            }

            case 4:
            {
                int pos;
                cout << "Enter position: ";
                cin >> pos;
                cout << "Element: " << searchPosition(head, pos) << endl;
                break;
            }

            case 5:
            {

                int val;
                cout << "Enter element: ";
                cin >> val;
                int pos = searchPosition(head, val);
                if(pos == -1)
                    cout << "Element not found\n";
                else 
                    cout << "Position: " <<  << endl;
                break;
            }

            case 6:
            {
                display(head);
                break;
            }

            default:
            {
                return 0;
            }

        }

        cout << "\nEnter choice: ";
        cin >> ch;
    }

    return 0;
}