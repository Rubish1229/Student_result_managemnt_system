	//requirement: Student result management system, boolean function management system.
	//admin or student login
	//in admin login enter marks of 3 students(grade ,pass /fail)
	//in student login only able to see the result
//student ID pwd: to login (if 3 times wrong input then block)
//then only enter to the result managemnt system...
//open

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	float Math,English,Account,obtained_marks,per,total=300;
	float Math1,English1,Account1,obtained_marks1,per1;
	float Math2,English2,Account2,obtained_marks2,per2;

void marksheet(){
		
	printf("The marks of Math:%f",Math);
	printf("The marks of English:%f",English);
	printf("The marks of Account:%f",Account);
	obtained_marks=Math+English+Account;
	printf("\t\tObtained marks:%0.1f\n",obtained_marks);
	per=(obtained_marks/total)*100;
	printf("\t\tPercentage is:%0.2f\n",per);
	if(per>=90)
	{
		printf("\n\t\tGrade A ");
	}
else if(per>=80)
 {
 printf("\n\t\tGrade B");
}
else if("per>=70")
{
	printf("\n\t\tGrade C");
}
else if("per>=60")
{
	printf("\n\t\tGrade D");
}
else if("per>=50")
{
	printf("\n\t\tGrade E");
}
else if("per>=40"){
	printf("\n\t\tGrade F");
}
else{
	printf("\n\t\tFail");
}
if(Math<40|| English <40||Account<40){
	printf("\n\t\tFail.");
}
}

void marksheet2(){
		
	printf("The marks of Math:%f",Math2);
	printf("The marks of English:%f",English2);
	printf("The marks of Account:%f",Account2);
	obtained_marks2=Math2+English2+Account2;
	printf("\t\tObtained marks:%0.1f\n",obtained_marks2);
	per2=(obtained_marks2/total)*100;
	printf("\t\tPercentage is:%0.2f\n",per2);
	if(per2>=90)
	{
		printf("\n\t\tGrade A ");
	}
else if(per2>=80)
 {
 printf("\n\t\tGrade B");
}
else if(per2>=70)
{
	printf("\n\t\tGrade C");
}
else if(per2>=60)
{
	printf("\n\t\tGrade D");
}
else if(per2>=50)
{
	printf("\n\t\tGrade E");
}
else if(per2>=40){
	printf("\n\t\tGrade F");
}
else{
	printf("\n\t\tFail");
}
if(Math2<40|| English2 <40||Account2<40){
	printf("Fail.");
}
}
void marksheet1(){
		
	printf("The marks of Math:%f",Math1);
	printf("The marks of English:%f",English1);
	printf("The marks of Account:%f",Account1);
	obtained_marks1=Math1+English1+Account1;
	printf("\t\tObtained marks:%0.1f\n",obtained_marks1);
	per=(obtained_marks1/total)*100;
	printf("\t\tPercentage is:%0.2f\n",per1);
	if(per1>=90)
	{
		printf("\n\t\tGrade A ");
	}
else if(per1>=80)
 {
 printf("\n\t\tGrade B");
}
else if(per1>=70)
{
	printf("\n\t\tGrade C");
}
else if(per1>=60)
{
	printf("\n\t\tGrade D");
}
else if(per1>=50)
{
	printf("\n\t\tGrade E");
}
else if(per1>=40){
	printf("\n\t\tGrade F");
}
else{
	printf("\n\t\tFail");
}
if(Math1<40|| English1<40||Account1<40){
	printf("Fail.");
}
}
 void student_id(){
	char username[30];
	char pwd[6];
	int attempts=0;
	while(attempts <3){
	printf("\n\nEnter your username:");
	scanf("%s",&username);
	printf("Enter your password:");
	scanf("%s",&pwd);


	
	if((strcmp(username,"ram")==0) && (strcmp(pwd,"123")==0) ){	
		
		printf("Login successful...\n");
		marksheet();
		break;
}
	else if((strcmp(username,"shyam")==0) && (strcmp(pwd,"123")==0) ){	
		
		printf("Login successful...\n");
		marksheet1();
		break;
	}
	else if((strcmp(username,"hari")==0) && (strcmp(pwd,"123")==0) ){	
		
		printf("Login successful...\n");
		marksheet2();
		break;
	
}
	else{
		printf("\t\t\t\tUsername or password doesn't exist.Please try again.\n");
		attempts++;
	}
}
if(attempts==3)
{
	printf("\t\t\t\tSorry!.The maximum number of attempts has been reached.");
}
	
}
	
 
 
void marks()
{
	
	printf("Enter the marks of Math:");
	scanf("%f",&Math);
	printf("Enter the marks of English:");
	scanf("%f",&English);
	printf("Enter the marks of Account:");
	scanf("%f",&Account);
	obtained_marks=Math+English+Account;
	printf("\t\tObtained marks:%0.1f\n",obtained_marks);
	per=(obtained_marks/total)*100;
	printf("\t\tPercentage is:%0.2f\n",per);
	if(per>=90)
	{
		printf("\t\tGrade A ");
	}
else if(per>=80)
 {
 printf("\n\t\tGrade B");
}
else if(per>=70)
{
	printf("\n\t\tGrade C");
}
else if(per>=60)
{
	printf("\n\t\tGrade D");
}
else if(per>=50)
{
	printf("\n\t\tGrade E");
}+
else if(per>=40){
	printf("\n\t\tGrade F");
}
if(Math<40|| English <40||Account<40){
	printf("\n\t\tFail.");
}
}

void marks2(){
		
		printf("Enter the marks of Math:");
	scanf("%f",&Math2);
	printf("Enter the marks of English:");
	scanf("%f",&English2);
	printf("Enter the marks of Account:");
	scanf("%f",&Account2);
	obtained_marks2=Math2+English2+Account2;
	printf("\t\tObtained marks:%0.1f",obtained_marks2);
	per2=(obtained_marks2/total)*100;
	printf("\t\tPercentage is:%0.2f",per2);
	if(per2>=90)
	{
		printf("Grade A ");
	}
else if(per2>=80)
 {
 printf("Grade B");
}
else if(per2>=70)
{
	printf("Grade C");
}
else if(per2>=60)
{
	printf("Grade D");
}
else if(per2>=50)
{
	printf("Grade E");
}
else if(per2>=40){
	printf("Grade F");
}
else{
	printf("Fail");
}
if(Math2<40|| English2 <40||Account2<40){
	printf("Fail.");
}
}
void marks1(){
		
		printf("Enter the marks of Math:");
	scanf("%f",&Math1);
	printf("Enter the marks of English:");
	scanf("%f",&English1);
	printf("Enter the marks of Account:");
	scanf("%f",&Account1);
	obtained_marks1=Math1+English1+Account1;
	printf("\t\tObtained marks:%0.1f",obtained_marks1);
	per1=(obtained_marks1/total)*100;
	printf("\t\tPercentage is:%0.2f",per1);
	if(per1>=90)
	{
		printf("Grade A ");
	}
else if(per1>=80)
 {
 printf("Grade B");
}
else if(per1>=70)
{
	printf("Grade C");
}
else if(per1>=60)
{
	printf("Grade D");
}
else if(per1>=50)
{
	printf("Grade E");
}
else if(per1>=40){
	printf("Grade F");
}
else{
	printf("Fail");
}
if(Math1<40|| English1<40||Account1<40){
	printf("Fail.");
}
}


void student()
{
	char stud[20];
	printf("List of students:");
	printf("\nRam\n Shyam\n Hari");
	printf("\nName of student:");
	scanf("%s",stud);
	if(strcmp(stud,"Ram")==0)
	{
		 marks();
			}
	else if(strcmp(stud,"Shyam")==0){
		marks1();
	}
	else{
		marks2();
	}
		}


void teacher_id(){
	char username[30];
	char pwd[6];
	int attempts=0;
	while(attempts <3){
	printf("\n\nEnter your username:");
	scanf("%s",&username);
	printf("Enter your password:");
	scanf("%s",&pwd);


	
	if((strcmp(username,"rubish.karmacharya")==0) && (strcmp(pwd,"rubish")==0) ){	
		
		printf("Login successful...\n");
		break;
}
	else{
		printf("\t\t\t\tUsername or password doesn't exist.Please try again.\n");
		attempts++;
	}
}
if(attempts==3)
{
	printf("\t\t\t\tSorry!.The maximum number of attempts has been reached.");
}
		
}

int main()
{
	
	char choice;
	int option;
	
	printf("\t\t\t\t\t\tDEERWALK COLLEGE\n");
	printf("\t\t\t\tWelcome TO Student Result Management System");
	printf("\n");
	
	do{
		
	printf("Choose your login:\n");
	printf("\n\t\t1.Teacher login");
	printf("\t\t\t\t\t\t\t2.Student login\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf(" Welcome teacher");
			teacher_id();
			student();
		
			break;
			
		case 2:
			printf("Student login:\n");
			student_id();
//			system("cls");
			break;
		
		default:
			printf("Invalid user.");
	}
	
		printf("\n");
		printf("Do you want to continue?\n");
		printf("Press 'Y'/ 'y for continue or 'X'/'x' for exit\n");
		scanf(" %c",&choice);
	}
	while((choice='Y'||'y') || (choice='X'||'x'));


	
	printf("\n\n\n\t\t\t\tThank you!!!");
	printf("\n\t\t\t\tHave a nice day");
	return 0;	
}
	
	
	
	
	
	

	
	
//	int main()
//{
//	double (Math,English,Account,Microprocessor,Clanguage),per,total;
//	printf("Enter the marks of Math:");
//	scanf("%lf",&Math);
//	printf("Enter the marks of English:");
//	scanf("%lf",&English)
//	printf("Enter the marks of Account:");
//	scanf("%lf",&Account);
//	printf("Enter the marks of Microprocessor:");
//	scanf("%lf",&Microprocessor);
//	printf("Enter the marks of Clanguage:");
//	scanf("%lf",&Clanguage);
//	total=Math+English+Account+Microprocessor+Clanguage;
//	if(per>=90)
//	{
//		printf("Grade A ");
//	}
//else if(per>=80)
// {
// printf("Grade B);
//}
//else if("per>=70")
//{
//	printf("Grade C");
//}
//else if("per>=60")
//{
//	printf("Grade D");
//}
//else if("per>=50")
//{
//	printf("Grade E");
//}
//else if("per>=40"){
//	printf("Grade F");
//}
//else{
//	printf("Fail");
//}


