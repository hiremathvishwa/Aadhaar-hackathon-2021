#include <stdio.h>
int main()
{
char  adrr[100],name,o ;
int y,i;
printf ("welcome to adhaar platform \n\
would you like to change address ?(type in either 1 for yes or 0 for  no)\n");
scanf("%d",&y); 
if (y == 1 )
{
printf ("Please type in new address:\n ");
printf ("\n ");
for(i=0;i<=50;i++)
scanf ("%c",&adrr[i]);
printf ("\n ");
printf ("Address has been updated thank you for using our platform.\n\
For further queries please mail us");
} 
else 
printf ("Thank you for visiting ! please mail us for futher queries");
}