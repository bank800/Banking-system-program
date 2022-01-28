#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct account
{
char fname[20];
char lname[20];
int dep,acc;
int date,month,year;
char aadharnumber[20];
char typeaccount[20];
char pnumber[15];
}s[100];
void login();
void mainmenu();
void acc_open();
void details();
void deposite();
void withdraw();
int a=0;
void main()
{
clrscr();
printf("\n\n\t\twelcome to banking system");
printf("\n\n\t\t\tPress any key to continue...");
getch();
login();
}
void login()
{
clrscr();
char user[15],pass[15];
printf("\n\t\t\tEnter username :");
scanf("%s",user);
printf("\n\t\t\tPassword :");
scanf("%s",pass);
if(strcmp(user,"bank800")==0)
{
if(strcmp(pass,"B@nk800")==0)
{
printf("\n\n\t\t\tlogin succssfully");
printf("\n\n\t\t\tpress any key to continue...");
getch();
}
else
{
printf("\n\n\t\t\tInvalid password");
printf("\n\n\t\t\tPress any key..");
}
}
else
{
printf("\n\n\t\t\tIncorrect username");
printf("\n\n\t\t\tPress any key to exit");
}
getch();
mainmenu();
}
void mainmenu()
{
clrscr();
int choice;
bank:
printf("\n\n\t\t\t\xB2\xB2\xB2 Main Menu \xB2\xB2\xB2");
printf("\n\n\t\t\t1.Account opening");
printf("\n\n\t\t\t2.Account details");
printf("\n\n\t\t\t3.Deposite");
printf("\n\n\t\t\t4.Withdraw");
printf("\n\n\t\t\t5.Exit");
printf("\n\n\t\t\tEnter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
acc_open();
goto bank;
case 2:
details();
goto bank;
case 3:
deposite();
goto bank;
case 4:
withdraw();
goto bank;
case 5:
printf("\n\n\t\t\tThank you");
printf("\n\n\t\t\tPress any key to exit");
getch();
exit(0);
default:
printf("\n\n\t\t\tInvalid selection.Please choose valid choice");
printf("\n\n\t\t\tPress any key..");
getch();
goto bank;
}
}
void acc_open()
{
clrscr();
int n,i;
FILE *fp;
fp=fopen("account.txt","a");
printf("\n\n\n\t\t\t\xB2\xB2\xB2 ACCOUNT OPENING FORM \xB2\xB2\xB2");
printf("\n\n\t\t\tEnter number of student: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n\n\t\t\tEnter your firstname: ");
scanf("%s",s[a].fname);
printf("\t\t\tEnter your lastname: ");
scanf("%s",&s[a].lname);
printf("\t\t\tAccount number: ");
scanf("%d",&s[a].acc);
printf("\t\t\tEnter date of birth");
printf("\n\t\t\tDATE : ");
scanf("%d",&s[a].date);
printf("\t\t\tMONTH :");
scanf("%d",&s[a].month);
printf("\t\t\tYEAR :");
scanf("%d",&s[a].year);
printf("\t\t\tEnter the aadhar number :");
scanf("%s",s[a].aadharnumber);
printf("\t\t\tEnter the account type :");
scanf("%s",s[a].typeaccount);
printf("\t\t\tEnter the phone number :");
scanf("%s",s[a].pnumber);
printf("\n\t\t\tEnter amount :");
scanf("%d",&s[a].dep);
fprintf(fp,"\nNAME: %s %s\nACCOUNT NUMBER: %d\nDATE OF BIRTH: %d/%d/%d\nAADHAR NUMBER: %s\nACCOUNT TYPE: %s\nPHONE NUMBER: %s\nAMOUNT: %d\n");
}
printf("\n\n\n\n\t\t\tACCOUNT IS CREATED SUCCESSFULLY");
fclose(fp);
getch();
mainmenu();
}
void details()
{
clrscr();
int i,n;
for(i=0;i<n;i++)
{
printf("\n\n\n\t\t\t\xB2\xB2\xB2 ACCOUNT DETAILS \xB2\xB2\xB2");
printf("\n\n\t\t\tFIRST NAME: %s %s\n",s[a].fname,s[a].lname);
printf("\n\t\t\tACCOUNT NUMBER: %d\n",s[a].acc);
printf("\t\t\tDATE OF BIRTH: %d/%d/%d\n",s[a].date,s[a].month,s[a].year);
printf("\t\t\tAADHAR NUMBER: %s\n",s[a].aadharnumber);
printf("\t\t\tACCOUNT TYPE: %s\n",s[a].typeaccount);
printf("\t\t\tPHONE NUMBER: %s\n",s[a].pnumber);
printf("\t\t\tYour Deposit is Minimum Rs is: %d\n",s[a].dep);
}
getch();
mainmenu();
}
void deposite()
{
clrscr();
int no;
int aa;
FILE *fp;
fp=fopen("project.txt","a");
printf("\n\n\t\t\t\xB2\xB2\xB2 CASH DEPOSITE \xB2\xB2\xB2");
printf("\n\n\t\t\tEnter your Account Number: ");
scanf("%d",&no);
if(no==s[a].acc)
{
printf("\t\t\tAccount number: %d\n",s[a].acc);
printf("\t\t\tName: %s %s\n",s[a].fname,s[a].lname);
printf("\t\t\tDeposit: %d\n",s[a].dep);
printf("\t\t\tDeposited Amount: ");
scanf("%d",&aa);
s[a].dep+=aa;
printf("\t\t\tThe Balance in Account is: %d\n",s[a].dep);
fprintf(fp,"ACCOUNT NUMBER: %d\nNAME: %s %s\nDEPOSIT: %d\nDEPOSITED AMOUNT: %d\n");
printf("\n\n\n\t\t\t\xB2\xB2\xB2 THANK YOU \xB2\xB2\xB2");
getch();
}
else
{
printf("\n\n\t\t\tACCOUNT NUMBER IS INVALID");
getch();
}
fclose(fp);
mainmenu();
}
void withdraw()
{
clrscr();
int no;
int aa;
FILE *fp;
fp=fopen("project.txt","a");
printf("\n\n\t\t\t\xB2\xB2\xB2 WITHDRAW \xB2\xB2\xB2");
printf("\n\n\t\t\tEnter your Account Number: ");
scanf("%d",&no);
if(s[a].acc==no)
{
printf("\n\t\t\tAccount Number: %d\n",s[a].acc);
printf("\t\t\tName: %s %s\n",s[a].fname,s[a].lname);
printf("\t\t\tDeposit: %d\n",s[a].dep);
printf("\n\t\t\tWithdraw Amount: ");
scanf("%d",&aa);
if(s[a].dep<aa+500)
{
printf("\n\t\t\tCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUN BALANCE");
getch();
}
else
{
s[a].dep-=aa;
printf("\n\t\t\tThe Balance in Account is: %d",s[a].dep);
fprintf(fp,"\nACCOUNT NUMBER: %d\nNAME: %s %s\nDEPOSIT: %d\nWITHDRAW: %d\n");
printf("\n\n\n\t\t\t\xB2\xB2\xB2 THANK YOU \xB2\xB2\xB2");
}
}
else
{
printf("\n\t\t\tACCOUNT NUMBER IS INVALID");
getch();
}
fclose(fp);
getch();
mainmenu();
}





