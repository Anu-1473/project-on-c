#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[40];
	char ID[100];
	char branch[100];
	char subject[100]; 
}detail;
d(struct student detail)
{
  FILE*fp;
  struct std
  {
    char name[40];
    char ID[100];
    char branch[100];
    char subject[100];
 };
  struct std a;
 
  fp=fopen("pps1.txt","r");

  if (fp==NULL)
  {
     puts("cannot open the file");
     exit(0);
  }
 while(fscanf(fp,"%s%s%s%s",a.name,a.ID,a.branch,a.subject)!=EOF)
   printf("The student details are:\n%s\n%s\n %s \n %s \n",a.name,a.ID,a.branch,a.subject);
   fclose(fp);
}
void array(int n, int arr[n])
{
 	int i;
	//printf("enter no. of elements");
	//scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("enter the marks in test %d:",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void sort(int n,int array[n])
{	
	int i,j,swap;
	for(i=0;i<n-1;i++) 
	{	
		for(j=0;j<n-1;j++)
		{
			if(array[j]>array[j+1])
			{
				swap=array[j];
				array[j]=array[j+1];
				array[j+1]=swap;
			}
		}
	}
	for(int a=0;a<n;a++)
	{
		printf("%d ",array[a]);
	}
}
int sum_mt(int mt_marks[3])
{	int sum=0;
	for(int i=1;i<3;i++)
	{
		sum=sum+mt_marks[i];
	}
	return sum;
}
float sum_asg(int asg_marks[10])
{	float sum=0.0;
	for(int i=3;i<10;i++)
	{
		sum=sum+asg_marks[i];
	}
	return sum/7.0;
}
float score(float n)
{
	float result;
	result=n/10.0;
	return result;
}
void grd(float grade)
{
	if (grade>9.0)
	{
		printf("\nEx grade");
	}
	else if(grade>8.0)
	{
		printf("\nA grade");
	}
	else if(grade>7.0)
	{
		printf("\nB grade");
	}
	else if(grade>6.0)
	{
		printf("\nC grade");
	}
	else if(grade>5.0)
	{
		printf("\nD grade");
	}
	else if(grade>4.0)
	{
		printf("\nE grade");
	}
	else
		printf("\nF grade");
}
void main()
{	d(detail);
	int mt_marks[3];
	printf("MT:");
	array(3,mt_marks);
	int asg_marks[10];
	printf("\nASSIGNMENT:");
	array(10,asg_marks);
	printf("\nsorted marks list of the mt's: ");
	sort(3,mt_marks);
	printf("\nsorted marks list of the assignments: ");
	sort(10,asg_marks);
	int result;
	float result2;
	float result3;
	result=sum_mt(mt_marks);
	printf("\nThe total mt marks thar are added= %d",result);
	result2=sum_asg(asg_marks);
	printf("\nthe total assignment marks thar are added= %f",result2);
	int sem;
	printf("\nenter the sem marrks for 60: ");
	scanf("%d",&sem);
	result3=result+result2+sem;
	printf("\nthe total marks for 100= %f",result3);
	float grade;
	grade=score(result3);
	printf("\nthe sem grade in the subject==%f",grade);
	grd(grade);
}

