//program to find total amount of notes

#include <stdio.h>
#include <conio.h>
int main(void)
{
    int  i,amount,a[8]={500,100,50,20,10,5,2,1}; 
 
  //a is a array of amount of notes
    printf("Enter the valid amount: ");
 
 //to get user typed amount
    scanf("%d",&amount);
   // temp=m;
     for(i=0;i<8;i++)
    {
      //it is a formula or logic which we wrote below  
     printf("\n%d notes is:%d",a[i],amount/a[i]);
     amount=amount%a[i];
    }
   getch(); 
  
}