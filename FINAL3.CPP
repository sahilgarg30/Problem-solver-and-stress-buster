#include <iostream>
#include <math.h>
#include <process.h>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <string.h>
#include <graphics>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <fstream.h>
#include <dos.h>
#define ch cards
#define id free[i][0]-3
#define id1 cards[a][from][0]-3

 /* the names of the text styles supported */
char *fname[] = { "DEFAULT font",
		  "TRIPLEX font",
		  "SMALL font",
		  "SANS SERIF font",
		  "GOTHIC font"
		};


//void menu(), convert(), target(), composition();
void menu();
void parta();
void partb();
void convert();
void target();
void periodic();
void chess();
void mine();
void free();
void organic();
void matrix();
void hydraulic();
void pressdif();
void molecularmass();
void percom();
void workdone();
void gravity();
void complexno();
void quiz1();
void quiz2();
void idealgas();
void pascala();
void waveeq();
char decision;
void main()
{
  clrscr();
  menu();
  while(decision!='q')
  menu();
}

void menu()
{
   /* request auto detection */
   int gdriver = DETECT,gmode;
   int style;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

      settextjustify(CENTER_TEXT, CENTER_TEXT);

      /* select the text style */
      settextstyle(3, HORIZ_DIR, 3);

      setbkcolor(EGA_GREEN);

      /* output a message */
      outtextxy(300,200,"PROBLEM SOLVER (A)" );
      outtextxy(300,300,"STRESS BUSTER (S)" );
      outtextxy(300,400,"QUIT (Q)");

      deci:
      decision=getch();
      tolower(decision);
      switch(decision)
      {

       case 'a':parta();
		 break;

       case 's':clrscr();partb();
		 break;

       case 'q': exit(0);
       default : goto deci;

}
}

void parta()
{  char decision;
   /* request auto detection */
   int gdriver = DETECT,gmode;
   int style;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

      settextjustify(CENTER_TEXT, CENTER_TEXT);

      /* select the text style */
      settextstyle(0, HORIZ_DIR, 1);

      setbkcolor(EGA_RED);

      /* output a message */
      outtextxy(150,100,"ORGANIC CONVERSIONS (A)" );
      outtextxy(150,125,"BASE CONVERSION (B)" );
      outtextxy(150,150,"TARGET ANGLE (T)" );
      outtextxy(450,250,"MATRIX MULTIPLICATION (M)" );
      outtextxy(150,175,"FLUIDS (F)");
      outtextxy(150,200,"PERCENTAGE COMPOSITION (P)");
      outtextxy(300,400,"MAIN MENU (1)");
      outtextxy(450,100,"MOLECULAR MASS (S)" );
      outtextxy(450,125,"PERIODIC TABLE (X)");
      outtextxy(450,175,"QUIZ 1(H)" );
      outtextxy(450,225,"IDEAL GAS (C)");
      outtextxy(150,225,"WORK DONE GAS (W)");
      outtextxy(150,250,"GRAVITY (G)");
      outtextxy(450,275,"COMPLEX NUMBERS (O)" );
      outtextxy(150,275,"PRESSURE DIFFERENCE (D)" );
      outtextxy(450,150,"WAVE EQUATION (E)" );
      outtextxy(450,300,"QUIZ 2(K)" );
      outtextxy(150,300,"PASCAL TRIANGLE (Z)" );



      deci:
      decision=getch();
      tolower(decision);
      switch(decision)         //calling appropriate functions
      {
       case 'e':closegraph();
		waveeq();
		break;

       case 'c':closegraph();
		idealgas();
		break;

       case 'h':closegraph();
		quiz1();
		break;

       case 'k':closegraph();
		quiz2();
		break;

       case 'z':closegraph();
		pascala();
		break;

       case 'p':closegraph();
		percom();
		break;

       case 't':closegraph();
		target();
		break;

       case 'b':closegraph();
		convert();
		break;

       case 'a':closegraph();
		organic();
		 break;

       case 'f':closegraph();
		hydraulic();
		break;

       case 'w':closegraph();
		workdone();
		break;

       case 's':closegraph();
		molecularmass();
		break;

       case 'x':closegraph();
		periodic();
		break;


      case 'g':closegraph();
	       gravity();
	       break;


       case 'm':closegraph();
		matrix();
		break;

       case 'd':closegraph();
		pressdif();
		break;

       case 'o':closegraph();
		complexno();
		break;


       case '1':menu();

       default :goto deci;

}
if (kbhit())
menu();
}

void partb()
{
   char decision;
   /* request auto detection */
   int gdriver = DETECT,gmode;
   int style;


   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "");

      settextjustify(CENTER_TEXT, CENTER_TEXT);

      /* select the text style */
      settextstyle(0, HORIZ_DIR, 3);

      setbkcolor(EGA_BLUE);

      /* output a message */
      outtextxy(300,100,"CHESS (C)");
      outtextxy(300,200,"MINESWEEPER (M)" );
      outtextxy(300,300,"FREE CELL (F)" );
      outtextxy(300,400,"QUIT (1)");


      deci:
      decision=getch();
      tolower(decision);
      switch(decision)
      {
       case 'c':closegraph();
		chess();
		break;
       case 'm':closegraph();
		mine();
		 break;

       case 'f':closegraph();
		free();
		 break;

       case '1': menu();
       default : goto deci;

}
}

//Free cell
char cards[20][8][3];
int play()
{
  //variables for storing the cards
  char deck[4][13][3],fo[4][3]={{3,3,0},{4,4,0},{5,5,0},{6,6,0}},free[4][3]={"  ","  ","  ","  "};
  randomize();
  void display(char [4][3],char [4][3]),change(int,int,char[4][3],char[4][3]);  //function to display the cards in freecell format
  int win(); //function to check whether all the cards have been cleared to the deck
  //assigns the cards to variable deck
  for(int blah=0;blah<160;cards[blah/8][blah%8][1]=' ',cards[blah/8][blah++%8][0]=' ');
  for(int i=0;i<13;deck[0][i][0]=6,deck[1][i][0]=5,deck[2][i][0]=3,deck[3][i][0]=4,i++);
  for(i=1;i<9;deck[0][i][1]=deck[1][i][1]=deck[2][i][1]=deck[3][i][1]='1'+i,i++);
  deck[0][0][1]=deck[1][0][1]=deck[2][0][1]=deck[3][0][1]='A';
  deck[0][9][1]=deck[1][9][1]=deck[2][9][1]=deck[3][9][1]='T';
  deck[0][10][1]=deck[1][10][1]=deck[2][10][1]=deck[3][10][1]='J';
  deck[0][11][1]=deck[1][11][1]=deck[2][11][1]=deck[3][11][1]='Q';
  deck[0][12][1]=deck[1][12][1]=deck[2][12][1]=deck[3][12][1]='K';
  //end of card assignment to multidimensional array deck
  for(i=0;i<52;i++)   //the loop randomly  assigns the cards in deck to the 8 columns of the multidimensional array cards
  {
    int idx=random(52);
    if(deck[idx/13][idx%13][0]!=' ')
    { cards[i/8][i%8][0]=deck[idx/13][idx%13][0];
      cards[i/8][i%8][1]=deck[idx/13][idx%13][1];
      cards[i/8][i%8][2]=0;
      deck[idx/13][idx%13][0]=' ';
    }
    else i--;
  }
  restart:    //this label is here to provide the option to restart the same game
  do          //this do- while loop is where the game is played and where the user enters the move
  {
   display(fo,free);
   cout<<"\nEnter your move:\nFrom:";
   int f,to;
   cin>>f;
   if(f==-1)  //to quit the game
     break;
   if(f==0)   //to start a new game
     return 0;
   cout<<"To  :";
   cin>>to;
   if(to>0&&to<11||f>0&&f<10)
   {
      change(f,to,free,fo);
   }
  }while(!win()); //the game ends if you win
  return 1;
}
void change(int from,int to,char free[4][3],char fo[4][3]) //function checks whether entered move is valid and
{                                                          //executes the move is valid
   int isprevious(char[3],char[3]);// function to identify the card in the column on which the current card is being placed
   from--; to--;
   for(int a=0;a<20;a++)         //this loop finds the position of the last card in the column selected as from
    if(cards[a][from][0]==' ')
     break;
   for(int b=0;b<20;b++)         //this loop finds the position of the last card in the column choosen as to
    if(cards[b][to][0]==' ')
     break;
   a--;
   if(from==8&&to<8)      //this if else if ladder checks for move validity and executes the move if it is valid
   {
      cout<<"Enter from which cell you want to shit the card:";
      int cellNo; cin>>cellNo;
      if(isprevious(free[cellNo-1],ch[b-1][to])||b==0)
      {
	strcpy(ch[b][to],free[cellNo-1]);
	strcpy(free[cellNo-1],"  ");
      }
   }
   else if(from==8&&to==9)
   {
     for(int i=0;i<4;i++)
      if((free[i][1]=='A'||fo[id][1]=='A'&&free[i][1]=='2'||fo[id][1]=='9'&&free[i][1]=='T'||fo[id][1]=='T'&&free[i][1]=='J'||fo[id][1]=='J'&&free[i][1]=='Q'||fo[id][1]=='Q'&&free[i][1]=='K'||fo[id][1]-free[i][1]==-1)&&fo[id][0]==free[i][0])
       break;
     if(i!=4)
     {
      strcpy(fo[free[i][0]-3],free[i]);
      strcpy(free[i],"  ");
     }
   }
   else if(to==8)
   {
     for(int i=0;i<4;i++)
      if(free[i][0]==' ')
      {
	strcpy(free[i],cards[a][from]);
	strcpy(cards[a][from],"  ");
      }
   }
   else if((to==9)&&(fo[id1][1]-cards[a][from][1]==-1||cards[a][from][1]=='A'||fo[id1][1]=='A'&&cards[a][from][1]=='2'||fo[id1][1]=='9'&&cards[a][from][1]=='T'||fo[id1][1]=='T'&&cards[a][from][1]=='J'||fo[id1][1]=='J'&&cards[a][from][1]=='Q'||fo[id1][1]=='Q'&&cards[a][from][1]=='K'||fo[id1][1]-cards[a][from][1]==1))
   {
       strcpy(fo[cards[a][from][0]-3],cards[a][from]);
       strcpy(cards[a][from],"  ");
   }
   else if(to<8&&to>=0&&from>=0&&from<8&&(b==0||isprevious(cards[a][from],cards[b-1][to])))//(((cards[b-1][to][0]==3||cards[b-1][to][0]==4)&&(cards[a][from][0]==5||cards[a][from][0]==6)||(cards[a][from][0]==3||cards[a][from][0]==4)&&(cards[b-1][to][0]==5||cards[b-1][to][0]==6))&&(cards[b-1][to][1]-cards[a][from][1]==1||cards[a][from][1]=='A'||cards[b-1][to][1]=='A'&&cards[a][from][1]=='2'||cards[b-1][to][1]=='9'&&cards[a][from][1]=='T'||cards[b-1][to][1]=='T'&&cards[a][from][1]=='J'||cards[b-1][to][1]=='J'&&cards[a][from][1]=='Q'||cards[b-1][to][1]=='Q'&&cards[a][from][1]=='K')))
   {
	strcpy(cards[b][to],cards[a][from]);
	strcpy(cards[a][from],"  ");
   }  //end of the if else ladder
}
win()  //this function checks whether there are any cards left and thereby checks whether the game has been completed
{ for(int i=0;i<52;i++)
  if(cards[i/8][i%8][0]!=' ')
   return 0;
  return 1;
}
isprevious(char from[3],char to[3])  //function to check whether the card being moved is being placed on an appropriate card
{
  if(to[0]==' ')return 1;
  if(((from[0]==3||from[0]==4)&&(to[0]==5||to[0]==6)||(from[0]==5||from[0]==6)&&(to[0]==3||to[0]==4))&&(from[1]=='A'&&to[1]=='2'||to[1]-from[1]==1||from[1]=='9'&&to[1]=='T'||from[1]=='T'&&to[1]=='J'||from[1]=='J'&&to[1]=='Q'||from[1]=='Q'&&to[1]=='K'))
   return 1;
  return 0;
}
void display(char f[4][3],char free[4][3]) //this function displays the freecell board
{
textbackground(GREEN);
  clrscr();textcolor(6);
  cprintf("Welcome To FreeCell");cout<<endl;
  cprintf("Press 9 for freecell and 10 for foundation -1 to exit and 0 for new game");cout<<endl;
  cprintf("-------------  -------------");cout<<endl;
  cout<<"|";
  if(free[0][0] == 3 || free[0][0] == 4) textcolor(4); else textcolor(0);
  cprintf(free[0]);cout<<'|';
   if(free[1][0] == 3 || free[1][0] == 4) textcolor(4); else textcolor(0);
  cprintf(free[1]);cout<<'|';
   if(free[2][0] == 3 || free[2][0] == 4) textcolor(4); else textcolor(0);
  cprintf(free[2]);cout<<'|';
   if(free[3][0] == 3 || free[3][0] == 4) textcolor(4); else textcolor(0);
  cprintf(free[3]);
  cout<<"|  |";
  textcolor(4);
  cprintf(f[0]);cout<<'|';cprintf(f[1]);cout<<'|';
  cout<<f[2]<<'|'<<f[3]<<"|\n";
  textcolor(6);
  cprintf("-------------  -------------");cout<<endl;
  for(int i=0;i<160;i++)
  {
   for(int j=0;j<8;j++)
     if(cards[i/8][j][0]!=' ')
      break;
   if(j==8)break;
   if(i%8) cprintf(" "); else cout<<'\n'; cprintf(" ");
   cards[i/8][i%8][2]=0;
   if(cards[i/8][i%8][0] == 3 || cards[i/8][i%8][0]== 4) textcolor(4); else textcolor(0);
   cprintf(cards[i/8][i%8]);
  }textbackground(GREEN);
}

void free()  //this function calls the freecell playing function
{
  clrscr();
  int x;
  do{  //this loop is to allow the user to start a new game
   x=play();
  }while(!x);
  getch();
  if (kbhit())
  menu();
}

//Matrix multiplication
void matrix()
{
    clrscr();
    int a[10][10], b[10][10],c[10][10];
    int x,y,i,j,m,n;

    //Enter sizes of matrix
    cout<<"\nEnter the number of rows and columns for Matrix A:::\n\n";
    cin>>x>>y;

    // x denotes number rows in matrix A
    // y denotes number columns in matrix A

    cout<<"\n\nEnter elements for Matrix A :::\n\n";

    for(i=0;i<x;i++)
    {
	for(j=0;j<y;j++)
	{
	    cin>>a[i][j];
	}
	cout<<"\n";
    }



    cout<<"\n\nMatrix A :\n\n";

    for(i=0;i<x;i++)
    {
	for(j=0;j<y;j++)
	{
	    cout<<"\t"<<a[i][j];
	}
	cout<<"\n\n";
    }

    cout<<"\n-----------------------------------------------------------\n";

    cout<<"\nEnter the number of rows and columns for Matrix B:::\n\n";
    cin>>m>>n;

    // m denotes number rows in matrix B
    // n denotes number columns in matrix B


    cout<<"\n\nEnter elements for Matrix B :::\n\n";

    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	{
	    cin>>b[i][j];
	}
	cout<<"\n";
    }


    cout<<"\n\nMatrix B :\n\n";

    for(i=0;i<m;i++)
    {
	for(j=0;j<n;j++)
	{
	    cout<<"\t"<<b[i][j];
	}
	cout<<"\n\n";
    }
    //Multiplication of corresponding elements
    if(y==m)
    {

	for(i=0;i<x;i++)
	{
	    for(j=0;j<n;j++)
	    {
		c[i][j]=0;
		for(int k=0;k<m;k++)
		{
		    c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	    }
	}

	cout<<"\n-----------------------------------------------------------\n";

	cout<<"\n\nMultiplication of Matrix A and Matrix B :\n\n";
	//OUTPUT
	for(i=0;i<x;i++)
	{
	    for(j=0;j<n;j++)
	    {
		cout<<"\t"<<c[i][j];
	    }
	    cout<<"\n\n";
	}
    }
    else
    {
	cout<<"\n\nMultiplication is not possible";
    }

    getch();
    if (kbhit())
    menu();
}


void display(int n,char c[50][50])
{
  clrscr();
  cout<<"  ";
  for(int i=0;i<n;i++)
   cout<<(i+1<10?"  ":" ")<<i+1;cout<<"\n";
  for(i=0;i<n;i++)
  {
    cout<<i+1<<(i+1<10?"  ":" ");
    for(int k=0;k<n;k++)
      cout<<' '<<c[i][k]<<" ";
    cout<<'\n';
  }
}

void mine()  //this function interacts with the users playing minesweeper
{
  clrscr();
  char c[50][50],d[50][50];   //minesweeper board
  int n,chkForWin,identify=0;
  cout<<"\t\t\t\tWELCOME";
  cout<<"\nENTER THE DIFFICULTY LEVEL\n1)Easy\n2)Medium\n3)Hard\n4)GOD\n5)Cuckoo"<<endl;
  cin>>n;  //the user chooses the board size and the difficulty level
  n*=4;
  randomize();
  int a=n/4==1?10:n/4==2?10:n/4==3?8:n/4==4?8:5; //this variable determines the probability of a bomb being in a given location based on the difficulty level
  for(int i=0,j=0;i<n*n;c[i/n][i%n]=!random(a/2)?(j++,'&'):'0',d[i/n][i%n]='-',i++); //randomly assigns the bombs at places on the board using the variable a(see previous line)
  for(i=0;i<n;i++)    //checks whether there is a bomb at a particular location and increases the value of non bomb locations around the bomb
  {
    for(int j=0;j<n;j++)
    {
       if(!(c[i][j]>='0'&&c[i][j]<'9'))
	 c[i][j]='&';
       if(c[i][j]=='&')
	c[i-1][j-1]++,c[i-1][j]++,c[i-1][j+1]++,c[i][j-1]++,c[i][j+1]++,c[i+1][j-1]++,c[i+1][j]++,c[i+1][j+1]++; //increasing the value if there is a bomb
    }
 }
 for(i=0;i<n*n;i++)
   if(!(c[i/n][i%n]>='0'&&c[i/n][i%n]<'9'))
    c[i/n][i%n]='&'; //this is just to remove a display error not important for the reader to understand it
 int row,col;
 do
 {
   display(n,d);
   cout<<"There are "<<j<<" bombs totally out of which there are "<<j-identify<<" left.\n";
   cout<<"Enter 0 space 0 to exit:\n";
   cout<<"Enter your move in the form rowNo columnNo :";
   cin>>row>>col;

   if(row==0)break;  //all these if statements check whether the user has marked a bomb or has unwittingly exploded it
   row--;col--;
   if(row<0&&col<0)
   {
    row+=2; col+=2;
    row*=-1; col*=-1;
    if(row>=n||col>=n)
    {

      chkForWin=1;
      continue;
    }
    if(d[row][col]=='-'&&identify<j)
    {
      d[row][col]='$';
      identify++;
      chkForWin=1;
      continue;
    }
    else
    {
      d[-row][-col]='-';
      identify--;
      continue;
    }
   }
   else if(row>n||col>n)
   {
     chkForWin=1;
     continue;
   }
   else if(c[row][col]=='&')
   {
     display(n,c);
     cout<<"You Lose. Better luck next time.";
     delay(1000);
     break;
   }
   else
   {
     d[row][col]=c[row][col];
     chkForWin=0;
     for(int abc=0;abc<n*n;abc++)
      if(d[abc/n][abc%n]=='-')
      {
       chkForWin=1;
       break;
      }
   }

 }while(chkForWin);
 getch();
  if (kbhit())
  menu();

}

struct comp //Structure for compounds.
{
 char name[20];
 char let;
} cmpndarr[10];

char reagname[26][20];

//Array initialization representing reaction map between compounds
char react_map[3][23]={
		{'A','A','A','A','E','Y','H','C','A','Y','H','B','E','E','E','E','E','Y','Y','z','Y','B','Y'}
	       ,{'B','L','C','H','A','A','A','A','R','E','E','E','H','B','N','C','Y','E','z','H','B','L','R'}
	       ,{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w'}
	       };


char s,e;
int max;   //Global variable declarations.
char que[20]; //array to store vertices for breadth first traversal
int j;
int k;
char path[20][20]; //to store traversal path of compounds
char blah[2];
int len;
char reag_path[20][20]; //to store traversal path of reagents

int findpath(char s,char e); //Function declarations.
void initdata();
void display();
void rules();
void extraction(char st[],char et[]);

void organic()
{


 int decision;


 initdata();

 do {
     clrscr();

     rules();
     j=0,k=0;
     path[j][0]=s;
     path[j][1]='\0';
     que[j++]=s;


     if (!findpath(s,e))
	cout<<"\nPath does not exist.\n";
     else
     display();
     cout<<"Enter 1 to try again and 0 to not ";
     cin>>decision;
 } while (decision==1);
 getch();
 if (kbhit())
 menu();
}


int findpath(char s,char e)
{
  do
  {
   for (int i=0;i<23;i++)  {   // search thru the array
     if (react_map[0][i]==s) {
       if (react_map[1][i]==e)
       {
	    len=strlen(path[k]);
	    path[k][len]=e;
	    path[k][len+1]='\0';
	    cout<<path[k]<<endl;
	    cout<<"Number of steps taken: "<<k+1<<endl;
	    reag_path[k][len-1]=react_map[2][i];
	    return 1;
       }
       else
       {
	 que[j]=react_map[1][i];
	 strcpy(path[j],path[k]);
	 len=strlen(path[j]);
	 path[j][len]=que[j];
	 path[j][len+1]='\0';
	 reag_path[j][len-1]=react_map[2][i];
	 j++;
       }
     }
    }
    s=que[++k];
   } while (k < 20 && k!=j);
return 0;
}


void initdata() //Function to initialize data.
{
 //Compound initialization

 cmpndarr[0].let='A';
 strcpy(cmpndarr[0].name,"Alkane");
 cmpndarr[1].let='B';
 strcpy(cmpndarr[1].name,"Alcohol");
 cmpndarr[2].let='C';
 strcpy(cmpndarr[2].name,"Carboxylic");
 cmpndarr[3].let='E';
 strcpy(cmpndarr[3].name,"Alkene");
 cmpndarr[4].let='H';
 strcpy(cmpndarr[4].name,"Halogen");
 cmpndarr[5].let='z';
 strcpy(cmpndarr[5].name,"Haloalkene");
 cmpndarr[6].let='L';
 strcpy(cmpndarr[6].name,"Aldehyde");
 cmpndarr[7].let='N';
 strcpy(cmpndarr[7].name,"Amide");
 cmpndarr[8].let='R';
 strcpy(cmpndarr[8].name,"Benzene");
 cmpndarr[9].let='Y';
 strcpy(cmpndarr[9].name,"Alkyne");

 //Reagent initialization
 strcpy(reagname[0],"Cu ");
 strcpy(reagname[1],"Mo2O3");
 strcpy(reagname[2],"CH3COOMn");
 strcpy(reagname[3],"Uv");
 strcpy(reagname[4],"H");
 strcpy(reagname[5],"H");
 strcpy(reagname[6],"Zn , H+");
 strcpy(reagname[7],"NaOH , CaO");
 strcpy(reagname[8],"Aromatization");
 strcpy(reagname[9],"Lindlar's Catalyst");
 strcpy(reagname[10],"alc KOH");
 strcpy(reagname[11],"conc H2SO4");
 strcpy(reagname[12],"HX");
 strcpy(reagname[13],"conc H2SO4, H2O(Water)");
 strcpy(reagname[14],"HNO3");
 strcpy(reagname[15],"alc KOH");
 strcpy(reagname[16],"NaNH2");
 strcpy(reagname[17],"HX");
 strcpy(reagname[18],"H");
 strcpy(reagname[19],"Water, HgSO4");
 strcpy(reagname[20],"HX");
 strcpy(reagname[21],"Red hot iron tube 873 K");
 strcpy(reagname[22],"Halogen");


 j=k=0;
 max=10;

}


void display() //Function to dislplay all the processes.
{
 char di[20][20];

 cout<<"path is -"<<path[k]<<endl;

 for (int i=0;path[k][i]!='\0';i++)
 {
      for (int j=0;j<10;j++)
	  if (cmpndarr[j].let==path[k][i]) //Searching for corresponding compound name.
	       strcpy(di[i],cmpndarr[j].name);
 }

  for (int j=0;j<i;j++) {
     if (j<(i-1))
	cout<<di[j]<< " -> <" <<reagname[reag_path[k][j]-'a']<<"> ->";
     else
	cout<<di[j]<<endl;
  }
}

void rules()
{
 char st[20];
 char et[20];
 cout<<"The compunds are given as follows:\n ";
 cout<<"\nAlkane\nAlkene\nAlkyne\nHalogen\nHaloalkene\nBenzene\nAmide\nCarboxylic\nAldehyde\nAlcohol\n\n";
 cout<<"Enter the starting point: ";
 gets(st);
 cout<<"Enter the ending point: ";
 gets(et);
 extraction(st,et);
}

void extraction(char st[20],char et[20])  //to find the corresponding letter for the //
					  //starting and ending point entered by the user.
{
 int y;
 for (y=0;y<10;y++)
    if (strcmp(st,cmpndarr[y].name)==0) {
	s=cmpndarr[y].let;
	break;
       }

 for (y=0;y<10;y++)
    if (strcmp(et,cmpndarr[y].name)==0) {
	    e=cmpndarr[y].let;
	    break;
     }


}
//gravity
void collect(char ma[],float &M , int &m)
//checks entry of data in scientific notation
      {	lab: cin >> ma;
	     for ( int l = 0;ma[l]!='\0' ; l++);
	     for ( int i = 0; ma[i] != '\0' ; i++)
	     if(ma[i] == '*')  //* should be present
	     break;
	     else
	     continue;
	     if(i==l) //Extract data
	    { cout << "Wrong entry. Please enter in scientific notation.Power will only be taken of 10.\n";
	       goto lab;
	     }

	     for (i = 0; ma[i] != '\0' ; i++)
	     if(ma[i] == '^')
	     break;
	     else
	     continue;
	     if(i==l)   //entry must have ^ sign
	     { cout << "Wrong entry. Please enter in scientific notation.Power will only be taken of 10.\n";
	       goto lab;
	     }

	     for(i = 0; ma[i]!='\0' ; i++)
	     { if(ma[i] != '*')                 //Extract  data before *
	       {M += ma[i]-48;
		M*=10;
	       }
		else
		break;
	     }
	     M/=10;
	     i++;


	     for(; ma[i]!='\0' ; i++)     //Extracts data after ^
	     if(ma[i] == '^')
	     break;
	     for(i++;ma[i]!='\0' ;i++)
	     { if(isdigit(ma[i]))
	       { m+=ma[i]-48;
		 m*=10;}
	     }
	     m/=10;
       }
void gravity()  //To calculate height of body above surface of earth
 {clrscr();
  cout << "This is a program to calculate \n1.the height to which a body can be projected for a particular velocity\n2.Orbital velocity of a satellite\n";
  cout << "\nPlease enter the choice - \n";
  int choice;
  cin >> choice;
  while (choice < 1 || choice > 3 )
  { cout << "\nWrong entry.Please enter again -";
    cin >> choice;
  }
  //Entry of data
  cout << "\nPlease enter the mass of the planet (kg) in the form a*10^b- ";
	     char mass[9];
	     float Ms=0;
	     int ms = 0;
	     collect(mass,Ms,ms);

  cout << "\nPlease enter the radius of the planet(m) in the form of a*10^b - ";
  char rad[9];
  float Rd=0;
  int rd=0;
  collect(rad,Rd,rd);
 //cout << Ms << endl << ms << endl << Rd << endl << rd;
  switch(choice)
  { case 1:  //entry of velocity
	     cout << "\nPlease enter the initial velocity of the body (m/s)- ";
	     float v=0;
	     cin>> v;
	     long double xp=0;
	     xp =( 1 -( (v*v*Rd*pow(10,rd))/(2*Ms*pow(10,ms)*6.67*pow(10,-11))));
	     //cout << xp << "\n";
	     long double res=0;
	     //calculate value of force
	     res = (v*v*Rd*Rd*pow(10,2*rd))/(2*Ms*pow(10,ms)*6.67*pow(10,-11));
	     //cout << res << "\n";
	     res = res/xp;
	     //calculate height
	     cout << "\nThe maximum height it can reach is " << res << "m.\n";
	     break;

   case 2 : cout << "\nPlease enter the height of the body (m)- ";
		//entry of height
	     long double h;
	     cin>> h;
	    double vel;
	    //Calculate velocity
	    vel = pow(6.67*pow(10,-11)*Ms*pow(10,ms)/(Rd*pow(10,rd)+h),0.5);
	    //output of orbital velocity depending on height
	    if(h < 4000000)
	    cout << "\nThe orbital velocity is " << vel << " m/s.\n";
	    else
	    cout << "\nThe orbital velocity is 11.2 km/sec" << ".\n";
	    break;
  }

cout << "Thanks for using!";
getch();
if(kbhit())
menu();
}
//molecular formula
struct element   //structure for elements
{ char name[3];
  float mass;
  float perc;
  float atr,sr;
}e1[8];
//declaration of elements and respective masses
char ele[28][3] = {"Al" ,"Ba" ,"B " ,"Br" ,"Cs" ,"Ca" ,"C" ,"Cl" ,"Cr" ,"Cu" ,"F" ,"H" ,"I"  ,"Fe" ,"Pb" ,"Mg" ,"Mn" ,"Ni" ,"N" ,"O" ,"P" ,"K"  ,"Si" ,"Na" ,"S" ,"Zn"  };
float emass[26] = { 27  , 137 , 10.8, 80  , 133 ,40   , 12 , 35.5, 52  , 63  , 19 , 1  ,126.9, 55  , 207 , 24  , 54  , 58.7, 14 , 16 , 31 , 39.1, 28  , 23  , 32 , 65.3 };
void molecularmass()//to find molecular mass of compound
{ clrscr();
  float lr = 100.0;
  int flag ;
  cout << "This is a program to find the molecular formula of a compound using \nits percentage composition.\n";
  cout << "Enter the number of elements in the compound - ";
  int n; //entry of elements
  cin>> n;
  for (int i = 0 ; i < n; i++)
  { cout << "\nEnter the symbol of element (In proper case) " << i+1 <<"- \n";
    cin >> e1[i].name;
    cout << "\nEnter the percentage of element " << i+1 <<"- \n";
    cin >> e1[i].perc;
    flag = 0;
    for(int j = 0 ; j <28 ; j++)
    if(strcmp(ele[j],e1[i].name) == 0 )     //search element in array of declared compounds
    {flag = 1;
      e1[i].mass = emass[j];
    }
    if(flag == 0)           //entry of atomic mass if element not found
    {cout << "\nEnter the atomic mass of element " << i+1 <<"- \n";
    cin >> e1[i].mass;}
  }
  for ( i = 0 ; i < n ; i++)  //calculate number of moles
  { e1[i].atr = e1[i].perc/e1[i].mass;
    if( e1[i].atr < lr)
    lr = e1[i].atr;
  }
  flag = 0;
  for ( i = 0 ; i < n ; i++)
  { e1[i].sr = e1[i].atr/lr;             //calculate simple whole no. ratio of elements
    if ((e1[i].sr - int(e1[i].sr)) > 0.55)
    e1[i].sr = ceil(e1[i].sr);
    else if ((e1[i].sr - int(e1[i].sr)) < 0.45)
    e1[i].sr = floor(e1[i].sr);
    else  if (e1[i].sr - int(e1[i].sr) > 0.45 && e1[i].sr - int(e1[i].sr) < 0.55)
    flag ++;
  }
    if ( flag > 0)
    for ( i = 0 ; i <n ; i++)//to get whole number ratio of elements
   { e1[i].sr *=2;
     if ((e1[i].sr - int(e1[i].sr)) > 0.5)
     e1[i].sr = ceil(e1[i].sr);
     else if ((e1[i].sr - int(e1[i].sr)) < 0.5)
     e1[i].sr = floor(e1[i].sr);
   }
   cout << "The emperical formula of the required compound is - ";
   for ( i = 0 ; i <n ; i++)
   cout << e1[i].name << e1[i].sr << " "; //display empirical formula as simplest ratio
   cout << ".\nPlease enter the molecular formula weight - ";
   float mfw;           //entry of molar mass
   cin >> mfw;
   float efw = 0;
   for ( i = 0 ;i < n ; i++)
   efw += (e1[i].mass*e1[i].sr);

   float nf;
   nf = mfw/efw;      //finding factor of empirical mass with molar mass
   if ((nf - int(nf)) >= 0.5)
   nf = ceil(nf);
   else if ((nf - int(nf)) < 0.5)
   nf = floor(nf);

   for ( i = 0 ;i < n ; i++)
   e1[i].sr *= nf; //calculate molecular formula by multiplication
   cout << "The molecular formula of the required compound is - ";
   for ( i = 0 ; i <n ; i++)
   cout << e1[i].name << e1[i].sr << " ";
   cout << ".\nThanks for using! ";
   getch();
   if (kbhit())
   menu();
}
struct complex  //to find product of complex numbers
{ float r;
  float img;
};
complex product(complex c1,complex c2)           //to multiply nos.
{complex R;
 R.r = c1.r*c2.r - c1.img*c2.img;
 R.img = c1.img*c2.r + c1.r*c2.img;
 return R;
}

void complexno()
{ clrscr();
  complex a,b,c;
  //entry of complex numbers
  cout << "\nEnter the value of real part of 1st complex number- \n";
  cin >> a.r;
  cout << "\nEnter the imaginary value of 1st complex number - \n";
  cin >> a.img;
  cout << "\nEnter the value of real part of 2nd complex number- \n";
  cin >> b.r;
  cout << "\nEnter the imaginary value of 2nd complex number - \n";
  cin >> b.img;
  c= product(a,b);
  cout << "\nThe product of complex numbers is " << c.r << "+"<< c.img << "i.";
  cout << "\nPress any key to exit !";
  getch();
  if(kbhit())
  menu();
}
//CHESS
char p[8][8][3]={{"WR","WN","WB","WQ","WK","WB","WN","WR"},{"WP","WP","WP","WP","WP","WP","WP","WP"}
		,{"__","__","__","__","__","__","__","__",},{"__","__","__","__","__","__","__","__",}
		,{"__","__","__","__","__","__","__","__",},{"__","__","__","__","__","__","__","__",}
		,{"BP","BP","BP","BP","BP","BP","BP","BP"},{"BR","BN","BB","BQ","BK","BB","BN","BR"}};
void change(char[3],char[3],char[8][8][3]);  //function to carry out the move made by the user if it is valid
double yolomolo(char p[8][8][3],int,int);    //this function is not being used. It was actually intented to make this program a computer vs human chess game but later this was dropped and a multiplayer
					     //game was made and hence this function is not being used right now and may be used in the future when computer vs player feature has been added on
void chess()                                  //this is the function which interacts with the user and in which the game is played. Other supporting functions are being called from this
{
  clrscr(); textbackground(BLACK);
  void display2(char [8][8][3]),bestMove(int,int[4],char [8][8][3],double,int);   //variables  and functions used in this part of the program are being declared
  int Identify(char [3],char from[3],char piece[3],int moveNo,int[4]),checK(int,int[4],char p[8][8][3]);
  int moveNo=0,chkMove(char[3],char[3],char[3],int,int[4],int,char[8][8][3]),f1=0,checkmate(int,int[4],char[8][8][3]),chkCastle[4]={1,1,1,1};
  char piece[5],from[3],to[3],temp[3],movesList[100][8];
  cout<<"\t\t\tWelcome To The chess game";
  do
  {
   if(f1==-1)f1=0;else clrscr();
   display2(p);    moveNo++;
   if(moveNo%2)
     cout<<"\n\n\nWhite's move:"<<(checK(moveNo,chkCastle,p)?"You sir are in check":"")<<endl;
   else
     cout<<"\n\n\nBlack's move:"<<(checK(moveNo,chkCastle,p)?"You sir are in check":"")<<endl;
   cout<<"Enter the position to be moved to  :";
   cin>>to;       strupr(to);    if(strcmp(to,"EXIT")==0)goto exit;
   if(Identify(to,from,piece,moveNo,chkCastle)!=1)
   {
     cout<<"Enter the piece to be moved        :";
     cin>>piece;    strupr(piece);
     cout<<"Enter the position to be moved from:";
     cin>>from;     strupr(from);
   }
   if((!chkMove(piece,from,to,moveNo,chkCastle,1,p))) //checks whether the move is valid and if so makes the move
   {
     moveNo--;clrscr();
     cout<<"Unable to do this move as it is illegal";
     cout<<endl<<"Renter your move:";  f1=-1;
   }
   else                 //makes changes if the move is valid
   {
     char tempchk[8][8][3];
     for(int i=0;i<64;i++)
     strcpy(tempchk[i/8][i%8],p[i/8][i%8]);
     change(from,to,tempchk);
     if(checK(moveNo,chkCastle,tempchk))
      {moveNo--;clrscr();    	f1=-1;
      cout<<"your king is in check and you cannot risk your king"<<endl<<"Illegal Move Reenter";}
     else change(from,to,p);
    }
  }while(!checkmate(moveNo,chkCastle,p)||1);
  exit:
}
int chkMove(char P[3],char f[3],char t[3],int n,int chkCastle[4],int chkC,char p[8][8][3])
{
  /*
      This function checks whether the given move is valid in terms of the kind of piece being moved and whether the piece jumps over other pieces or even whether the player is moving the right color piece
       It also prevents a player from hitting his own pieces. each if statement checks for the validity of a particular piece. This function has really long if statements conditions and so please don't bother reading
      them as they are hard to understand and I myself cannot remember all that i have done. it is not need to understand the code and is just a bunch of conditions to check the move validity and that is all you
       need to keep in mind.  By the way this function also checks for castle
*/
  int s1=f[1]-49,s2=f[0]-65,t1=t[1]-49,t2=t[0]-65;
  if(!((strlen(P)==2&&strlen(f)==2&&strlen(t)==2)&&(P[0]==(n%2?'W':'B'))&&(!strcmp(P,p[s1][s2]))&&(p[t1][t2][0]!=P[0]))&&f[0]>64&&f[0]<73&&f[1]>'0'&&f[1]<'9'&&t[0]>64&&t[0]<73&&t[1]>'0'&&t[1]<'9')
    return 0;
  if(P[1]=='P'&&(t2-s2==0?(s1==1||s1==6?p[t1][t2][0]=='_'&&(t1-s1==1*(n%2?1:-1)?1:0)||(t1-s1==2*(n%2?1:-1)&&(p[t1+(n%2?-1:1)][t2][0]=='_'?1:0)):p[t1][t2][0]=='_'&&(t1-s1==1*(n%2?1:-1)?1:0)):(t2-s2==1||t2-s2==-1)&&(t1-s1==1*(n%2?1:-1))&&p[t1][t2][0]!='_'?1:0))
    return 1;
  if(P[1]=='P')
    return 0;
  if(P[1]=='N'&&(((t2-s2==-2||t2-s2==2)&&(t1-s1==-1||t1-s1==1))||((t2-s2==-1||t2-s2==1)&&(t1-s1==2||t1-s1==-2))))
    return 1;
  if(P[1]=='N')
    return 0;
  if((P[1]=='B'||P[1]=='Q')&&(t2-s2==t1-s1||t2-s2==s1-t1))
  {
    for(int i=1;i<(t2>s2?t2-s2:s2-t2);i++)
     if(p[s1+i*(s1>t1?-1:1)][s2+i*(s2>t2?-1:1)][0]!='_')
       return 0;
    return 1;
  }
  else if(P[1]=='B')
    return 0;
  if((P[1]=='R'||P[1]=='Q')&&(s1==t1||s2==t2))
  {
    for(int i=1;i<(s1>t1?s1-t1:s1<t1?t1-s1:s2>t2?s2-t2:t2-s2);i++)
     if(p[s1==t1?s1:s1+i*(s1>t1?-1:1)][s2==t2?s2:s2+i*(s2>t2?-1:1)][0]!='_')
       return 0;
    if(chkC)
    P[0]=='W'?s2==0?chkCastle[0]=0:chkCastle[1]=0:s2==0?chkCastle[2]=0:chkCastle[3]=0;
    return 1;
  }
  else if(P[1]=='R')
   return 0;
  if(P[1]=='K'&&(t1>s1?t1-s1:s1-t1)<2&&(t2>s2?t2-s2:s2-t2)<2)
  {
    if(chkC)
      P[0]='W'?chkCastle[0]=chkCastle[1]=0:chkCastle[2]=chkCastle[3]=0;
    return 1;
  }
  else if(P[1]=='K'&&(t2>s2?t2-s2:s2-t2)==2&&t1==s1&&(P[0]=='W'?s2>t2?chkCastle[0]:chkCastle[1]:s2>t2?chkCastle[2]:chkCastle[3]))
  {
    for(int i=1;i<(t2>s2?t2-s2:s2-t2);i++)
      if(p[s1][s2+i*(t2>s2?1:-1)][0]!='_')
	return 0;
    return 1;
  }
  return 0;
}
 /*please note that the function that you see below this comment and the one after it namely yolomolo(===) have not been used
   as has been explained in another comment above this program initially inteded to make a computer vs human game but later our plan was altered
   and so some functions have been left unused and shall be used in the future when the computer vs human feature has been added
*/
void bestMove(int n,int x2[4],char ch1[8][8][3],double x1,int dhe)  //This function has not been used
{
  if(dhe<3)
  {
  char ch[3];        int x[4]={x2[0],x2[1],x2[2],x2[3]};
  for(int i=0;i<64;i++)
  {
    if(p[i/8][i%8][0]==(n%2?'W':'B'))
    {
     for(int j=0;j<64;j++)
      if(chkMove(p[i/8][i%8],(ch[1]=i/8+'1',ch[0]=i%8+'A',ch),(ch[1]=j/8+'1',ch[0]=j%8+'A',ch),n,x,1,p))
      {
	change((ch[1]=i/8+'1',ch[0]=i%8+'A',ch),(ch[1]=j/8+'1',ch[0]=j%8+'A',ch),ch1);
	x1+=yolomolo(ch1,n,dhe);
	bestMove(n+1,x,ch1,x1,dhe+1);
      }
    }
  }
  }
}
double yolomolo(char ch[8][8][3],int a,int b)  //function not used
{
  a=0; double totes=(double)a;
  for(int i=0;i<64;totes+=(ch[i/8][i%8][0]=='W'?1:ch[i/8][i%8][0]=='B'?-1:0)*(ch[i/8][i%8][1]=='P'?1:ch[i/8][i%8][1]=='B'||ch[i/8][i%8][1]=='N'?3:ch[i/8][i%8][1]=='R'?5:ch[i/8][i%8][1]=='Q'?9:ch[i/8][i%8][1]=='K'?40:0)/pow(2,b)*1.0,i++);
  return totes;
}
Identify(char to[3],char from[3],char piece[3],int MoveNo,int u[4]) //in some cases if only the position to which the piece has to be moved is entered we
                                                                    //can find out which peice is to be moved and from where since there is only one piece that can go to that place this is what the function does
{
  char ch[3]; ch[2]='\0';
  for(int i=0,flag=0;i<64;i++)
  {
     if(MoveNo%2)
     {
       if(p[i/8][i%8][0]=='W')
	if(chkMove(p[i/8][i%8],(ch[0]=i%8+65,ch[1]=i/8+49,ch),to,MoveNo,u,0,p))
	 { flag++;strcpy(from,ch);strcpy(piece,p[i/8][i%8]);}
     }
     else
     {
       if(p[i/8][i%8][0]=='B')
	if(chkMove(p[i/8][i%8],(ch[0]=i%8+65,ch[1]=i/8+49,ch),to,MoveNo,u,0,p))
	 { flag++;strcpy(from,ch);strcpy(piece,p[i/8][i%8]);}
     }
  }
  return flag; //this has been done because if two or more pieces can move to the entered location then the user has also to enter which piece is to be moved and from where that piece is to be moved from
}
checK(int n,int chkCastle[4],char p[8][8][3]) //this function checks whether player is in check
{    char from[3],to[3];
  for(int ix=0;ix<64;ix++)
  if(p[ix/8][ix%8][1]=='K'&&p[ix/8][ix%8][0]==(n%2?'W':'B'))
   break;
  to[0]=65+ix%8;to[1]=49+ix/8;to[2]='\0';
  for(int iy=0;iy<64;iy++)
  if(p[iy/8][iy%8][0]==(n%2?'B':'W'))
  if(chkMove(p[iy/8][iy%8],(from[0]=65+iy%8,from[1]=49+iy/8,from[2]='\0',from),to,n+1,chkCastle,0,p))
  {cout<<p[iy/8][iy%8];  return 1;}
  return 0;
}

checkmate(int n,int chkCastle[4],char p[8][8][3]) //this does not work yet and shall be fixed in future version of the game
{                                                 //scratch that i think it has been fixed and that i forgot that i fixed it, just not sure
 char ch[3];
 if(checK(n,chkCastle,p))
 for(int i=0;i<64;i++)
 {
    char tempchk[8][8][3];
   if(p[i/8][i%8][0]==(n%2?'W':'B'))
    for(int j=0;j<64;j++)
     if(chkMove(p[i/8][i%8],(ch[0]=i%8+65,ch[1]=i/8+49,ch[2]=0,ch),(ch[0]=j%8+65,ch[1]=j/8+49,ch[2]=0,ch),n,chkCastle,0,p))
     {
	for(int i=0;i<64;i++)
	 strcpy(tempchk[i/8][i%8],p[i/8][i%8]);
       change((ch[0]=i%8+65,ch[1]=i/8+49,ch[2]=0,ch),(ch[0]=j%8+65,ch[1]=j/8+49,ch[2]=0,ch),tempchk);
       cout<<ch;
       if(!checK(n,chkCastle,tempchk))
	return 0;
     }
 }
  getch(); return 1;
}

void display2(char p[8][8][3])   //this function displays the chess board in all its glory and splender
{
  cout<<endl; textcolor(4);
  cprintf("    A   B   C   D   E   F   G   H");
  cout<<endl;
  cprintf("  --------------------------------");
  cout<<endl;
  for(int i=0;i<8;i++)
  {  textcolor(4);
   cprintf("%i",i+1);
   cout<<" ";
   for(int j=0;j<8;j++) {
   if(((i+j) % 2) == 0) textbackground(WHITE);
   else textbackground(BLUE);
    textcolor(4);cprintf("|");
    if(p[i][j][0] == 'W') textcolor(WHITE);
    else if(p[i][j][0] == 'B') textcolor(BLACK);
    else textcolor(4);
    cprintf(p[i][j]); textcolor(4);
    cprintf("|"); }
     cout<<" ";
     textbackground(0);
     cprintf("%i",i+1);
     cout<<endl;

  }  textcolor(4);
  cprintf("  --------------------------------");
  cout<<endl;
  cprintf("    A   B   C   D   E   F   G   H");
  cout<<endl;
 // textattr(99);
}
void change(char f[3],char t[3],char p[8][8][3])  //if the move entered by the player is a valid move then this function executes the mvoe
{
  int s1=f[1]-49,s2=f[0]-65,t1=t[1]-49,t2=t[0]-65;
  if(p[s1][s2][1]=='K'&&(t2>s2?t2-s2:s2-t2)>1)
  {
    strcpy(p[s1][t2>s2?t2-1:t2+1],p[s1][t2>s2?7:0]);
    strcpy(p[s1][t2>s2?7:0],"__");
  }
  strcpy(p[t1][t2],p[s1][s2]);
  strcpy(p[s1][s2],"__");
  if(p[t1][t2][1]=='P'&&(t1==0||t1==7))
    strcpy(p[t1][t2],t1==0?"BQ":"WQ");
}
//Now we come to the end of the chess part of the program
//TO SOLVE NUMERICALS IN FLUIDS
void hydraulic()

{ float a,r;
//Menu for questions
  cout << "This is a program to find terminal velocity and capillary rise or hydraulic machine power.";
  cout << "\nChoose the required number - ";
  cout << "\n1.Terminal velocity\n2.Capillary rise\n3.hydraulic machine";
  int choice;
  cin >> choice;
  while ( choice > 3 || choice < 1)
  { cout << "Wrong entry ! Please enter a correct choice.\n";
    cin >> choice;
  }
  switch(choice)
  { case 1 :  //Entry of values
	      float neeta,sigma,row,v;
	      cout << "\nEnter the radius ofball (m)- ";
	      cin >> a;
	       cout << "\nEnter the viscosity of medium - ";
	       cin >> neeta;
	       cout << "\nEnter the density of medium (kg/m3)- ";
	       cin >> sigma;
		cout << "\nEnter the density ofball - ";
		cin >> row;
		//calculation of velocity
	       v = 2*a*a*9.8*(row-sigma)/(9*neeta);
	       cout << "\nThe terminal velocity is - " << v << "m/s.";
	       break;

    case 2 :  float rho,t,theete,h;//Entry of values
    cout << "\nEnter the surface tension - ";
  cin >> t;
   cout << "\nEnter the angle of contact - ";
  cin >> theete;
   cout << "\nEnter the density of fluid - ";
  cin >> rho;
   cout << "\nEnter the radius of capillary- ";
  cin >> r;
 h = 2*t*cos(theete)/(rho*9.8*r);     //calculation of height
 cout << "\nThe height of capillary rise is " << h << "m.";
 break;
 case 3 : float f,g;   //to calculate pressure difference
 cout<<"This is to calculate force on another plane\ndue to the pressure applied by you.\n\n";
 cout<<"Enter the force applied : ";                     //entry of data
 cin>>f;
 cout<<"Enter the area of surface on which force is applied : ";
 cin>>a;
 cout<<"Enter the area of the surface on which load is present :";
 cin>>g;
 r=(f/a)*g;  //calculate force using appropriate formula
 cout<<"The force on the load is : "<<r<<" N";
 break;
 }
 getch();
 if (kbhit())
 menu();
}
//to calculate pressure difference between airplane wings
void pressdif()
{
  float p,a,v,f,m,s,d;                                   //declaration and entry of data
  cout<<"This is to calculate pressure difference above and below airplane\nfrom resultant force.\n\n";
  cout<<"Enter the resultant force on the airplane with -ve for downward: ";
  cin>>f;
  cout<<"Enter the mass of the plane in Kg: ";
  cin>>m;
  cout<<"Enter the area of the wing in m^2: ";
  cin>>a;
  cout<<"Enter the speed of the airplane in m/s: ";
  cin>>v;
  cout<<"Enter density of air or a negative number to use default density: ";
  cin>>s;
  d=s<0?1.2:s;//density
  f=f+(m*9.8);//force
  p=f/a;         //pressure
  cout<<"The pressure difference is : "<<p<<" pascal.\n";
  s=(2*p)/(d*v);           //to calculate speed
  cout<<"The speed difference between air in the upper and lower surfaces of thewing is "<<fabs(s)<<" Km/h";
  s=(s/v)*100;                                 //speed difference
  if (f<0)                                    //output
  cout<<"The speed of air on the upper surface of the wing is "<<fabs(s)<<"% less than that of the lower surface: ";
  else
  cout<<"The speed of air on the upper surface of the wing is "<<fabs(s)<<"% more than that of the lower surface: ";
  getch();
  if (kbhit())
  menu();
   }

void target() //to find target of bullet when coordinates of gun and bullet are given
{
  float speed, discmt, vang1, vang2, tanval;
  clrscr();
  char ch[20]="";
  int p1[3]={0,0,0},p2[3]= {0,0,0};
  int extract(char[],int []);
  cout<<"\t\t\t\t\tWELCOME"<<endl;
  cout<<"This is a program to find the angle of elevation of the gun needed to hit the\ntarget";
  cout<<"\nThe information required is the position of the target, the gun and\nthe velocity of the bullet";
  cout<<"\nUsing this the angle of elevation of the gun shall be given"<<endl;
  cout<<"Press Enter After reading this";
  getch();
  clrscr();
  //entry of data
  cout<<"Enter the position of the target in terms of xi+yj+zk: ";
  gets(ch);
  extract(ch,p1);
  cout<<"Enter the position of the gun in terms of xi+yj+zk: ";
  gets(ch);
  extract(ch,p2);
  cout << "Enter the speed of the bullet in m/s - \n";
  cin >> speed;
  for (int i=0;i<3;i++)
      p1[i]-=p2[i];

  clrscr();
  cout<<p1[0]<<p1[1] << p1[2];
  cout << "\n" << p2[0] << p2[1]  << p2[2];
  //find angle of elevation
  cout<<"The angle of the gun w.r.t the x-axis in x-y plane is: "<<atan(p1[1]/p1[0]);
  p1[1]=sqrt(p1[0]*p1[0]+p1[1]*p1[1]);
  double angoftar = atan(p1[2]/p1[1]),range;
  cout << angoftar;
  range = sqrt(p1[2]*p1[2] + p1[1] *p1[1]);
  cout<<"The range is "<<range<<"\n";//find parabolic range of bullet
  discmt=sqrt((p1[1]*p1[1])-(9.8*pow(p1[1],4)/pow(speed,4))+(2*p1[2]*9.8*pow(p1[1],2)/pow(speed,2)));
  tanval= fabs((-p1[1]+discmt)/(9.8*pow(p1[1],2)/pow(speed,2)));
  vang1=atan(tanval);
  tanval= fabs((-p1[1]-discmt)/(9.8*pow(p1[1],2)/pow(speed,2)));
  vang2=atan(tanval);
  cout<<"The angles wrt xz plane are: "<<vang1*(180/3.14)<<" and "<<vang2*(180/3.14);
  getch();
  if (kbhit())
  menu();

}
int extract(char ch[],int p[])  //to extract data in terms of a vector
{
  for(int sign=1,l=0;ch[l]!='\0';l++)          //check for i,j,k vectors
   if(!(ch[l]=='i' || ch[l]=='j' || ch[l]=='k' ||ch[l]=='+'|| ch[l]=='-' || ch[l]>47&&ch[l]<58))
    return 0;

  for(int i=0,k=0;ch[i]!='\0';i++)

     if (ch[i]=='i' || ch[i]=='j' ||ch[i]=='k')
     {	k++;
	p[k]=p[k]*sign;
     }
     else
	if (ch[i]=='+' || ch[i]=='-')
	  {  if (ch[i]=='-')
		sign=-1;
	     else
		sign=1;
	 continue;}

     else
	  if (ch[i]>=48  && ch[i]<=57)
	     p[k]=p[k]*10 + ch[i]-48;


 return 1;
}

void convert()    //to convert a number from any base to any other base
{
  clrscr();     //declaration
  int b1,b2,k=0,point;
  long int a;
  long double n1=0,place=1;
  char no1[20],no2[25];
  int chk(char[],int);
  int findPoint(char[]);
  renter:
  cout<<"\t\t\t\t\tWELCOME";
  //entry of bases
  cout<<"\n\nEnter the base of the orginal number:";
  cin>>b1;
  cout<<"Enter the base into which conversion is to take place:";
  cin>>b2;
  cout<<"Enter the number in base "<<b1<<":";
  gets(no1);
  if(!chk(no1,b1))//error message
  {
     clrscr();
     cout<<"Unable to identify symbols for the given base\nRENTER!!!\n";
     goto renter;
  }
  clrscr();
  if(b1==b2)
    cout<<"The number "<<no1<<" in base "<<b1<<" is "<<no1<<" in base "<<b2;
  else                           //conversion by repeated division of number
  {
   point=findPoint(no1);
   while(place*=b1,--point>0);
   while(n1+=(double)place*(no1[k]=='.'?(place*=b1),0:no1[k]>47&&no1[k]<59?no1[k]-48:no1[k]-55),k++,place/=1.0*b1,no1[k]!='\0');
   if(b2==10)
    cout<<"The number "<<no1<<" in base "<<b1<<" is "<<n1<<" in base "<<b2;
   else
   {
    k=0; a=(int)n1; n1-=a;
    while(no2[k++]=a%b2<10?48+a%b2:55+a%b2,a/=b2,a!=0);
    no2[k]=0;
    strrev(no2);  no2[k++]='.';     //reversing remainders
    while(n1*=b2,no2[k++]=n1<10?48+n1:55+n1,n1-=(int)n1,k<24);
    no2[k]=0;
    cout<<"The number "<<no1<<"in base "<<b1<<" is "<<no2<<" in base "<<b2;
    getch();
    if (kbhit())
    menu();
   }
  }
}
int chk(char ch[],int a)    //to check whether the entered number is using appropriate symbols. For eg in base 2 the number 1241 is invalid as the symbols 2 and 4 are not recognized
{
  for(int k=0,flag=1;ch[k]!='\0';k++)
    if(ch[k]=='.'&& flag?flag--,0:a<11?ch[k]>='0'&&ch[k]<'0'+a?0:1:ch[k]>='0'&&ch[k]<='9'||ch[k]>64&&ch[k]<55+a?0:1)
      return 0;
  return 1;
}
int findPoint(char ch[])      //to find decimal and seperate two parts of number
{
  for(int k=0;ch[k]!='\0';k++)
     if(ch[k]=='.')
	return --k;
  return --k;
}
//PERCENTAGE COMPOSITION
void percom()       //to find percentage composition of the elements in a given compound
{ struct element    //structure for element
 {char name[3];
  float mass;
  float atm;
  float atr,sr;
}e[8];              //declaration of elements and masses
char ele[28][3] = {"Al" ,"Ba" ,"B " ,"Br" ,"Cs" ,"Ca" ,"C" ,"Cl" ,"Cr" ,"Cu" ,"F" ,"H" ,"I"  ,"Fe" ,"Pb" ,"Mg" ,"Mn" ,"Ni" ,"N" ,"O" ,"P" ,"K"  ,"Si" ,"Na" ,"S" ,"Zn"  };
float emass[26] = { 27  , 137 , 10.8, 80  , 133 ,40   , 12 , 35.5, 52  , 63  , 19 , 1  ,126.9, 55  , 207 , 24  , 54  , 58.7, 14 , 16 , 31 , 39.1, 28  , 23  , 32 , 65.3 };

  clrscr();
  int flag ;
  cout << "This is a program to find the percentage composition of elements in a compound.\n";
  cout << "Enter the number of elements in the compound - ";
  int n;
  cin>> n;//entry of data
  for (int i = 0 ; i < n; i++)
  { cout << "\nEnter the symbol of element (In proper case) " << i+1 <<"- \n";
    cin >> e[i].name;
    cout << "\nEnter the number of atoms of element " << i+1 <<"- \n";
    cin >> e[i].atm;
    flag = 0;
    for(int j = 0 ; j <28 ; j++)
    if(strcmp(ele[j],e[i].name) == 0 )
    {flag = 1;
      e[i].mass = emass[j];
    }
    if(flag == 0)
    {cout << "\nEnter the atomic mass of element " << i+1 <<"- \n";
    cin >> e[i].mass;}
  }

  float total = 0;
  for (i = 0 ; i < n ; i++)
  total += (e[i].mass*e[i].atm); //total mass of compound
  for ( i = 0 ; i < n ; i++)
  { cout << "The percentage composition of " << e[i].name << " is "
	 <<  (e[i].mass*e[i].atm*100)/total<< ".\n";
  }
  getch();
  if (kbhit())
  menu();
 }
//PERIODIC TABLE
void element(int,int);
int i,as,g;

void frame()    //To output frame of details for each element
    {
    gotoxy(19,9);
    cout<<"É";
    for(i=20;i<=60;i++)
     {
     gotoxy(i,9);
     cout<<"Í";
     }
    cout<<"»";
    gotoxy(19,16);
    cout<<"È";
    for(i=20;i<=60;i++)
     {
     gotoxy(i,16);
     cout<<"Í";
     }
    cout<<"¼";
    for(i=10;i<=15;i++)
     {
     gotoxy(19,i);
     cout<<"º";
     }
    for(i=10;i<=15;i++)
     {
     gotoxy(61,i);
     cout<<"º";
     }
    gotoxy(5,24);
    cout<<"Press Esc to Exit";
    }

void displayper()   //display original periodic table
{
 gotoxy(33,2);
 cout<<"PERIODIC TABLE";
 gotoxy(1,1);
 cout<<"É";
 for(i=2;i<=79;i++)
  {
  gotoxy(i,1);
  cout<<"Í";
  }
 cout<<"»";
 for(i=2;i<=23;i++)
  {
  gotoxy(80,i);
  cout<<"º";
  }
 gotoxy(80,24);
 cout<<"¼";
 for(i=2;i<=11;i++)
  {
  gotoxy(i,24);
  cout<<"Í";
  }
 gotoxy(1,24);
 cout<<"È";
 for(i=2;i<=23;i++)
  {
  gotoxy(1,i);
  cout<<"º";
  }
 gotoxy(12,4);
 cout<<"Ú"<<"Ä"<<"Ä"<<"¿";
 gotoxy(63,4);
 cout<<"Ú"<<"Ä"<<"Ä"<<"¿";
 gotoxy(12,5);cout<<"³";
 gotoxy(15,5);cout<<"³";
 gotoxy(63,5);cout<<"³";
 gotoxy(66,5);cout<<"³";
 gotoxy(12,6);cout<<"Ã"<<"Ä"<<"Ä"<<"´";
 gotoxy(48,6);cout<<"Ú";
 for(i=51;i<=60;i++)
  if(i%3==0)
   {
   gotoxy(i,6);
   cout<<char(194);
   }
 for(i=48;i<=66;i++)
  if(i%3!=0)
   {
   gotoxy(i,6);
   cout<<"Ä";
   }
 gotoxy(63,6);
 cout<<"Å";
 for(i=48;i<=66;i++)
  if(i%3==0)
   {
   gotoxy(i,7);
   cout<<"³";
   }
 gotoxy(12,7);cout<<"³";
 gotoxy(12,8);cout<<"Ã"<<"Ä"<<"Ä"<<"´";
 gotoxy(12,9);cout<<"³";
 gotoxy(15,9);cout<<"³";
 gotoxy(15,6);cout<<"Å"<<"Ä"<<"Ä"<<"¿";
 gotoxy(15,8);cout<<"Å"<<"Ä"<<"Ä"<<"´";
 gotoxy(18,7);cout<<"³";
 gotoxy(18,9);cout<<"³";
 gotoxy(48,8);cout<<"Ã";
 for(i=51;i<=63;i++)
  if(i%3==0)
   {
   gotoxy(i,8);
   cout<<"Å";
   }
 for(i=48;i<=66;i++)
  if(i%3!=0)
   {
   gotoxy(i,8);
   cout<<"Ä";
   }
 for(i=48;i<=66;i++)
  if(i%3==0)
   {
   gotoxy(i,9);
   cout<<"³";
   }
 gotoxy(12,10);
 cout<<"Ã";gotoxy(15,10);
 cout<<"Å";
 for(i=13;i<=66;i++)
  if(i%3!=0)
     { 	gotoxy(i,10);
	cout<<"Ä";
      }for(i=18;i<=45;i++)
  if(i%3==0)
     { 	gotoxy(i,10);
	cout<<char(194);
      }for(i=46;i<=63;i++)
  if(i%3==0)
     { 	gotoxy(i,10);
	cout<<"Å";
      }gotoxy(18,10);
cout<<"Å";
for(i=12;i<=66;i++)
 if(i%3==0)
  for(as=10;as<=16;as++)
   if(as%2!=0)
    {  gotoxy(i,as);
      cout<<"³";
     }for(i=15;i<=63;i++)
 if(i%3==0)
  for(as=12;as<=14;as++)
   if(as%2==0)
    { gotoxy(i,as);
      cout<<"Å";
     }for(i=15;i<=63;i++)
 if(i%3==0)
  for(as=12;as<=14;as++)
   if(as%2==0)
    { gotoxy(i,as);
      cout<<"Å";
     }for(i=12;i<=66;i++)
 if(i%3==0)
  for(as=12;as<=66;as++)
   if(as%2==0)
    { gotoxy(i,as);
      cout<<"Ä";
     }for(i=15;i<=42;i++)
 if(i%3==0)
  {gotoxy(i,16);
    cout<<"Å";
   }for(i=45;i<=63;i++)
 if(i%3==0)
  { gotoxy(i,16);
    cout<<"Á";
   }for(i=12;i<=42;i++)
 if(i%3==0)
  {  gotoxy(i,17);
    cout<<"³";
   } gotoxy(12,18);
cout<<"À";
for(i=12;i<=42;i++)
 if(i%3!=0)
  {  gotoxy(i,18);
   cout<<"Ä";
  }  cout<<"Ù";
for(i=15;i<=40;i++)
 if(i%3==0)
  {  gotoxy(i,18);
   cout<<"Á";
   } for(i=6;i<=16;i++)
 if(i%2==0)
  {   gotoxy(12,i);
   cout<<"Ã";
  } for(i=6;i<=14;i++)
 if(i%2==0)
  { gotoxy(66,i);
   cout<<"´";
   }gotoxy(66,16);
cout<<"Ù";
gotoxy(12,20);
cout<<"Ú";
for(i=13;i<=23;i++)
 {gotoxy(i,20);
   cout<<"Ä";
 }for(i=24;i<=63;i++)
 if(i%3==0)
  {gotoxy(i,20);
   cout<<char(194);
  }for(i=24;i<=66;i++)
 if(i%3!=0)
  { gotoxy(i,20);
   cout<<"Ä";
   cout<<"¿";
    gotoxy(12,21);
cout<<"³";
 }
 for(i=24;i<=66;i++)
{ if(i%3==0)
  { gotoxy(i,21);
  // cout<<char(194);
  cout<<"³";
   }
}
  for(i=24;i<=66;i++)
{ if(i%3==0)
  { gotoxy(i,20);
   cout<<"Ä";
  }cout<<"¿";
  gotoxy(i,21);
cout<<"³";
}
for(i=24;i<=66;i++)
{ if(i%3==0)
  {gotoxy(i,21);
   cout<<"³";
  }gotoxy(i,22);
cout<<"Ã";
}
for(i=13;i<=23;i++)
  { gotoxy(i,22);
   cout<<"Ä";
  }
  for(i=24;i<=63;i++)
{ if(i%3==0)
  { gotoxy(i,22);
   cout<<"Å";
  }
  }
  for(i=24;i<=66;i++)
{ if(i%3!=0)
  {  gotoxy(i,22);
   cout<<"Ä";
  }  cout<<"´";
      gotoxy(12,23);
cout<<"³";}
for(i=24;i<=66;i++)
  if(i%3==0)
   {  gotoxy(i,23);
     cout<<"³";
  }   gotoxy(12,24);
cout<<"À";
for(i=13;i<=23;i++)
  {    gotoxy(i,24);
    cout<<"À";
  }    for(i=24;i<=63;i++)
 if(i%3==0)
   {  gotoxy(i,24);
     cout<<"Á";
   } for(i=24;i<=66;i++)
  if(i%3!=0)
    { gotoxy(i,24);
      cout<<"Ä";
    }cout<<"Ù";
gotoxy(15,25);
cout<<"ARROWS TO SCROLL.ENTER TO SELECT.ESC TO EXIT.";
gotoxy(13,5);
cout<<"H";
gotoxy(13,7);
cout<<"Li";
gotoxy(13,9);
cout<<"Na";
gotoxy(13,11);
cout<<"K";

gotoxy(15,7); cout<<"³";
for (i=13;i<66;i++)
 {
 gotoxy(i,14);cout<<"Ä";
 gotoxy(i,12);cout<<"Ä";
 gotoxy(i,16);cout<<"Ä";
 if(i>42) {gotoxy(i,18);cout<<"  ";}
 if(i%3==0)
  {
  gotoxy(i,14);cout<<"Å";
  gotoxy(i,12);cout<<"Å";
  gotoxy(i,16);cout<<"Å";
  if(i>42) gotoxy(i,16);cout<<"Á";
  }
 }

for (i=23;i<66;i++)
 {
 gotoxy(i,20);cout<<"Ä";
 gotoxy(i,22);cout<<"Ä";
 gotoxy(i-11,24);cout<<"Ä";
 gotoxy(i,24);cout<<"Ä";
 if(i%3==0)
  {
  gotoxy(i,20);cout<<"Â";
  gotoxy(i,22);cout<<"Å";
  gotoxy(i,24);cout<<"Á";
  }
 }
 for (i=23;i<66;i++)
 {
 if(i%3==0)
  if(i>10)
   {
   gotoxy(i,24);
   cout<<"Á";
   }
 }

for(i=67;i<=80;i++) {gotoxy(i,24);cout<<"Í";}
for(i=0;i<=10;i++) {gotoxy(i,25);cout<<" ";}
for(i=19;i<=47;i++) {gotoxy(i,9);cout<<" ";}
for(i=2;i<=5;i++) {gotoxy(61,i);cout<<" ";}

gotoxy(12,22);cout<<"Ã";
gotoxy(66,20);cout<<"¿ ";
gotoxy(12,24);cout<<"ÀÄ";
gotoxy(80,24);cout<<"¼";
gotoxy(59,9);cout<<" ";
gotoxy(56,9);cout<<" ";


gotoxy(13,13);
cout<<"Rb";
gotoxy(13,15);
cout<<"Cs";
gotoxy(13,17);
cout<<"Fr";
gotoxy(16,7);
cout<<"Be";
gotoxy(16,9);
cout<<"Mg";
gotoxy(16,11);
cout<<"Ca";
gotoxy(16,13);
cout<<"Sr";
gotoxy(16,15);
cout<<"Ba";
gotoxy(16,17);
cout<<"Ra";
gotoxy(19,11);
cout<<"Sc";
gotoxy(19,13);
cout<<"Y";
gotoxy(19,15);
cout<<"La";
gotoxy(19,17);
cout<<"Ac";
gotoxy(22,11);
cout<<"Ti";
gotoxy(22,13);
cout<<"Zr";
gotoxy(22,15);
cout<<"Hf";
gotoxy(22,17);
cout<<"Rf";
gotoxy(25,11);
cout<<"V";
gotoxy(25,13);
cout<<"Nb";
gotoxy(25,15);
cout<<"Ta";
gotoxy(25,17);
cout<<"Ha";
gotoxy(28,11);
cout<<"Cr";
gotoxy(28,13);
cout<<"Mo";
gotoxy(28,15);
cout<<"W";
gotoxy(28,17);
cout<<"Un";
gotoxy(31,11);
cout<<"Mn";
gotoxy(31,13);
cout<<"Tc";
gotoxy(31,15);
cout<<"Re";
gotoxy(31,17);
cout<<"Ns";
gotoxy(34,11);
cout<<"Fe";
gotoxy(34,13);
cout<<"Ru";
gotoxy(34,15);
cout<<"Os";
gotoxy(34,17);
cout<<"Hs";
gotoxy(37,11);
cout<<"Co";
gotoxy(37,13);
cout<<"Rh";
gotoxy(37,15);
cout<<"Ir";
gotoxy(37,17);
cout<<"Mt";
gotoxy(40,11);
cout<<"Ni";
gotoxy(40,13);
cout<<"Pd";
gotoxy(40,15);
cout<<"Pt";
gotoxy(40,17);
cout<<"Uu";
gotoxy(43,11);
cout<<"Cu";
gotoxy(43,13);
cout<<"Ag";
gotoxy(43,15);
cout<<"Au";
gotoxy(46,11);
cout<<"Zn";
gotoxy(46,13);
cout<<"Cd";
gotoxy(46,15);
cout<<"Hg";
gotoxy(49,7);
cout<<"B";
gotoxy(49,9);
cout<<"Al";
gotoxy(49,11);
cout<<"Ga";
gotoxy(49,13);
cout<<"In";
gotoxy(49,15);
cout<<"Tl";
gotoxy(52,7);
cout<<"C";
gotoxy(52,9);
cout<<"Si";
gotoxy(52,11);
cout<<"Ge";
gotoxy(52,13);
cout<<"Sn";
gotoxy(52,15);
cout<<"Pb";
gotoxy(55,7);
cout<<"N";
gotoxy(55,9);
cout<<"P";
gotoxy(55,11);
cout<<"As";
gotoxy(55,13);
cout<<"Sb";
gotoxy(55,15);
cout<<"Bi";
gotoxy(58,7);
cout<<"O";
gotoxy(58,9);
cout<<"S";
gotoxy(58,11);
cout<<"Se";
gotoxy(58,13);
cout<<"Te";
gotoxy(58,15);
cout<<"Po";
gotoxy(61,7);
cout<<"F";
gotoxy(61,9);
cout<<"Cl";
gotoxy(61,11);
cout<<"Br";
gotoxy(61,13);
cout<<"I";
gotoxy(61,15);
cout<<"At";
gotoxy(64,5);
cout<<"He";
gotoxy(64,7);
cout<<"Ne";
gotoxy(64,9);
cout<<"Ar";
gotoxy(64,11);
cout<<"Kr";
gotoxy(64,13);
cout<<"Xe";
gotoxy(64,15);
cout<<"Rn";
gotoxy(13,21);
cout<<"Lanthanides";
gotoxy(25,21);
cout<<"Ce";
gotoxy(28,21);
cout<<"Pr";
gotoxy(31,21);
cout<<"Nd";
gotoxy(34,21);
cout<<"Pm";
gotoxy(37,21);
cout<<"Sm";
gotoxy(40,21);
cout<<"Eu";
gotoxy(43,21);
cout<<"Gd";
gotoxy(46,21);
cout<<"Tb";
gotoxy(49,21);
cout<<"Dy";
gotoxy(52,21);
cout<<"Ho";
gotoxy(55,21);
cout<<"Er";
gotoxy(58,21);
cout<<"Tm";
gotoxy(61,21);
cout<<"Yb";
gotoxy(64,21);
cout<<"Lu";
gotoxy(13,23);
cout<<"Actinides";
gotoxy(25,23);
cout<<"Th";
gotoxy(28,23);
cout<<"Pa";
gotoxy(31,23);
cout<<"U";
gotoxy(34,23);
cout<<"Np";
gotoxy(37,23);
cout<<"Pu";
gotoxy(40,23);
cout<<"Am";
gotoxy(43,23);
cout<<"Cm";
gotoxy(46,23);
cout<<"Bk";
gotoxy(49,23);
cout<<"Cf";
gotoxy(52,23);
cout<<"Ea";
gotoxy(55,23);
cout<<"Fm";
gotoxy(58,23);
cout<<"Md";
gotoxy(61,23);
cout<<"No";
gotoxy(64,23);
cout<<"Lr";
gotoxy(2,2);
i=2;as=2;
gotoxy(i,as);

 do
  {
  g=getch();
  if(g==80)
   {
   if(as==23) as=1;
   gotoxy(i,++as);
   }
  else if(g==77)
   {
   if(i==79) i=1;
   gotoxy(++i,as);
   }
  else if(g==75)
   {
   if(i==2) i=80;
   gotoxy(--i,as);
   }
  else if(g==72)
   {
   if(as==2)
   as=24;
   gotoxy(i,--as);
   }
  if(g==13)
   element(i,as);
  }while(g!=27);
}

void periodic()
 {
 clrscr();         //output details
 int gdriver=DETECT,gmode,errorcode;
 initgraph(&gdriver,&gmode,"h:\tc\bin");
 errorcode=graphresult();
 if(errorcode!=grOk)
  {
  cout<<grapherrormsg(errorcode)<<endl;
  getch();
  }
 for (int i=0;i<7;i++)
  {
  delay(150);
  clrscr();
  settextstyle(5,0,i);
  outtextxy(110,75,"    WELCOME");
  outtextxy(155,150,"     TO");
  outtextxy(100,225," PERIODIC TABLE");
  }
 settextstyle(8,0,1);
 outtextxy(200,450,"Press Any Key To Continue ...");
 getch();
 closegraph();
 displayper();
 }

void element(int i,int as)        //entry for each elements data in column
 {
 if(((i==13)||(i==14))&&(as==5))
     {
     clrscr();
      frame();
      gotoxy(21,10);
      cout<<"Atomic No                :1"<<"\n";
      gotoxy(21,11);
      cout<<"Symbol                   :H"<<"\n";
      gotoxy(21,12);
      cout<<"Name                     :Hydrogen"<<"\n";
      gotoxy(21,13);
      cout<<"Atomic Radius            :0.37"<<"\n";
      gotoxy(21,15);
      cout<<"Electronegetivity        :2.20"<<"\n";
      gotoxy(30,20);
      cout<<"Press Any Key To Return.....";
     }

 else if(((i==64)||(i==65))&&(as==5))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :2"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :He"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Helium"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.2"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :24.58"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :------"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(as==7))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :3"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Li"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Lithium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :1.23"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.97"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==16)||(i==17))&&(as==7))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :4"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Be"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Berryllium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :0.89"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :1.47"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==49)||(i==50))&&(as==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :5"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :B"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Boron"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.80"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :8.3"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.01"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==52)||(i==53))&&(as==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :6"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :C"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Carbon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.77"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :11.26"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.50"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==55)||(i==56))&&(as==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :7"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :N"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Nitrogen"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.74"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :14.54"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :3.07"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==58)||(i==59))&&(as==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :8"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :O"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Oxygen"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.74"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :13.61"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :3.50"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==61)||(i==62))&&(as==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :9"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :F"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Fluorine"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.72"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :17.42"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :4.10"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==64)||(i==65))&&(as==7))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :10"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Ne"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Neon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.60"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :21.56"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :-"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(as==9))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :11"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Na"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Sodium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :1.57"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :1.01"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==16)||(i==17))&&(as==9))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :12"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Mg"<<"\n";
	gotoxy(21,12);
	cout<<"Name       	        :Magnesium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :1.36"<<"\n";
	gotoxy(21,15);
	cout<<"Electonegativity         :1.23"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return.....   ";
     }

 else if(((i==49)||(i==50))&&(as==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :13"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Al"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Aluminium"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.25"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :6.0"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :1.47"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==52)||(i==53))&&(as==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :14"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Si"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Silicon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.17"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :8.15"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :1.74"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==55)||(i==56))&&(as==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :15"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :P"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Phosphorus"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.10"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :11.0"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.06"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==58)||(i==59))&&(as==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :16"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :S"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Sulphur"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.04"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :10.36"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.44"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}



 else  if(((i==61)||(i==62))&&(as==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :17"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Cl"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Chlorine"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :0.99"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :13.0"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :2.83"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}



 else if(((i==64)||(i==65))&&(as==9))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No:               :18"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                   :Ar"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name                     :Argon"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius            :1.90"<<"\n";
	 gotoxy(21,14);
	 cout<<"1st Ionisation potential :15.76"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electronegativity        :-"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(as==11))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :19"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :K"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Potassium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :2.03"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.91"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==16)||(i==17))&&(as==11))
	{
	 clrscr();
	 frame();
	 gotoxy(21,10);
	 cout<<"Atomic No               :20"<<"\n";
	 gotoxy(21,11);
	 cout<<"Symbol                  :ca"<<"\n";
	 gotoxy(21,12);
	 cout<<"Name       	        :Calcium"<<"\n";
	 gotoxy(21,13);
	 cout<<"Atomic Radius           :1.74"<<"\n";
	 gotoxy(21,15);
	 cout<<"Electonegativity            :1.04"<<"\n";
	 gotoxy(30,20);
	 cout<<"Press Any Key To Return.....   ";
    }

 else if(((i==13)||(i==14))&&(as==13))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :37"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Rb"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Rubidium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :2.16"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.89"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(as==15))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :55"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Cs"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Cesium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :2.35"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.86"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==13)||(i==14))&&(as==17))
       {
	clrscr();
	frame();
	gotoxy(21,10);
	cout<<"Atomic No:               :87"<<"\n";
	gotoxy(21,11);
	cout<<"Symbol                   :Fr"<<"\n";
	gotoxy(21,12);
	cout<<"Name                     :Francium"<<"\n";
	gotoxy(21,13);
	cout<<"Atomic Radius            :-"<<"\n";
	gotoxy(21,15);
	cout<<"Electronegativity        :0.86"<<"\n";
	gotoxy(30,20);
	cout<<"Press Any Key To Return......";
	}

 else if(((i==64)||(i==65))&&(as==23))
      {
       clrscr();
       frame();
       gotoxy(21,10);
       cout<<"Atomic No.              :103"<<"\n";
       gotoxy(21,11);
       cout<<"Symbol                  :Lr"<<"\n";
       gotoxy(21,12);
       cout<<"Name                    :Lawencium"<<" \n";
       gotoxy(21,13);
       cout<<"Atomic Radius           :---"<<"\n";
       gotoxy(21,14);
       cout<<"1st Ionisation Potential:---"<<"\n";
       gotoxy(21,15);
       cout<<"Electonegativity        :1.2"<<"\n";
       gotoxy(30,20);
       cout<<"Press Any Key To Return.....";
      }
char key;
key=getch();
if(key==27) menu();   //entry for escape
else displayper();
}
//QUIZ 1
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
if (kbhit())
menu();
}
//QUIZ 2
void quiz2()
{
clrscr();
long double amount;
amount=100;
int total=0;
int option,l,i,n,a[10],b[10],c[10],d[10],e[10],f[10],g[10];
//Entry of data
char ch,name[20],place[25],e_mail[25];
cout<<"                WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
getch();
clrscr();
cout<<"                 WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\nBefore starting we would like to know some information about you-";
cout<<"\n";
cout<<"\nName:";
cin.getline(name,25);
cout<<"\nPlace:";
cin.getline(place,25);
cout<<"\nYour email id:";
cin.getline(e_mail,25);
getch();
clrscr();      //details of quiz
cout<<"                     WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<amount<<" in your hand";
cout<<"\nAnd it depends on how you play to get this money";
cout<<"\nHere are the rules:";
cout<<"\n1)you will be having 7 questions";
cout<<"\n2)Questions one to three you will have 4 options";
cout<<"\n3)questions four to six you will have 3 options";
cout<<"\n4)questions number seven will have 2 options and this decides your fate";
cout<<"\n5)you are suppposed to keep keep particular amounts in the the options as you \nbelive that is right";
cout<<"\n6)from questions one to three you are allowed either to keep the amount in one\n option or in three of them";
cout<<"\n7)you are allowed to change the amount only once through out this game just \nlike a life line";
cout<<"\n";
cout<<"\nPress any key to continue";
getch();
clrscr();
cout<<"                     WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<amount<<" in your hand";
cout<<"\nyour first question which will be having 4 option";
cout<<"\n";
cout<<"\nWho was the first president of India";
cout<<"\n*********************             *********************";
cout<<"\n*  OPTION 1         *             *  OPTION 2         *";
cout<<"\n*Dr. Rajendra Prasad*             *Dr.Zahir Hussain   *";
cout<<"\n*********************             *********************";
cout<<"\n*********************             *********************";
cout<<"\n*  OPTION 3         *             *  OPTION 2         *";
cout<<"\n*Jawaharlal Nehru   *             *Rajiv Gandhi       *";
cout<<"\n*********************             *********************";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 3 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;                    //questions and choice of options as whole amount on single choice or multiple choices
if(option==1)
{
n=4;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount\n should be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and\n the total amount is to be kept is "<<amount<<"::";
cin>>a[i];
amount=amount-a[i];
}
total=total+a[1];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>a[i];
if(a[i]==1)
{
total=100;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option 1 Dr.rajendra Prasad";
//answer given and correct answer
if(a[1]>1||a[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";exit(0);
}
//amount of money left
if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();
if(a[1]>0||a[i]==1)
{
amount=total;
clrscr();
//similar code for other questions
cout<<"                     WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour second question which will be having 4 option";
cout<<"\n";
cout<<"\nWhich is the capital of Manipur";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    Shillong       *             *    Bhopal         *";
cout<<"\n*********************             *********************";
cout<<"\n*********************             *********************";
cout<<"\n*   OPTION 3        *             *    OPTION 4       *";
cout<<"\n*   Imphal          *             *   Dedradun        *";
cout<<"\n*********************             *********************";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 3 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=4;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount\n should be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>b[i];
amount=amount-b[i];
}
total=amount+b[3];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>b[i];
if(b[i]==3)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option  (3) Imphal";
if(b[3]>1||b[i]==3)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong"; exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}

//similar code for other questions
if(b[3]>10||b[i]==3)
{
amount=total;
clrscr();
cout<<"                    WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour third question which will be having 4 option";
cout<<"\n";
cout<<"\nWorld climate is threatened by the increase in the concentration of:";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    Oxygen         *             *    Nitrogen       *";
cout<<"\n*********************             *********************";
cout<<"\n*********************             *********************";
cout<<"\n*   OPTION 3        *             *    OPTION 4       *";
cout<<"\n*   Hydrogen        *             *   Carbondioxide   *";
cout<<"\n*********************             *********************";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 3 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option";
cin>>option;
if(option==1)
{
n=4;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount should\n be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>c[i];
amount=amount-c[i];
}
total=amount+c[4];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>c[i];
if(c[i]==4)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option  (4)Carbondioxide";
if(c[4]>1||c[i]==4)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";    exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}

if(c[4]>1||c[i]==4)
{
amount=total;
clrscr();
cout<<"                     WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour fourth question which will be having 3 option";
cout<<"\n";
cout<<"\nWho was the founder of the Indian NAtional Congress";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    A O Hume       *             *  Mahatma Gandhi   *";
cout<<"\n*********************             *********************";
cout<<"\n*********************         ";
cout<<"\n*   OPTION 3        *         ";
cout<<"\n*   W C Banerjee    *          ";
cout<<"\n*********************            " ;
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 2 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option";
cin>>option;
if(option==1)
{
n=3;
cout<<" you  are allowed to put the amount in only three options and the option which you believe is wrong is to be kept blank and the sum of their amount \nshould be"<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be kept is "<<amount<<":";
cin>>d[i];
amount=amount-d[i];
}
total=amount+d[1];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>d[i];
if(d[i]==1)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option  (1)A O HUME";
if(d[1]>1||d[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong"; exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}
if(d[1]>1||d[i]==1)
{
amount=total;
clrscr();
cout<<"                     WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour fith question which will be having 3 option";
cout<<"\n";
cout<<"\nIn Tibet the Brahmaputra is know as";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*    Brahmaputra    *             *    Tsangpo        *";
cout<<"\n*********************             *********************";
cout<<"\n*********************";
cout<<"\n*   OPTION 3        * ";
cout<<"\n*    Dihang         * ";
cout<<"\n********************* ";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 2 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=3;
cout<<" you  are allowed to put the amount in only two options and the option which you believe is wrong is to be kept blank and the sum of their amount \nshould be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>e[i];
amount=amount-e[i];
}
total=amount+e[2];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>e[i];
if(e[i]==2)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option (2)Tsangpo";
if(e[2]>1||e[i]==2)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}
if(e[2]>1||e[i]==2)
{
amount=total;
clrscr();
cout<<"                   WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour sixth question which will be having 3 option";
cout<<"\n";
cout<<"\nA person elected as a member of the HOUSE OF THE PEOPLE(Lok Sabha) must be";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*     25 years      *             *      30 years     *";
cout<<"\n*********************             *********************";
cout<<"\n*********************";
cout<<"\n*   OPTION 3        * ";
cout<<"\n*    35 years       * ";
cout<<"\n********************* ";
cout<<"\n ";
cout<<"\naccording to rule number 6 you are allowed to keep the amount in either 3 options or the whole amount in one option";
cout<<"\enter the desired option";
cout<<"\n1)keeping the amount in 2 option";
cout<<"\n2)keeping the whole amount in an single option";
cout<<"\nenter the option::";
cin>>option;
if(option==1)
{
n=3;
cout<<" you  are allowed to put the amount in only two options and the option which you believe is wrong is to be kept blank and the sum of their amount\n should be "<<amount;
for(i=1;i<=n;++i)
{
cout<<"\nEnter the amount "<<name<<" which you desired to keep in the option no "<<i <<"and \nthe total amount is to be dkept is "<<amount<<":";
cin>>f[i];
amount=amount-f[i];
}
total=amount+f[1];
}
if(option==2)
{
cout<<"\nYou have decided to keep the whole amount in a single option";
cout<<"\nIn which option have you decided to keep the whole amount::";
cin>>f[i];
if(f[i]==1)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option 1 25 years";
if(f[1]>1||f[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong";exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();}
if(f[1]>1||f[i]==1)
{
amount=total;
clrscr();
cout<<"                     WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n"<<name<<" you have Rs."<<total<<" in your hand";
cout<<"\nyour seventh and last question which will be having only  option";
cout<<"\n";
cout<<"\nMorning is related to 'DAWN' in the same way 'NIGHT'is related to ";
cout<<"\n*********************             *********************";
cout<<"\n*    OPTION 1       *             *    OPTION 2       *";
cout<<"\n*      DUSK         *             *    MIDNIGHT       *";
cout<<"\n*********************             *********************";
cout<<"\n";
cout<<"\nAs it is the last question you could only use one of the options above";

cout<<"\nIn which option have you decided to keep the whole amount";
cin>>g[i];
if(g[i]==1)
{
total;
}
}
cout<<"\n Its time for top or drop";
cout<<"\nthe right answer is "<<"Option 1 Dusk";
if(g[1]>1||g[i]==1)
{
cout<<"\nYOU are right";
cout<<"\nand your account is left with amount "<<total;
}
else
{cout<<"\nanswer is wrong"; exit(0);
}

if(total==0)
{
cout<<"you are out of the game since you have amount as Rs.0";
cout<<"\ndont worry keep on playing";
}
if(total<0||total>100)
{cout<<"\nyou have enter the amount incorrectely"; }
getch();
if(g[1]>1||g[i]==1)
{
amount=total;
//total earning and score
clrscr();
cout<<"                    WELCOME TO QUIZ !! ARE YOU READY? ";
cout<<"\n                    *-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"CONGRATS!!!!!!!!!!!!!!!!!!!! "<<name<<" you have won "<<amount;
cout<<name<<" from "<<place<<" have won Rs."<<amount <<" which will be sent via your emailid "<<e_mail<< "later ";
}
getch();
if (kbhit())
menu();}


//WORK DONE IN THERMODYNAMIC PROCESSES
void workdone()
{ clrscr();                           //menu for types of processes
  cout << "This is a program to calculate the work done in a thermodynamic process -\nChoose the process- \n"
       <<"1.isothermal reversible process \n2.isothermal irreversible process \n3.reversible adiabatic process \n4.irreversible addiabatic process."
       << "\nLet state 2 be final state and state 1 be initial state.\nThen, choose type of work - ";
  int n;                                                   //entry of choice of process
  cin >> n;
  while ( n > 4 || n < 1)
  { cout << "\nInvalid entry. Please enter a correct choice.\n";
    cin >> n;
  }
  int no;
  float p1,p2,pex,work,t1,t2,gam;
  //entry of data needed
  cout << "\nEnter the number of moles - ";
  cin >> no;
  cout << "\nEnter the final pressure p2 (Pa)- ";
  cin >> p2;
  cout << "\nEnter the initial prssure p1 (Pa)- ";
  cin >> p1;
  cout << "\nEnter the external pressure (Pa)- ";
  cin >> pex;
  cout << "\nEnter the initial temperature t1 (K)- ";
  cin >> t1;
  switch(n)             //calculation of work done
  { case 1:  work = -no*8.314*t1*log10(p2/p1)*2.303;
	     break;
    case 2:  work = -pex*no*8.314*t1*(1/p2 - 1/p1);
	     break;

    case 3:  cout << "\nEnter the final temperature (K)- ";
	     cin >> t2;
	      cout << "\nEnter the value of gamma (Cp/Cv) - ";
	      cin >> gam;
	     work = -no*8.314*(t2-t1)/(gam-1);
	     break;

     case 4:  cout << "\nEnter the final temperature (K)- ";
	     cin >> t2;
	     work = -no*8.314*pex*(t2/p2 - t1/p1);
	     break;

 }

 cout << "The work done in the process is - " << work << "Joules.";
 getch();
 if (kbhit())
 menu();
 }
 //recursive function to find a particular number in the triangle based upon its position. PS uses inductive definition of a factorial
 int pasca(int n,int m)
{
 if(n==1||n==m||m==1)
 return 1;
 return pasca(n-1,m-1)+pasca(n-1,m);
}
 //pascal triangle
 void pascala()
 { clrscr();
   cout << "\t\t\t\tWELCOME\nThis is a program to print the pascal's triangle for help in binomial theorem.\nPlease enter the number of lines to be displayed-\n";
   int n;
   cin >> n;
   cout << "\n";     //entry of number of lines
   for (int i = 1; i < n+1 ; i++)
   { cout << "\n";
     for (int j = 1; j < i+1 ; j++)
     cout << pasca(i,j) << "\t";
   }                                           //print triangle
  cout << "\nThanks for using ! Press any key to exit.";
  getch();
  if (kbhit())
  menu();
 }

 //ideal gas equation
 void idealgas()
 { clrscr();    //to calculate unknown value in ideal gas equation
   cout << "\t\t\t\tWELCOME\nThis is a program for the ideal gas equation.\nPlease choose the quantity to be found - \n";
   cout << "1.Pressure\n2.Volume\n3.Number of moles\n4.Temperature \n";//choice of unknown quantity
   int n;
   float p,v,d,t;
   cin >> n;
   while (n <1 || n>4)
   { cout << "\nWrong entry! Please enter choice again - \n";
    cin >> n;
   }
   switch (n) //entry of data and calculation of unknown value
   { case 1 : cout << "\nPlease enter the volume in litres - ";
	      cin >> v;
	      cout << "\nPlease enter the number of moles - ";
	      cin >> d;
	      cout << "\nPlease enter the temperature in kelvin - ";
	      cin >> t;
	      p = d*t*0.0821/v;
	      cout << "The pressure of the ideal gas is - " << p << " atm.";
	      break;

    case 2 : cout << "\nPlease enter the pressure in atm - ";
	      cin >> v;
	      cout << "\nPlease enter the number of moles - ";
	      cin >> d;
	      cout << "\nPlease enter the temperature in kelvin - ";
	      cin >> t;
	      p = d*t*0.0821/v;
	      cout << "The volume of the ideal gas is - " << p << " litres.";
	      break;

     case 3 : cout << "\nPlease enter the volume in litres - ";
	      cin >> v;
	      cout << "\nPlease enter pressure of gas in atm - ";
	      cin >> p;
	      cout << "\nPlease enter the temperature in kelvin - ";
	      cin >> t;
	      d = p*v/(t*0.0821);
	      cout << "The number of moles of the ideal gas is - " << d << ".";
	      break;

     case 4 : cout << "\nPlease enter the volume in litres - ";
	      cin >> v;
	      cout << "\nPlease enter the number of moles - ";
	      cin >> d;
	      cout << "\nPlease enter the pressure of the gas in atm - ";
	      cin >> p;
	      t = p*v/(d*0.0821);
	      cout << "The temperature of the ideal gas is - " << t << " Kelvin.";
	      break;

   }
   cout << "\nThanks for using. Press any key to exit.";
   getch();
   if (kbhit())
   menu();
}

//wave eq
void waveeq()
{
 clrscr();
 void substring(char[6],char[20],int f,int t);
 double extractwave(char[6]);
 cout<<"\t\t\tWelcome\nThis program extracts all the information possible from the wave equation.Value not entered is taken as 0.";
 cout<<"\nEnter the wave equation in the standard form(Eg:Asin(wt+kx+$)):\n";
 char ch[20],x[4][6];
 double y[4];
 cin>>ch;              //to extract data from entered string
 for(int i=0,j=0;ch[i]!='\0';i++)
  if(ch[i]=='s')
  { substring(x[0],ch,j,i);j=i+4; }
  else if(ch[i]=='t')
  { substring(x[1],ch,j,i); j=i+2; }
  else if(ch[i]=='x')
  { substring(x[2],ch,j,i); j=i+2; }
  else if(ch[i]==')')
    substring(x[3],ch,j,i);
  double toint[4];
  for(i=0;i<4;i++)
   toint[i]=extractwave(x[i]);
  clrscr();          //output
  cout<<"The data obtained from the equation "<<ch<<" is:"<<endl ;
  cout<<"The angular frequency is :"<<toint[1]<< " s-1."<<endl;
  cout<<"The time period is       :"<<2*M_PI/toint[1]<<" s."<<endl;
  cout<<"The wave length is       :"<<2*M_PI/toint[2]<<" m."<<endl;
  cout<<"The phase constant is    :"<<toint[3]<<" rad."<<endl;
  cout<<"The wave velocity is     :"<<(double)toint[1]/toint[2] << " m/s.";


 getch();
 if (kbhit())
 menu();
}
void substring(char ex[6],char ch[20],int f,int t)//extracts data before a symbol or specified end point
{
 for(int i=0;i<t-f;ex[i]=ch[f+i],i++); ex[i]='\0';
}

double extractwave(char ch[8]) //extracts data till beginning of decimal point

{
 double power=0.1,number=0;
 for(int i=0;ch[i]!='.'&&ch[i]!='\0';power*=10,i++);
 for(i=0;ch[i]!='\0';i++)
  if(ch[i]!='.')
  {
    number+=(ch[i]-'0')*power*1.0;
    power=power/10*1.0;
  }
 return number;
}
