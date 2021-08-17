/* Mazhar Hussain    Reg no:20MDELE098
eamil:20MDELE098@uetmardan.edu.pk */
//lab 12 task 3//
#include<stdio.h>
#include<strings.h>
int main ()
{
	int marks[4][3];
	int reg_no[4];
	int rollno[4]; 
	float percentage[4];          
	char name[4][200];
	int i,j; 
	for(i=0; i<4; i++)
	{
		printf("Enter the name of student:\n");
        scanf("%50s",name[i]);
		printf("Enter the student roll number of class:\n");
		scanf("%d",&rollno[i]);
		printf("Enter the student registration no according to admission:\n");
		scanf("%d",&reg_no[i]);
		for(j=0; j<3; j++)
		{
			printf("Enter marks of the subject %d students have taken in exam:\n ",j+1);
			scanf("%d",&marks[i][j]);	
		}
		printf("-----------\n");
	}
	for(i=0; i<4; i++)
	{
		for(j=0; j<3; j++)
		percentage[i]=((marks[i][j]+marks[i][j]+marks[i][j])/(3));
	}
	printf("\n------------\n");
	for(i=0; i<4; i++)
	{
		printf("\tstudent name:%s\n",name[i]);
		printf("\tstudent roll number:%d\n",rollno[i]);
		printf("\tstudent registration no:%d\n",reg_no[i]);
	for(j=0; j<3; j++)
	    printf("Marks of subject:%d\n",marks[i][j]);
		printf("percentage of student:%f\n",percentage[i]);
	}
		printf("\n------------\n");
	return 0;
}

