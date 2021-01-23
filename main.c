#include <stdio.h>
#include <stdlib.h>
/*  ques is - prog is generating a (((((random)))))number from 1 - 20 and you have to guess it
    1- you can enter number only between 1-20
    2-  prog will indicate high or low
    3- you have only 5 tries (in part 2)
*/

// random number is copy paste
#include<time.h>
int main()
{
    // code for random no.

    time_t t;
    srand((unsigned)time(&t));

    int result= rand()%21;
    // main code
    int a=0,b=20;
    int input, maxchance=5,chanceleft;
    printf("i have chosen a number from %i to %i which you have to guess in %i chances only.\nEnter a number from %i to %i: \n",a,b,maxchance,a,b);
    top:
        chanceleft=(maxchance-1);
      while(chanceleft>=0)
      {

        scanf("%i",&input);
        if((a<=input)&&(input<=b))

                {   if(input==result)          // == is for comparison = is to asign value ---- fir se glti krdi mene
                        {printf("Cong You have guessed it correct, the result is %i \n",result);
                        goto end;
                        }
                    else if (input>result)
                        {printf("you have entered a bigger number, try again \nYou have only %i chance left\n",chanceleft);
                        goto chanceleftpart;
                        }
                    else if (input<result)
                        {printf("you have entered a smaller number, try again \nYou have only %i chance left\n",chanceleft);
                        goto chanceleftpart;
                        }
                }

        else
        {
        chanceleft++;       // so that chance do not decrease if we enter wrong no. by mistake
            printf("enter a valid number. You have only %i chances left\n",chanceleft);
            goto chanceleftpart;
        }
    end:
       {
        printf("Thank You");
        return 0;
      }
chanceleftpart:
        chanceleft= (chanceleft-1);
    }


}
