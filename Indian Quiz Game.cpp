#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
    int countr, r , r1, count,i,n;
    float score;
    char choice;
    char playername[20];
    mainhome:
    system("cls");
    printf("\t\t\t QUIZ GAME BASED ON C LANGUAGE\n");
    printf("\t\t\t DEVELOPED BY PAARTH & PRADYUMNA\n");
    printf("\n\t\t========================================");
    printf("\n\t\t\t   HELLO, WELCOME");
    printf("\n\t\t\t         TO ");
    printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t========================================");
     printf("\n\t\t========================================");
     printf("\n\t\t   EARN POINTS AND GET TO THE TOP   ") ;
     printf("\n\t\t========================================");
     printf("\n\t\t========================================");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t========================================\n\n");
     choice=toupper(getch());
     if (choice=='V')
     {
show_record();
goto mainhome;
     }
else if (choice=='H')
{
    help();
    getch();
    goto mainhome;

}
else if (choice=='R')
{
    reset_score();
    getch();
    goto mainhome;
}
else if (choice=='Q')
exit(1);
else if (choice=='S')
{
    system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\t what is your name? ");
    gets(playername);

    system("cls");
    printf("\n =============== welcome %s to the quiz game developed in c =============",playername);
    printf("\n\n here are some ground rules before you start playing");
    printf("\n===============================================================");
    printf("\n>> 1 warm up round / qualifier round ");
    printf("\nto pass the qualifier round you need to get minimum of 5 in the score");
    printf("\nthat means out of 10 questions you have tp give correct answer to 5 of them");
    printf("\n>> game starts with a challenge round conisting of 10 rounds ");
    printf("\n each round gives a total of 10 points");
    printf("\n by collecting the points you can top the leaderboard");
    printf("\n>> you will be given 4 options A, B, C OR D for the right option");
    printf(">> you will be continously asked the questions until you mark them right");
    printf("\n\n\t -.-.-.-.-.-ALL THE BEST-.-.-.-.-.-.- ");
    printf("\n\n\t press Y to start the game \n");
    printf("\n press any other key to return to main menu ");
    if (toupper(getch())=='Y')
    {
        goto home;
    }
    else
    {
        goto mainhome;
        system("cls");
    }
    home:
    system("cls");
    count=0;
    for(i=1;i<=10;i++)
    {
        system("cls");
        r1=i;

        switch(r1)
        {
            case 1:
            printf("\n\n\n who is the father of our nation");
            printf("\n\nA. B.R.Ambedkar\t\tB. Mahatma Gandhi\n\nC.Jawahar Lal Nehru\t\tD.Rajiv Gandhi");
            if(toupper(getch())=='B')
            {
                printf("\n\nCorrect answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("\n\n Wrong, the correct answer is B. Mahatma Gandhi");
                getch();
                break;
            }
            case 2:
            printf("\n\n\n which is the most sensitive organ in our body?");
            printf("\n\nA. Heart \t\t B. Lung \n\n C.Skin \n\nD. Liver");
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect answer"); count++;
                getch();
                break;

            }
            else
            {
                printf("Wrong, the correct answer is C. skin");
                getch();
                break;
            }
            case 3:
            printf("\n\n\nWho is the father and creator of computer?");
            printf("\n\nA. Al Khwarizimi\t\tB. Tim Berners Lee\n\nC. Alan tuting\t\tD. Charles babbage");
            if(toupper(getch())=='D')
            {
                printf("Correct answer");count++;
                getch();
                break;
            }
            else
            {
                printf("\n\nWrong, the correct answer is D. Charles babbage");
                getch();
                break;
               
            }
            case 4:
            printf("\n\n\n which is the longest river in the world ");
            printf("\n\nA. River nile\t\tB. Amazon river\n\n C.Ynagtze river\t\tD.Yellow riiver");
            if(toupper(getch())=='A')
            {
                printf("correct answer");count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong , the correct the correct answer is A. River nile");
                getch();
                break;
            }
            case 5:
            printf("\n\n which is the smallest state of India ?");
            printf("\n\nA. Goa \t\tB. Sikkim\n\n C.lakshwadeep\t\tD. Daman and Diu");
            if(toupper(getch())=='A')
            {
                printf("Correct answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is A.Goa");
                getch();
                break;
            }
            case 6:
            printf("\n\n which river is called ganga of south in India ?");
            printf("\n\nA. Kaveri \t\tB. Godavari\n\n C.Krishna\t\tD. Yamuna");
            if(toupper(getch())=='B')
            {
                printf("Correct answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is B.Godaveri");
                getch();
                break;
           
            }
            case 7:
            printf("\n\n In which national park is Asiatic lion found ?");
            printf("\n\nA. Gir \t\tB. Jim Corbett\n\n C.Sanjiv Gandhi\t\tD. Bandipur");
            if(toupper(getch())=='A')
            {
                printf("Correct answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is A.Gir");
                getch();
                break;
           
            }
            case 8:
            printf("\n\n Which of these is NOT the city of lakes ?");
            printf("\n\nA. UDAIPUR \t\tB. BHOPAL\n\n C.ALLAHABAD\t\tD. SRINAGAR");
            if(toupper(getch())=='C')
            {
                printf("Correct answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is C.ALLAHABAD");
                getch();
                break;
           
            }
            case 9:
            printf("\n\n which is NOT THE SEVEN SISTER OF NORTH EAST ?");
            printf("\n\nA. ASSAM \t\tB. SIKKIM\n\n C.MEGHALAYA\t\tD. MANIPUR");
            if(toupper(getch())=='B')
            {
                printf("Correct answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is B.SIKKIM");
                getch();
                break;
           
            }
            case 10:
            printf("\n\n ROOPKUND LAKE OF UTTARAKHAND IS FAMOUSLY TITLED AS _ FOR IT'S PECULIARITY");
            printf("\n\nA. INFERNO LAKE \t\tB.ANGEL'S LAKE\n\n C.TWILIGHT LAKE\t\tD. SKELETON LAKE");
            if(toupper(getch())=='D')
            {
                printf("Correct answer"); count++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is D.SKELETON LAKE");
                getch();
                break;
            }
            
        }
    }
if(count>=5)
{goto test;}
else
{
system("cls");
printf("\n\nSORRY YOUR GENERAL KNOWLDEGE IS JUST NOT ENOUGH TO EVEN CLEAR THE QUALIFIER ");
getch();
goto mainhome;
}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
{goto game;}game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;


    


switch(r)
{
            case 1:  
            printf("\n\n Which state is also known as the “Fruit Bowl” of India?");
            printf("\n\nA.JAMMU & KASHMIR \t\tB.HIMACHAL PRADESH\n\n C.ASSAM\t\tD. MEGHALAYA");
            if(toupper(getch())=='B')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is B. HIMACHAL PRADESH");
                getch();
                break;
           
            }

            case 2:  
            printf("\n\n who is popularly known as the Iron Man of India");
            printf("\n\nA.LAL BAHUDAR SHASTRI \t\tB.SARDAR VALLABH BHAI PATEL \n\n C.MAHATMA GANDHI\t\tD. DR. B.R AMBEDKAR");
            if(toupper(getch())=='B')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is B. SARDAR VALLABH BHAI PATEL");
                getch();
                break;
           
            }
            case 3:  
            printf("\n\n which place in india is also known as the Land of Rising Sun");
            printf("\n\nA.SIKKIM\t\tB.KARNATKA\n\n C.GUJRAT\t\tD. ARUNACHAL PRADESH");
            if(toupper(getch())=='D')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is D. ARUNACHAL PRADESH");
                getch();
                break;
           
            }
            case 4:  
            printf("\n\n In which of the following state the language is khasi?");
            printf("\n\nA. MIZORAM \t\tB. NAGALAND\n\n C. MEGHALAYA\t\tD. TRIPURA");
            if(toupper(getch())=='C')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is C. MEGHALAYA");
                getch();
                break;
           
            }
            case 5:  
            printf("\n\n Which is the largest coffee-producing state of India");
            printf("\n\nA.KARNATKA \t\tB. KERELA\n\n C. TAMIL NADU\t\tD. ARUNACHAL PRADESH");
            if(toupper(getch())=='A')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is A. ARUNACHAL PRADESH");
                getch();
                break;
           
            }
            case 6:  
            printf("\n\n what is the staple drink of Goa?");
            printf("\n\nA. TODDY \t\tB. THANDAI\n\n C.FENI\t\tD. SATTU SHARBAT");
            if(toupper(getch())=='C')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is C. FENI");
                getch();
                break;
           
            }
            case 7:  
            printf("\n\n At which of the following places was the first ever European township constructed in India");
            printf("\n\nA. KOCHI \t\tB. PONDICHERRY\n\n C.KANYAKUMARI\t\tD. SURAT");
            if(toupper(getch())=='A')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is A. KOCHI");
                getch();
                break;
           
            }
             case 8:  
            printf("\n\n who were the last Europeans to come to India for trading?");
            printf("\n\nA. BRITISH \t\tB. FRENCH \n\n C. PROTUGESE\t\tD. DUTCH");
            if(toupper(getch())=='B')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is B. FRENCH");
                getch();
                break;
           
            }
            case 9:  
            printf("\n\nWhich of these countries doesn't share border with India: ");
            printf("\n\nA. MYANMAR \t\tB.BHUTAN\n\n C.LAOS\t\tD. BANGLADESH");
            if(toupper(getch())=='C')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is C.");
                getch();
                break;

            }
            case 10:  
            printf("\n\nWho was the last ruler of the gupta empire?");
            printf("\n\nA. VISHNUGUPTA\t\tB. SKANDAGUPTA\n\n C. SAMUDRAGUPTA\t\tD.KUMARAGUPTA II");
            if(toupper(getch())=='A')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is A.");
                getch();
                break;
            }
            case 11:  
            printf("\n\nWho among the following of Gupta dynasty adopted the title Kaviraja?");
            printf("\n\nA. CHANDRAGUPTA\t\tB. BUDDHAGUPTA\n\n C. SAMUDRAGUPTA\t\tD.KUMARAGUPTA I");
            if(toupper(getch())=='C')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is C.");
                getch();
                break;
            }
            case 12:  
            printf("\n\n Who did shivaji sign the Treaty of Purandhar in 1665");
            printf("\n\nA. JASWANT SINGH\t\tB. JAI SINGH\n\n C. AURANGZEB\t\tD. AADIL KHAN");
            if(toupper(getch())=='B')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is B.");
                getch();
                break;
            }
            case 13:  
            printf("\n\nWhich among the following empire was known as “Mulk-e-Khadim”?");
            printf("\n\nA. MARATHA\t\tB.BIJAPUR\n\n C.MADURAI\t\tD.MYSORE");
            if(toupper(getch())=='A')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is A.");
                getch();
                break;
            }
            case 14:  
            printf("\n\nWhich of these countries doesn't share border with India: ");
            printf("\n\nA. MYANMAR \t\tB.BHUTAN\n\n C.LAOS\t\tD. BANGLADESH");
            if(toupper(getch())=='C')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is C.");
                getch();
                break;
            }
            case 15:  
            printf("\n\n national heritage animal");
            printf("\n\nA. ASIATIC LION\t\tB.FLAMINGO\n\n C. SUNDERBAN TIGER\t\tD. ELEPHANT");
            if(toupper(getch())=='D')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is D.");
                getch();
                break;
            }
            case 16:  
            printf("\n\nWhich Viceroy passed the Vernacular Press Act and the Arms Act of 1878?");
            printf("\n\nA. LORD HARDINGE\t\tB. LORD MAYTON\n\n C. LORD DALHOUSIE\t\tD.LORD LYTTON");
            if(toupper(getch())=='D')
            {
                printf("Correct answer"); countr++;
                getch();
                break;
            }
            else
            {
                printf("Wrong, the correct answer is D.");
                getch();
                break;
            }
        }
}


 score:
     system("cls");
  score=(float)countr*100000;
  if(score>0.00 && score<1000000)
  {
    printf("\n\n\t\t**************** CONGRATULATION *****************");
      printf("\n\t You won $%.2f",score);goto go;}

  else if(score==1000000.00)
  {
     printf("\n\n\n \t\t**************** CONGRATULATION ****************");
     printf("\n\t\t\t\t YOUR GK ABOUT INDIA IS OVER 9000!!!!");
     printf("\n\t\t Your score is $%.2f",score);
     printf("\t\t Thank You!!");
  }
  else
 {
  printf("\n\n\t******** SORRY YOUR GK JUST WASNT ENOUGH TO PASS THE TEST ********");
     printf("\n\t\t Thanks for your participation, better luck next time");
     printf("\n\t\t TRY AGAIN");goto go;}

  go:
  puts("\n\n Press Y if you want to play next game");
  puts(" Press any key if you want to go main menu");
  if (toupper(getch())=='Y')
  goto home;
  else
  {
  edit_score(score,playername);
  goto mainhome;
  }
}
}
  
  

 void show_record()
   {
    	
	system("cls");
  char name[20];
  float scr;
  FILE *f;
  f=fopen("score.txt","r");
  fscanf(f,"%s%f",&name,&scr);
  printf("\n\n\t\t*************************************************************");
  printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
  printf("\n\n\t\t*************************************************************");
  fclose(f);
  getch();
  }

 void reset_score()
     {system("cls");
     float sc;
  char nm[20];
  FILE *f;
  f=fopen("score.txt","r+");
  fscanf(f,"%s%f",&nm,&sc);
  sc=0;
  fprintf(f,"%s,%.2f",nm,sc);
     fclose(f);}

 void help()
  {
  system("cls");
     printf("\n\n                              HELP");
     printf("\n -------------------------------------------------------------------------");
     printf("\n ......................... C program Quiz Game...........");
     printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLENGE ROUND");
     printf("\n >> In warmup round you will be asked a total of 10 questions to test your general");
     printf("\n    knowledge. You will be eligible to play the game if you can give atleast 5");
     printf("\n    correct answers otherwise you can't play the Game...........");
     printf("\n >> Your game starts with the CHALLENGE ROUND. In this round you will be asked");
     printf("\n    total 10 questions each right answer will be given 10 points each round");
     printf("\n    By this way you can make your way to the highscore...............");
     printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
     printf("\n    right option");
     printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
     printf("\n >> No negative marking for wrong answers");
     

  printf("\n\n\t*********************BEST OF LUCK*********************************");
  printf("\n\n\t*****GENERAL KNOWLEDGE QUIZ GAME is developed by Paarth and Pradyumna********");
  }

 void edit_score(float score, char plnm[20])
  {system("cls");
  float sc;
  char nm[20];
  FILE *f;
  f=fopen("score.txt","r");
  fscanf(f,"%s%f",&nm,&sc);
  if (score>=sc)
   { sc=score;
     fclose(f);
     f=fopen("score.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);}}
