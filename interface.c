#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include"lcm.c"
#include"gcd.c"
#include"numbersystem.c"
#include"matrix.c"
#include"formulaportion.c"
#include"linear explosion.c"
#include"xsqr.c"
#include"xcube.c"
#include"vect.c"
#include"complez.c"
#include"conversion.c"
#include"calcfunctionall.c"
#include"calforintegrat.c"
#include"xputter.c"
#include"differentiation.c"
#include"integfile.c"
int main()
{
printf("\nGood Morning Dear User \n\n\n\n");
beginning:
 system("color 1F");
printf("\t\t\t\t\t\tMAIN MENU\n\n\n");
printf("What Operations do u wish to perform?Type the corresponding number and press enter : \n\n\n ");
printf("1.LCM   2.GCD   3.Number Conversion   4.matrix   5.Formula   6.Linear equations   7.calculation \n\n");
printf(" 8.Equations of 2 and 3 degree    9.complex numbers     10.vector    11.conversion     12.differentiation\n\n");
printf(" 13.integration    14.close\n");

// the string comparisons
int op;
int *p=(int*)malloc(sizeof(int));

scanf("%d",&op);
*p=op;
system("cls");
//choosing operations
doitagain:
{
if(*p==1)
{
printf("YOU WANT TO FIND LCM\n");
lcm();
goto endflag;
}
if(*p==2)
{
printf("YOU WANT TO FIND GCD\n");
gcd();
goto endflag;
}

if(*p==3)
{
system("color 46");
printf("YOU WANT TO DO NUMBER CONVERSIONS \n");
int choice;
printf("What type of conversions would u like?\n");
printf("1.Decimal to others\n2.Binary to others\n3.Octal to others\n4.Hexadecimal to others\n\n");
scanf("%d",&choice);
if(choice==1)
{

decimal2all();
}
if(choice==2)
{
binary2all();;
}
if(choice==3)
{
 octal2all();;
}
if(choice==4)
{
 hexa2all() ;
}

goto endflag;
}

if(*p==4)
{
system("color F1");
matrix();
goto endflag;
}

if (*p==5)
{
system("color CF");
formula();
goto endflag;
}
if (*p==6)
{
system("color B0");
linear();
goto endflag;
}

if(*p==7)
{

printf("Instructions\n");
printf("for  trigonometry type like this: sin45  cos  45  tan145 \n");
printf("for inverse trigonometry type like this :sini2 cosi1.6 tani0.3 \n");
printf("for logarithm type like this :log2\n");
printf("for permutation and combination type like this :5P2 4C3\n");
printf("for power function type like this :5^2\n");
printf("u can use  brackets +  -  *  /\n");
printf("CAUTON:type 2*tan45   never 2tan45 multiplication sign is vital!\n");
printf("CAUTON:Error may occur if u enter anomalous stuffs like 2^100 or tan90 P.S. a normal calculator cant do it either\n");
system("color 5F");
float res=calculatorfuncion();
printf("The result is %.3f",res);
goto endflag;
}
if(*p==8)
{
system("color 8E");
int degree;
printf("2 degree or 3 degree?\n");
scanf("%d",&degree);
if(degree==2)
    xsqr();
else if (degree==3)
    xcube();
goto endflag;
}

if (*p==9)
{
system("color 37");
complez();
goto endflag;
}


if (*p==10)
{
system("color B1");
vect();
goto endflag;
}

if (*p==11)
{
system("color 0C");
conversion();
goto endflag;
}

if (*p==12)
{
system("color A4");

printf("Instructions\n");
printf("for  trigonometry type like this: sin45  cos  45  tan0 \n");
printf("for inverse trigonometry type like this :sini2 cosi1.6 tani0.3 \n");
printf("for logarithm type like this :log2\n");
printf("for permutation and combination type like this :5P2 4C3\n");
printf("for power function type like this :5^2\n");
printf("u can use  brackets +  -  *  /\n");
printf("CAUTON:type 2*tan45   never 2tan45 multiplication sign is vital!\n");
printf("CAUTON:Error may occur if u enter anomalous stuffs like 2^100 or tan90\n");
diff();
goto endflag;
}

if (*p==13)
{
system("color 0E");

printf("Instructions\n");
printf("for  trigonometry type like this: sin45  cos  45  tan0 \n");
printf("for inverse trigonometry type like this :sini2 cosi1.6 tani0.3 \n");
printf("for logarithm type like this :log2\n");
printf("for permutation and combination type like this :5P2 4C3\n");
printf("for power function type like this :5^2\n");
printf("u can use  brackets +  -  *  /\n");
printf("CAUTON:type 2*tan45   never 2tan45 multiplication sign is vital!\n");
printf("CAUTON:Error may occur if u enter anomalous stuffs like 2^100 or tan90\n");
integration();
goto endflag;
}


//close
if(*p==14)
{
system("color F5");
goto lastline;
}

}
//operation choice codes are done

//asks to enter "OK"
endflag:
printf("\n Type OK to go to Main Menu or type AGAIN to do the task again\n");
char choice[5]={};
scanf("%s",choice);
if(stricmp(choice ,"ok")==0)
    {
    system("cls");
    goto beginning;
    }

else if(stricmp(choice,"again")==0)
    {   printf("Ok do the task again\n");
        goto doitagain;
    }
//end of that "OK" code

lastline:
    printf("Thank u for using this calculator\n");
}

//main function is upto this




