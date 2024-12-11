#include <stdio.h>
void main()
{
	int h,e,m,s,ss,t;
	float a;
	printf("Enter the Marks of Hindi: ");
	scanf("%d",&h);
	printf("Enter the Marks of English: ");
	scanf("%d",&e);
	printf("Enter the Marks of Maths: ");
	scanf("%d",&m);
	printf("Enter the Marks of Science: ");
	scanf("%d",&s);
	printf("Enter the Marks of Social Science: ");
	scanf("%d",&ss);
	
    t =h+e+m+s+ss;
    a = t/5.0; 
    
    printf("The total Marks are %d \n",t);
    printf("The Avarage Marks are %.2f",a);
    
    
}
