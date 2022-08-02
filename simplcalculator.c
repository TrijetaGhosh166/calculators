#include<stdio.h>
#include<math.h>
void addition ();
void subtraction();
void  multiplication();
void division();
void power();
void modulus();
void factorial();
void squrare ();
void cube ();
void sqrroot ();
void exit();

int main()
{
 printf("\t\t - welcome to the calculator - \n\n")	;
 int select;
 printf("--ENTER 0 TO CLOSE--\n");
 printf("press 1 - addition \n");
 printf("press 2 - subtraction \n");
  printf("press 3 - multiplication \n");
   printf("press 4 -division   \n");
    printf("press 5 - power \n");
     printf("press 6 - modulus \n");
      printf("press 7 - factorial \n");
       printf("press 8 - squrare  \n");
        printf("press 9 - cube \n");
         printf("press 10 - sqrroot \n");
 while(1)
 {
 	printf("\n\t enter the operation ( press no -)");
 	scanf("%d",&select);
 	switch(select)
 	{
 		case 1:
 		   addition();
 		     break;
 		
 		case 2:
 			subtraction();
 			 break;
 			
 		case 3:
 			multiplication();
 			 break;
 			 
 		case 4:
 			division();
 			 break;
 			 
 		case 5:
		 	power();
			  break;
			   
		 case 6:
			modulus();
			 break;
			 
		 case 7:
			factorial();
			 break;
			 
		 case 8:
		    squrare ();
		 	 break;
		 	 
		 case 9:
		 	cube ();
		 	 break;
		 	 
		 case 10 :
		 	sqrroot ();	
		 	 break;
		 	 
		case 0:
		 	exit(0);
			  	 
		  default:
		   printf("enter between 0 to 10");	  	
	 }
 }  
       return 0;
}
void addition ()
{
	printf("ENTER TWO NUM TO addition \n");
	float a,b;
		scanf("%f%f",&a,&b);
	printf("add =%2f\n",a+b);
}
void subtraction()
{
	printf("ENTER TWO NUM TO subtraction \n");
	float a,b;
		scanf("%f%f",&a,&b);
		printf("sub=%2f\n",a-b);
}
void  multiplication()
{
	printf("ENTER TWO NUM TO multiplication \n");
	float a,b;
		scanf("%f%f",&a,&b);
		printf("mul=%2f\n",a*b);
}
void division()
{
	printf("ENTER TWO NUM TO division \n");
	float a,b;
		scanf("%f%f",&a,&b);
		printf("div=%2f\n",a/b);
}
void power()
{   double b;
    double p;
	printf("ENTER POWER AND BASE \n");
		scanf("%lf%lf",&b,&p);
		double e=pow(b,p);
		printf("pow=%2lf\n",e);
}
void modulus()
{
	printf("ENTER TWO NUM TO modulus \n");
	 int a,b;
		scanf("%d%d",&a,&b);
		printf("mod=%d\n",a%b);
}
void factorial()
{    int n,f=1,i;
	printf("ENTER A NUM FOR FACTORIAL \n");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		printf("%d factorial is %d",n,f);
}
void squrare ()
{
	float a,sqr;
	printf("ENTER A NUM to squr\n");
	scanf("%f",&a);
	sqr=a*a;
	printf("squrare=%2f\n",sqr);	
}
void cube ()
{
   float a,cub;
	printf("ENTER A NUM to squr\n");
	scanf("%f",&a);
	cub=a*a*a;
	printf("cube=%2f\n",cub);		
}
void sqrroot ()
{   
	double b;
	printf("ENTER A NUM to sqrroot\n");
	scanf("%lf",&b);
	double s=sqrt(b);
	printf("The square root of %lf is %lf",b,s);
	
}


