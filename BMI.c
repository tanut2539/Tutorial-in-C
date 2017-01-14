/*****************************************************************************/
/* AURHOR       : leeldevlopment                                             */
/* DATE         : Jan 15 , 2017                                              */
/*****************************************************************************/
#include <stdio.h>
#include <conio.h>
int main ()
{
	int id;
    float weight,height,bmi;
    char fname[40],lname[50],bdate[15],sex,dept[50];
    printf("Enter ID: ");
    scanf("%d",&id);
    printf("Enter First Name: ");
    scanf("%s",&fname);
    printf("Enter Last Name: ");
    scanf("%s",&lname);
    printf("Enter Birthday(dd/mm/yyyy): ");
    scanf("%s",&bdate);
    printf("Enter Sex: ");
    scanf(" %c",&sex);
    printf("Enter Department: ");
    scanf("%s",&dept);
    printf("Enter your weight (kilograms): ");
    scanf("%f",&weight);
    printf("Enter your height (centimeters): ");
    scanf("%f",&height);
    height = height/100;
    bmi = weight/(height*height);
    //bmi = weight/((height/100)*(height/100));
    printf("\n+=======================================================================+\n");
    printf("+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\tBBBBBB\t MMM       MMM\tllllllllllll\t\t\t+\n");
    printf("+\t\tB     B\t M M       M M\t     ll\t\t\t\t+\n");
    printf("+\t\tB     B\t M  M\t  M  M       ll\t\t\t\t+\n");
    printf("+\t\tBBBBBB\t M   M\t M   M       ll\t\t\t\t+\n");
    printf("+\t\tB     B\t M    M\tM    M       ll\t\t\t\t+\n");
    printf("+\t\tB     B\t M     M     M       ll\t\t\t\t+\n");
    printf("+\t\tBBBBBB\t M     M     M\tllllllllllll\t\t\t+\n");
    printf("+\t\t\t\t\t\t\t\t\t+");
    printf("\n+=======================================================================+\n");
    printf("+\t\t\t\tMY Profile\t\t\t\t+\n");
    printf("+\t\t\t\t----------\t\t\t\t+\n");
    printf("+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\tName: %s %s\t\t\t\t+",fname,lname);
    printf("\n+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\tID:%d\t\t\t\t\t\t+\n",id);
    printf("+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\tBirth Day: %s  , Sex: %c\t\t\t\t+",bdate,sex);
    printf("\n+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\tDepartment: %s\t\t\t\t+\n",dept);
    printf("+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\t\t\t\t\t\t\t\t+");
    printf("\n+=======================================================================+\n");
    printf("+\t\t\t\t\t\t\t\t\t+\n");
    printf("+\t\tBody Mass Index (BMI) = %.02f\t\t\t\t+\n",bmi);
    printf("+\t\t\t\t\t\t\t\t\t+");
    printf("\n+=======================================================================+\n");
    getch();
    return (0);
}
