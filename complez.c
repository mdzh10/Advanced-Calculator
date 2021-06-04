


struct comp
{
 double realpart;
 double imgpart;
};

void complez()
{
 int opern;

 printf("\n\n\t\t***** MAIN MENU *****\n\n\n");
 printf(" Select your option:\n 1 : ADDITION\n 2 : MULTIPLICATION\n 3 : SUBSTRACTION\n 4 : DIVISION\n 5 : ABSOLUTE VALUE\n 6 : CONJUGATE\n 0 : EXIT\n\n Select : ");

 scanf("%d",&opern);

 switch(opern)
 {
 case 0:
  exit(0);
 case 1:
 case 2:
 case 3:
 case 4:
 case 5:
 case 6:
  arithmetic(opern);
 default:
  main();
 }

}

void arithmetic(int opern)
{

 struct comp w1, w2, w;
 double a,b;
 if(opern == 1 || opern == 2 || opern == 3 || opern == 4 )
 {
 printf("Enter two Complex Numbers (x+iy):\nReal Part of First Number: ");
 scanf("%lf",&w1.realpart);

 printf("Imaginary Part of First Number: ");
 scanf("%lf",&w1.imgpart);

 printf("Real Part of Second Number: ");
 scanf("%lf",&w2.realpart);

 printf("Imaginary Part of Second Number: ");
 scanf("%lf",&w2.imgpart);
}
 else
{
 printf("Enter a Complex Numbers  (x+iy):\nReal Part of the Number: ");
 scanf("%lf",&w1.realpart);

 printf("Imaginary Part of the Number: ");
 scanf("%lf",&w1.imgpart);
}

 switch(opern)
 {

 /*addition of complex number*/
 case 1:
  w.realpart = w1.realpart + w2.realpart;
  w.imgpart = w1.imgpart + w2.imgpart;
  break;

  /*multiplication of complex number*/
 case 2:
  w.realpart = (w1.realpart * w2.realpart) - (w1.imgpart * w2.imgpart);
  w.imgpart = (w1.realpart * w2.imgpart) + (w1.imgpart * w2.realpart);
  break;

 /*substraction of complex number*/
 case 3:
  w.realpart = w1.realpart - w2.realpart;
  w.imgpart = w1.imgpart + w2.imgpart;
  break;

 /*division of complex number*/
 case 4:
  w.realpart = (w1.realpart * w2.realpart + w1.imgpart * w2.imgpart) / (w2.realpart * w2.realpart + w2.imgpart * w2.imgpart);
  w.imgpart = (w1.imgpart * w2.realpart - w1.realpart * w2.imgpart) / (w2.realpart * w2.realpart + w2.imgpart * w2.imgpart);
  break;

 /*absolute value of complex number*/
 case 5:
  a = (w1.realpart * w1.realpart + w1.imgpart * w1.imgpart);
  b = sqrt(a);
  printf("Answer = %.2lf",b);
  break;

 /*conjugate of complex number*/
 case 6:
  w.realpart = w1.realpart;
  w.imgpart = - w1.imgpart;
  break;

 }

 if(opern == 1 || opern == 2 || opern == 3 || opern == 4 || opern ==6 )
{
 if (w.imgpart>0||w.imgpart<0)
  printf("Answer = %.2lf+(%.2lf)i",w.realpart,w.imgpart);
 else
  printf("Answer = %.2lf",w.realpart);
}
getch();
system("cls");
}
