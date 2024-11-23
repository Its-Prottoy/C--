#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};

node *head=NULL;

node *getnewnode(int val)
{
    node*newnode=new node();
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
}

void insert_at_first(int value)
{
    node *Me=getnewnode(value);
    Me->next=head;
    head=Me;
}

void print()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insert_last(int value)
{
    node *alex=getnewnode(value);
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=alex;
}

void insert_any(int value,int pos)
{
    node *devid=getnewnode(value);
    node *temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    devid->next=temp->next;
    temp->next=devid;
}

//Delete..................................................

void del_first()
{
    node *jhamela=head;
    head=head->next;
    delete jhamela;
}

void del_last()
{
    int counter=0;
    node *bisakto=head;
    while(bisakto->next!=NULL)
    {
        bisakto=bisakto->next;
        counter++;
    }
    node *temp=head;
    for(int i=1;i<counter;i++)
    {
        temp=temp->next;
    }
    delete bisakto;
    temp->next=NULL;
}

void del_any(int position)
{
    node *temp=head;
    for(int i=1;i<position-1;i++)
    {
        temp=temp->next;
    }
    node *habblu=temp->next;
    node *temp1=habblu->next;
    temp->next=temp1;
    delete habblu;
}

//________________________________________________________
int main()
{
    int n;
    for(int i=0;i<2;i++)
    {
        cout<<i+1<<": ";
        cin>>n;
        insert_at_first(n);
    }
    cout<<"Link list first: ";
    print();

    int m;
    for(int i=0;i<2;i++)
    {
        cout<<i+1<<": ";
        cin>>m;
        insert_last(m);
    }
    cout<<"Link list last: ";
    print();
    
    int a,b;
    cout<<"any value: ";
    cin>>a;
    cout<<"position: ";
    cin>>b;
    insert_any(a,b);
    cout<<"Link list any: ";
    print();

    //delete..............................................

    del_first();
    cout<<"Link list delete first: ";
    print();

    del_last();
    cout<<"Link list delete last: ";
    print();
    
    int p;
    cout<<"delete position: ";
    cin>>p;
    del_any(p);
    cout<<"Link list delete position: ";
    print();

    //____________________________________________________
    
    return 0;
}