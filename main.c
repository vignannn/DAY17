#include<stdio.h>
int main()
{
	char name[50], reg_no[20],section[10];
	int n,i,j,choice,above,below;
	float salary[10],total=0,average,temp,highest,lowest;
	printf(" ~  EMPLOYEE SALARY ANALYSIS SYSTEM ~\n");
	printf("Enter Student Name: ");
	scanf("%s",&name);
	printf("\nEnter Registration Number: ");
	scanf("%s",&reg_no);
	printf("\nEnter Section: ");
	scanf("%s",&section);
	printf("\nEnter Number Of Employees(max 10): ");
	scanf("%d",&n);
	if(n>10)
	{
		printf("Error: Maximum 10 Exployees are Allowed !!\n");
	    return 0;
	}
	printf(" \nEnter Salaries: ");
	for (i=0;i<n;i++)
	{
		printf("%d:",i+1);
		scanf("%f",&salary[i]);
	}
	do
	{
		printf("---- Menu ----\n");
		printf("1. Display All Salaries\n");
		printf("2.Display Total and Average Salary\n");
		printf("3.Display Highest And Lowest Salary\n");
		printf("4.Count Employees Abive And Below Average\n");
		printf("5.DisplaySorted Salaries (ascending)\n");
		printf("6.Exit\n");
		printf("-----------------------------------------\n");
		printf(" Enter Your Choice\n");
		scanf("%d",&choice);
		printf("\n-- Employee Salary Analysis--\n");
		switch (choice)
		{
			case 1: 
			   printf("All salaries\n");
			   for(i=0;i<n;i++)
			   printf("%.2f\n",salary[i]);
			   break;
			   
			case 2:
			   total = 0;
			   for(i=0;i<n;i++)
			   total += salary[i];
			average = total/n;
			printf("Total Salary =%.2f\n",total);
			printf("Average Salary=%.2f\n",average);
			break;
			
		   case 3:
		   	  highest = salary[0];
		   	  lowest = salary[0];
		   	  for (i=1;i<n;i++)
		   	  {
		   	  	 if (salary[i]>highest)
		   	  	   highest = salary[i];
		   	  	 if (salary[i]<lowest)
				   lowest = salary[i];  
		   	  }
		   	  printf("Highest Salary = %.2f\n",highest);
		   	  printf("Lowest Salary = %.2f\n",lowest);
		   	  break;
		   	  
		   	 case 4:
				total=0;
				for (i=0;i<n;i++)
				  total += salary[i];
				average = total / n;
				above = below = 0;
				for (i=0;i<n;i++)
				{
					if (salary[i]>average)
					above++;
					else if (salary[i]<average)
					below++;
				} 
				printf("Average Salary = %.2f\n",average);
				printf("Employees  Above Average = %d\n",above);
				printf("Employees Below average = %d\n",below);
				break;
				
			case 5:
			   for (i-0;i<n-1;i++)
			   {
			   	for (j=0;j<n-i-1;j++)
			   	  { 
			   		if (salary[j]>salary[j+1])
			   	      {
			   			 temp=salary[j];
			   		     salary[j]=salary[j+1];
			   		     salary[j+1]=temp;
			   		  } 
			   	  } 
			   }
			 printf("Salaries In assending Order:\n");
			 for(i=0;i<n;i++)
			 printf("%.2f\n",salary[i]);
			 break;
			
		   case 6:
		      printf("Exiting...\n");
			  break;
			  
		   default :
		     printf("Invalid choice. Please try again.\n");  	
		}
		if (choice >=1 && choice<=5)
		{
			printf("\nSubmitted by:%s | Reg NO:%s | Section: %s\n",name,reg_no,section);
			printf("Challenge Day 17 - Code2Grow Program..\n");
		}
	}while (choice !=6);
	
return 0;
}
