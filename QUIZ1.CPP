#include <iostream.h>
#include <conio.h>
#include <fstream.h>
void quiz1()
{
clrscr();
int x,y,z;
x=y=z=0;
char ch1[100],ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11;
cout<<" Please Enter Your Name - \n";
cin>>ch1;
clrscr(); //questions for quiz as output
cout<<"        Welcome "<<ch1<<".\nSobriquet is an unofficial title or name given to someone or something.";
fstream fr;
fr.open("quiz1.txt",ios::out);
cout<<"Enter answer in form of 'a','b' and'c'only.";
fr<<"What is called as ' THE HOLYLAND'? \na.Jerusalem\nb.Mathura\nc.Mecca\n";
fr<<"What is called as 'THE ROOF OF THE WORLD'?\na.Nepal\nb.Rome\nc.Tibet\n";
fr<<"What is called as ' THE LAND OF RISING SUN'?\na.Chicago\nb.Japan\nc.Tibet\n";
fr<<"What is called as ' THE GIFT OF NILE'?\na.Chicago\nb.Egypt\nc.Africa\n";
fr<<"What is called as ' THE LAND OF MIDNIGHT SUN'?\na.Norway\nb.Japan\nc.Australia\n";
fr<<"What is called as ' THE LAND OF THUNDERBOLT'?\na.Bhutan\nb.Canada\nc.Arab\n";
fr<<"What is called as ' THE WINDY CITY?\na.Jerusalem\nb.Japan\nc.Chicago\n";
fr<<"What is called as ' THE LAND OF WHITE ELEPHANTS'?\na.Bangladesh\nb.Thailand\nc.India\n";
fr<<"What is called as ' THE CITY OF SEVEN HILLS'?\na.Rome\nb.Nilgiri Hills\nc.Tibet\n";
fr<<"What is called as ' THE DARK CONTINENT'?\na.Asia\nb.Australia\nc.Africa\n";
fr.close();
char ques[100];
fr.open("quiz1.txt",ios::in);
for(int i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}
cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Good Job.Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();

for(i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}
cin>>ch2;
if(ch2=='c')
{
x=x+10; //calculation of score
cout<<"Good Job.Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
for(i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='b')
{
x=x+10;
cout<<"Good Job.Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();

for(i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='b')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
for( i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
for(i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();

for( i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='c')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();

for(i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='b')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();

for(i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='a')
{
x=x+10;
cout<<"Your score is "<<x;}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();

for( i = 0;i<4;i++)
{ fr.getline(ques,80,'\n');
  cout << ques << "\n";
}

cin>>ch2;
if(ch2=='c')
{
x=x+10;
cout<<"Your score is "<<x;
}
else
cout<<"Sorry wrong answer.";
getch();
clrscr();
fr.close();
if(x==100)                    //output of score obtained
cout<<"No cheating. :P You have done this earlier also.";
if(x==90)
cout<<"You are extremely intelligent. Your Score is 90.";
if(x==80)
cout<<"You are intelligent.Your Score is 80.";
if(50==x||x==70||x==60)
cout<<"You are average Your Score is "<<x<<"Better luck next time";
else if(x<=40)
cout<<"Try harder.. Not even 5 questions right";
getch();
}

void main()
{ clrscr();
  quiz1();
  getch();

}