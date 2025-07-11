#include <iostream>

using namespace std;

int main()
{
   int arr[5];
   int i,up,upele;
   for(i=0;i<5;i++)
   {
       printf("Enter the %d :",i+1);
       scanf("%d",&arr[i]);
   }
     for(i=0;i<5;i++)
   {
       printf("Enter the %d : %d \n",i+1,arr[i]);
   }
    printf("Enter the index of the element :");
    scanf("%d",&up);
     printf("Enter the element you want to put:");
    scanf("%d",&upele);
     for(i=0;i<5;i++)
   {
    if(up==i+1)
    {
    arr[i]=upele;
    printf("yes changed : %d",arr[i]);
    }
   }
      return 0;
}
