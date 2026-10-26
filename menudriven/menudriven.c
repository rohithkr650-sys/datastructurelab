#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node*next;
 };
 
 struct node*newnode,*temp,*head=NULL;
 
 void insert()
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data:");
  scanf("%d",&newnode->data);
  if(head==NULL)
  {
   head=newnode;
   head->next=NULL;
   }
  else 
  { 
   newnode->next=head;
   head=newnode;
   }
   }
   
   void delete()
   {
     struct node*temp;
     temp=head;
     head=head->next;
     free(temp);
     }
     
     void search()
     {
      struct node*temp;
      int flag=0,data,count=1;
      printf("Enter the data to be saarched:");
      scanf("%d\n",&data);
      if(head==NULL)
      {
       printf("List is empty.\n");
       return;
       }
      else
      {
       temp=head;
       while(temp->next!=0)
       {
        if(data==temp->data)
        { 
         flag=1;
         break;}
         temp=temp->next;
         count++;
         }
         
       if(flag==1)
       printf("The data %d is found at pos %d\n",data,count);
       else
       {
        printf("data %d not found",data);
        }
        }}
        
        void display()
        {
        struct node*temp;
        temp=head;
        if(head==NULL)
        
         printf("List is empty");
         else
         {
          while(temp!=0)
          {
          printf("\n%d",temp->data);
          temp=temp->next;
          }}}
          
          int main()
          {
           int opt;
           do 
           {
            printf("\n1.Insert\n");
            printf("2.Deletion\n");
            printf("3.display\n");
            printf("4.search\n");
            printf("5.Exit\n");
            printf("Choose an opt:");
            scanf("%d",&opt);
            
            switch(opt)
            {
             case 1:insert();
                    break;
             case 2:delete();
                    break;
             case 3:display();
                    break;
             case 4:search();
                    break;
             case 5:exit(0);
                    break;
             default:printf("Invalid opt\n");
             }
             }
             while(opt!=0);
             }
