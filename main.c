#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
printf("\nWelcome to \nMody University!!\n");

int i, j, g=2;
float tfee=200000.00, dis=0, fee, XII;
char temp[20], temp2[10];

/*Creating structure*/
struct student{
               char name[20];
               char crs[20];
               float inc[20];
               float mno[10];
              } st[2];

/*This is Eligibility check*/
for (i=0; i<g; i++)
{
  L:printf("\nPlease Enter your Class XII Percent ");
  scanf("%g",&XII);
  if (XII >= 75)
   {
     printf("Congratulations!You are eligible for admission in Mody University");
     printf("\nLets proceed:- \n");
   }
  else
   {
     printf("Sorry, You don't pass the Eligibility Criteria..\n");
     goto L;
   }

/*Taking Student Information*/
printf("______________________________________________________________________\n\n");
  fflush(stdin);
  printf("\nEnter your Name: ");
  gets(st[i].name);
  fflush(stdin);
  printf("\nEnter the Course [CSE/MECH/EE/BIOMED]: ");
  gets(st[i].crs);
  printf("\nEnter your mobile number: ");
  scanf("%g",&st[i].mno);
  printf("\nEnter your Father's income (per annum): ");
  scanf("%g",&st[i].inc);

/*Fee Structure*/
 printf("\n______________________________________________________________________\n\n");
 printf("We would like to accept the Admission fees by any of these ways:-\n");
 printf("1. Cash\n");
 printf("2. Cheque\n");
 printf("3. RTGS/NEFT\n");
 if (XII >=95)
  dis=0.70;
 else if (XII >=90 && XII <=95)
  dis=0.60;
 else if (XII >=80 && XII <=90)
  dis=0.40;
 else if (st[i].inc <=100000)
  dis=0.15;
 else
  dis=0;
  fee= tfee* (1-dis);
 printf("\nYour Admission fees is: %g", fee);
 printf("\nYou get %g percent off on your tuition fees ", (dis*100));
 printf("\n______________________________________________________________________\nPress enter\n");
 getch();
 system("CLS");
}

/*Sorting alphabetically*/
for(i=0;i<g;i++)
{
    for(j=0;j<g-1-i;j++)
    {
                if (strcmp(st[j].name,st[j+1].name))
      {
          strcpy (temp, st[j].name);
          strcpy (temp2, st[j].crs);
          strcpy (st[j].name, st[j+1].name);
          strcpy (st[j].crs, st[j+1].crs);
          strcpy (st[j+1].name, temp);
          strcpy (st[j+1].crs, temp2);
      }

    }
temp[j]='\0';
temp2[j]='\0';
}

/* for (i=0; i<2; i++)                             //doubt to solve
  {
	if (st[i].sub=="cse")
	 strcpy("A",st[i].sec);   //st[i].sec="A";
	else if (st[i].sub=="me")
	 strcpy("B",st[i].sec);   //st[i].sec="B";
	else
	 strcpy(NULL,st[i].sec);  //st[i].sec=NULL;
  }*/

/*Tabular representation*/
 printf("All the entries so far:-\n");
 printf("-----------------------------------------------\n");
 printf("Rollno.   Name \t      Course\n");
 printf("-----------------------------------------------\n");
 for (i=0,j=1; i<g; i++,j++)
 {
  printf("%d\t%s\t  %s\n",j,st[i].name,st[i].crs);
 }

/*Display of Advantages*/
printf("\n______________________________________________________________________\n\n\n");
printf("Some Advantages of being in Mody University:-\n \n");
printf("1.This is the Leading Women's University all over.\n");
printf("2.We have Faculty with rich Industry $ Good Experience.\n");
printf("3.The university offers variety of options & courses.\n");
printf("4.Lush green environment free from pollution.\n");
printf("5.Safe and secure environment for our daughters.\n");
printf("6.It gives you a disciplined life & teaches you time management.\n");
printf("7.A beautiful Tapovan helps inculcate spirituality.\n");
printf("8.Ragging free zone.\n");
printf("9.Provides you opportunity for CCA.\n");
printf("10.Provides you the best hostel & mess facilities.\n");
printf("\n______________________________________________________________________\n\n\n");
printf("\nThank You");
getch();
return 0;
}
