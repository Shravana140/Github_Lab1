# include <stdio.h>
int  main()
{
int n,i,marks,total=0;
float percentage;
printf("Enter the number of subjects: ");
scanf("%d", &n);
	 for (i = 1; i <= n; i++) 
	 {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);
        total=total+marks;
     }
    percentage = (float)total/n;
	printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
	if (percentage >= 90)
    printf("Grade=A+");
    else if (percentage >= 80)
    printf("Grade=A");
    else if (percentage >= 70)
    printf("Grade=B");
    else if (percentage >= 60)
    printf("Grade=C");
    else if (percentage >= 50)
    printf("Grade=D");
    else
    printf("Grade=F");
    return 0;
}

    
    
