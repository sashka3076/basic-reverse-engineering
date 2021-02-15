#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a = 123321;
  int key, flag = 0;
  printf("Please Enter The Registration Keys\n");
  scanf("%d",&key);
  while(flag == 0)
  {
  if(key == a)
  {
         printf("Registration Successfull....\n");
         flag = 1;
  }
  else
  {
      printf("Wrong Keys, Please Enter again.....\n\n");
      scanf("%d",&key);
      flag = 0;   
  }
}    	
  return 0;
}
