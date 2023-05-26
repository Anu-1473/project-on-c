#include<stdio.h>
#include<stdlib.h>
void main()
{
  FILE*fp;
  char text[]="yes";
  struct student
  {
    char name[40];
    char ID[100];
    char branch[100];
    char subject[100];
   };
   struct student s;
   fp=fopen("pps1.txt","w");
 
   if(fp==NULL)
   {  
      puts("cannot open the file");
      exit(0);
    }
   while(!strcmp(text,"yes"))
   {
    printf("enter name,ID,branch,subject");
     scanf("%s%s%s%s",s.name,s.ID,s.branch,s.subject);
     fprintf(fp,"%s \t %s \t %s \t %s \t",s.name,s.ID,s.branch,s.subject);
     printf("enter another record\n");
     scanf("%s",text);
   }
  printf("data has been recorded\n");
   fclose(fp);
}
