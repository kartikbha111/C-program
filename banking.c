#include<stdio.h>
#include<conio.h>
#include<string.h>
/*this is program with some bank feature*/
int deposit(int bal);
int withdraw(int bal);
main()
{
	int a,balance;
	char number[10];
	char name[20];
	start:
	printf("\n\t\tMENU\n1.Create account\n2.Check balance\n3.Deposit\n4.Withdraw\n5.Exit");
	printf("\nEnter your choice\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("enter your name:\t");
			scanf("%s",name);
			printf("enter your number:\t");
			scanf("%s",&number);
			balance=1000;
			goto start;
			break;
		case 2:
			puts(name);
			printf("%s",number);
			printf("\n%d",balance);
			goto start;
			break;
		case 3:
			balance=deposit(balance);
			goto start;
			break;
		case 4:
			balance=withdraw(balance);
			goto start;
			break;
		case 5:
			printf("\t\tthank you");
			return 0;
			break;
		default:
			printf("please enter valid choice\t");
			goto start;
			break;
	}
}
int withdraw(int bal)
{
	int c,am;
	printf("enter the amount you want to withdraw\t\t");
	scanf("%d",&am);
	c=bal-am;
	printf("\nyour balance is:%d",c);
	return c;
}
int deposit(int bal)
{
	int c,am;
	printf("enter the amount you want to deposit\t\t");
	scanf("%d",&am);
	c=bal+am;
	printf("\nyour balance is:%d",c);
	return c;
}
