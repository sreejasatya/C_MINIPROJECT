#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
int answer;
int score=0;
printf("\n\t\t\tWELCOME TO THE QUIZ GAME");
delay(2000);
printf("\n\n\nINSTRUCTIONS");
printf("\n\n\n\n--> You will be given 10 questions with 4 options each");
printf("\n--> Each question will be displayed only for 10 seconds");
printf("\n--> You will be awarded 1 point for correct answer and 0 points for wrong answer");
delay(6000);
clrscr();

 printf("\n\t\t\t GET READY");
 printf("\n\n\t\t YOUR GAME STARTS NOW");
 delay(2000);
 clrscr();
 printf("\n\n Question 1 : Who invented 'c' language?");
 printf("\n\n1. Dennis Ritchie");
 printf("\n2. Martin Ritchards");
 printf("\n3. Steve Jobs");
 printf("\n4. John Trono");
 delay(6000);
 clrscr();
 printf("Enter your answer:");
 scanf("%d",&answer);
 if(answer==1)
 {
 printf("\n CORRECT ANSWER");
 score=score+1;
 printf("\n \nYOUR SCORE IS:%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\n YOUR SCORE IS:%d",score);
 }
 delay(2000);
 clrscr();
 printf("Question 2: Which of the following is not a Computer language?");
 printf("\n\n1. Pascal");
 printf("\n2. Java");
 printf("\n3. Cobol");
 printf("\n4. Quora");
 delay(6000);
 clrscr();
 printf("Enter your answer:");
 scanf("%d",&answer);
 if(answer==4)
 {
 printf("\n CORRECT ANSWER");
 score=score+1;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\nYOUR SCORE IS : %d",score);
 }
 delay(2000);
 clrscr();
 printf("Question 3:Who is the president of our country?");
 printf("\n\n1. Narendra Modi");
 printf("\n2. Pranab Mukherjee");
 printf("\n3. Jaya Lalitha");
 printf("\n4. Sushma Swaraj");
 delay(6000);
 clrscr();
 printf("\n ENTER YOUR ANSWER:");
 scanf("%d",&answer);
 if(answer==2)
 {
 printf("\nCORRECT ANSWER");
 score=score+1;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 delay(2000);
 clrscr();
 printf("Question 4: Who is the captain of our Indian cricket Team?");
 printf("\n\n1. Virat kohli");
 printf("\n2. Mahendra Singh Dhoni");
 printf("\n3. Rohith Sharma");
 printf("\n4. Raina");
 delay(6000);
 clrscr();
 printf("Enter your answer:");
 scanf("%d",&answer);
 if(answer==2)
 {
 printf("\nCORRECT ANSWER");
 score=score+1;
 printf("\n\n YOUR SCORE IS :%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\nYOUR SCORE IS : %d",score);
 }
 delay(2000);
 clrscr();
 printf("Question 5.Who Invented Bulb?");
 printf("\n\n1. Isaac Newton");
 printf("\n2. Albert Einstein");
 printf("\n3. Thomas Alva Edison");
 printf("\n4. Galileo");
 delay(6000);
 clrscr();
 printf("\nENTER YOUR ANSWER:");
 scanf("%d",&answer);
 if(answer==3)
 {
 printf("\nCORRECT ANSWER");
 score=score+1;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\nYOUR SCORE IS :%d",score);
 }
 delay(2000);
 clrscr();
 printf("\n\nQuestion 6:Who is the Iron Man of India?");
 printf("\n1. Sardar Vallabhabhai Patel");
 printf("\n2. Bhagat Singh");
 printf("\n3. Subhash chandra Bose");
 printf("\n4. Bipinchandrapal");
 delay(6000);
 clrscr();
 printf("\n\nEnter your answer:");
 scanf("%d",&answer);
 if(answer==1)
 {
 printf("\nCORRECT ANSWER");
 score=score+1;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 else
 {
 printf("\n WRONG ANSWER");
 score=score+0;
 printf("\n\n YOUR SCORE IS :%d",score);
 }
 delay(2000);
 clrscr();
 printf("\n\nQuestion7: What is the full form of I.A.S?");
 printf("\n\n1. Indian Aerospace Service");
 printf("\n2. Intro Administrative Service");
 printf("\n3. International Administrative Service");
 printf("\n4. Indian Administrative Service");
 delay(6000);
 clrscr();
 printf("Enter your answer:");
 scanf("%d",&answer);
 if(answer==4)
 {
 printf("\nCORRECT ANSWER");
 score=score+1;
 printf("\n\nYOUR ANSWER IS:%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 delay(2000);
 clrscr();
 printf("\nQuestion 8:'Kathakali' dance is performed in which state of our country?");
 printf("\n\n1. Bihar");
 printf("\n2. Tamilnadu");
 printf("\n3. Kerela");
 printf("\n4. Goa");
 delay(6000);
 clrscr();
 printf("Enter your answer:");
 scanf("%d",&answer);
 if(answer==3)
 {
 printf("\nCORRECT ANSWER");
 score=score+1;
 printf("\n\nYOUR SCORE IS:%d",score);
 }
 else
 {
 printf("\nWRONG ANSWER");
 score=score+0;
 printf("\n\nYOUR SCORE IS :%d",score);
 }
 delay(2000);
 clrscr();
printf("\n\nQuestion9:Who invented 'zero'?");
printf("\n\n1.Euler");
printf("\n2.Aryabhatta");
printf("\n3.Euclid");
printf("\n4.Ramanujan");
delay(6000);
clrscr();
printf("\nEnter your answer:");
scanf("%d",&answer);
if(answer==2)
{
printf("\n CORRECT ANSWER");
score=score+1;
printf("\n\n YOUR SCORE IS:%d",score);
}
else
{
printf("\n WRONG ANSWER");
score=score+0;
printf("\n\n YOUR SCORE IS:%d",score);
}
delay(2000);
clrscr();
printf("\n QUESTION 10: Sun temple is in which state?");
printf("\n\n1.Odissa");
printf("\n2.Tamilnadu");
printf("\n3.Himachal pradesh");
printf("\n4.Mizoram");
delay(6000);
clrscr();
printf("Enter your answer:");
scanf("%d",&answer);
if(answer==1)
{
printf("\nCORRECT ANSWER");
score=score+1;
printf("\n\nYOUR SCORE IS:%d",score);
}
else
{
printf("\n WRONG ANSWER");
score=score+0;
printf("\n\n YOUR SCORE IS:%d",score);
}
delay(2000);
clrscr();
printf("\n\n\t\t\t YOUR TOTAL SCORE IS :%d",score);
printf("\n\n\n\t\t\t\t THANK YOU");
delay(3000);
clrscr();
return 0;
clrscr();
}

