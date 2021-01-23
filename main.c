#include <stdio.h>
#include <stdlib.h>
int input(int x);
char ttt[3][3]={ {'1','2','3'},
                {'4','5','6'},
                {'7','8','9'}};
int result;
char a;
int checkstatus;
int wincon();
int main()
{   printf("P1 = X & P2 = O\n\n\n");
    int b,c;
     printf("\n\n\n %c  |  %c  |  %c\n_______________\n %c  |  %c  |  %c\n_______________\n %c  |  %c  |  %c\n\n",ttt[0][0],ttt[0][1],ttt[0][2],ttt[1][0],ttt[1][1],ttt[1][2],ttt[2][0],ttt[2][1],ttt[2][2]);
Turn1:
    scanf("%i",&b);
    if (b>=1 && b<=9)
        {
        a='X';
        input(b);
        checkstatus = wincon();
        if(checkstatus==1)
            {printf("\n\n ==>>player 1 is winner");
            return 0;
            }
        else if(checkstatus==0)
            {printf("\n\nD  ==>>Draw");
            return 0;
            }
        else if(checkstatus==(-1))
            {goto Turn2;
            }
        }
    else
        { printf("enter a valid number");
        goto Turn1;
        }

Turn2:
    scanf("%i",&c);
    if (c>=1 && c<=9)
       {
            a ='O';
        input(c);
        checkstatus = wincon();
        if(checkstatus==1)
            {printf("\n\n ==>>player 2 is winner");
            return 0;
            }
        else if(checkstatus==0)
            {printf("\n\nD  ==>>Draw");
            return 0;
            }
        else if(checkstatus==(-1))
            {goto Turn1;
            }
        }
    else
        { printf("enter a valid number");
        goto Turn2;
        }

}
int input(int x)
{
    if (x==1 && (ttt[0][0]=='1'))
        { ttt[0][0]=a;
        }
    else if (x==2 && (ttt[0][1]=='2'))
        { ttt[0][1]=a;
        }
    else if (x==3 && (ttt[0][2]=='3'))
        { ttt[0][2]=a;
        }
    else if (x==4 && (ttt[1][0]=='4'))
        { ttt[1][0]=a;
        }
    else if (x==5 && (ttt[1][1]=='5'))
        { ttt[1][1]=a;
        }
    else if (x==6 && (ttt[1][2]=='6'))
        { ttt[1][2]=a;
        }
    else if (x==7 && (ttt[2][0]=='7'))
        { ttt[2][0]=a;
        }
    else if (x==8 && (ttt[2][1]=='8'))
        { ttt[2][1]=a;
        }
    else if (x==9 && (ttt[2][2]=='9'))
        { ttt[2][2]=a;
        }
    else
        {printf("try again");
           //      if(a=='X')
          //          {goto Turn1;}
          //     else if(a=='O')
          //        {goto Turn2;}
           }
    printf("\n\n\n %c  |  %c  |  %c\n_______________\n %c  |  %c  |  %c\n_______________\n %c  |  %c  |  %c\n\n",ttt[0][0],ttt[0][1],ttt[0][2],ttt[1][0],ttt[1][1],ttt[1][2],ttt[2][0],ttt[2][1],ttt[2][2]);
}
//*** wincon will give reult 1 for win
//*****  0 for draw
/// -1for continue

int wincon()
{
    if((ttt[0][0]==ttt[0][1])&&(ttt[0][1]==ttt[0][2]))
        {result=1;}
    else if((ttt[1][0]==ttt[1][1])&&(ttt[1][1]==ttt[1][2]))
        {result=1;}
    else if((ttt[2][0]==ttt[2][1])&&(ttt[2][1]==ttt[2][2]))
        {result=1;}

    else if((ttt[0][0]==ttt[1][0])&&(ttt[1][0]==ttt[2][0]))
        {result=1;}
    else if((ttt[0][1]==ttt[1][1])&&(ttt[1][1]==ttt[2][1]))
        {result=1;}
    else if((ttt[0][2]==ttt[1][2])&&(ttt[1][2]==ttt[2][2]))
        {result=1;}

    else if((ttt[0][0]==ttt[1][1])&&(ttt[1][1]==ttt[2][2]))
        {result=1;}
    else if((ttt[0][2]==ttt[1][1])&&(ttt[1][1]==ttt[2][0]))
        {result=1;}

    else if((ttt[0][0]!='1')&&(ttt[0][1]!='2')&&(ttt[0][2]!='3')&&(ttt[1][0]!='4')&&(ttt[1][1]!='5')&&(ttt[1][2]!='6')&&(ttt[2][0]!='7')&&(ttt[2][1]!='8')&&(ttt[2][2]!='9'))
        {result=0;}
    else
        {result=(-1); }

    return result;
}
