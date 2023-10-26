#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define maxsize 10

int list[maxsize],n;
void Create();
void Insert();
void Delete();
void Display();
void Search();

 void main()
{
int choice;
//clrscr();
do
{
printf("\n Array Implementation of List\n");
printf("\t1.create\n");
printf("\t2.Insert\n");
printf("\t3.Delete\n");
printf("\t4.Display\n");
printf("\t5.Search\n");
printf("\t6.Exit\n");
printf("\nEnter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1: Create();
break;
case 2: Insert();
break;
case 3: Delete();
break;
case 4: Display();
break;
case 5: Search();
break;
case 6: exit(1);
default: printf("\nEnter option between 1 - 6\n");
break;
}
}while(choice<7);
}
void Create()
{
int i;
printf("\nEnter the number of elements to be added in the list:\t");
scanf("%d",&n);
printf("\nEnter the array elements:\t");
for(i=0;i<n;i++)
scanf("%d",&list[i]);
Display();
}
void Insert()
{
int i,data,pos;
printf("\nEnter the data to be inserted:\t");
scanf("%d",&data);
printf("\nEnter the position at which element to be inserted:\t");
scanf("%d",&pos);
for(i = n-1 ; i >= pos-1 ; i--)
list[i+1] = list[i];
list[pos-1] = data;
n+=1;
Display();
}

void Delete( )
{
int i,pos;
printf("\nEnter the position of the data to be deleted:\t");
scanf("%d",&pos);
printf("\nThe data deleted is:\t %d", list[pos-1]);
for(i=pos-1;i<n-1;i++)
list[i]=list[i+1];
n=n-1;
Display();
}

void Display()
{
int i;
printf("\n**********Elements in the array**********\n");
for(i=0;i<n;i++)
printf("%d\t",list[i]);
}

void Search()
{
int search,i,count = 0;
printf("\nEnter the element to be searched:\t");
scanf("%d",&search);
for(i=0;i<n;i++)
{
if(search == list[i])
{
count++;
}
}
if(count==0)
printf("\nElement not present in the list");
else
printf("\nElement present in the list");
}