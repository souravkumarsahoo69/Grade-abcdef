#include<stdio.h>

main()
{
	float marks;
	
	printf("enter marks");
	scanf("%f",&marks);
	 
	if(marks>=90)
	{
		printf("your grade is a");
	}
   else if(marks>=80){
   	 printf("your grade is b\n");
   }

   
   	
   else if(marks>=50)
   {
   	 printf("your grade is c\n");
   }
   else  if(marks>=40)
   {
   	printf("your grade is d\n");
   }
   else if(marks<40)
   {
   	printf("your grade is f\n");
   }
    return 0;
}