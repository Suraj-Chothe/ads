#include<iostream>
using namespace std;
class poly
{
    int e,c;
    poly *next,*prev;
    public:
    void accept();
    void display();
    void add();
}*head1=NULL,*head2=NULL,*head3=NULL;

void poly::accept()
{
    poly *p1,*p2,*end=NULL,*end1=NULL;
    int n,i;
    cout<<"\n enter the 1st polynomial";
    cout<<"\n enter the highest degree of 1st polynomial=";
    cin>>n;
    p1=new poly;
    p1->next=NULL;
    for(i=n;i>=0;i--)
    {
       p1=new poly;
       p1->next=NULL;
       p1->prev=NULL;
       cout<<"\n Enter the coefficent=";
       cin>>p1->c;
       p1->e=i;
       if(head1==NULL)
       {
           head1=p1;
       }
       else
       {
          end->next=p1;
          p1->prev=end->next;
       }
       end=p1;
    }
    cout<<"\n enter the 2nd polynomial=";
    cout<<"\n enter the highest degree of 2nd polynomial=";
    cin>>n;
    p2=new poly;
    p2->next=NULL;
    p2->prev=NULL;
    for(i=n;i>=0;i--)
    {
       p2=new poly;
       p2->next=NULL;
       cout<<"\n enter the coefficent=";
       cin>>p2->c;
       p2->e=i;
       if(head2==NULL)
       {
           head2=p2;
       }
       else
       {
          end1->next=p2;
          p2->prev=end1->next;
       }
       end1=p2;
    }
}

void poly::display()
{
    poly *temp1,*temp2;
    temp1=head1;
    temp2=head2;
    cout<<"\n 1st polynomial=";
    while(temp1!=NULL)
    {
       if(temp1->e==0){
         cout<<temp1->c<<"";
       }
        else if(temp1->e==1){
       
        cout<<temp1->c<<"x"<<"+";
        
      }
       else{
       
        cout<<temp1->c<<"x^"<<temp1->e<<"+";
        
      }
      temp1=temp1->next;
    }
    cout<<"\n 2nd polynomial=";
    while(temp2!=NULL)
    {
         if(temp2->e==0){
         cout<<temp2->c<<"";
       }
       else if(temp2->e==1){
       
        cout<<temp2->c<<"x"<<"+";
        
      }
       else{
       
        cout<<temp2->c<<"x^"<<temp2->e<<"+";
        
      }
      temp2=temp2->next;
    }
    cout<<endl;
}
void poly::add()
{
    poly *temp1,*temp2,*p3,*end3;
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL & temp2!=NULL)
    {
        
       if(temp1->e==temp2->e)
    {
        p3=new poly;
        p3->next=NULL;
        p3->c=temp1->c+temp2->c;
        p3->e=temp1->e;
    }
     if(head3==NULL)
       {
           head3=p3;
       }
       else
       {
          end3->next=p3;
       }
       end3=p3;
       temp1=temp1->next;
       temp2=temp2->next;
    }
    
    cout<<"\n Addition of two polynomial is=";
    while(head3!=NULL)
    {	
      if(head3->e==0){
         cout<<head3->c<<"";
       }
       else if(head3->e==1){
       
        cout<<head3->c<<"x"<<"+";
        
      }
       else{
       
        cout<<head3->c<<"x^"<<head3->e<<"+";
        
      }
      head3=head3->next;
    }

}
int main()
{
    poly p;
    p.accept();
    p.display();
    p.add();
}

