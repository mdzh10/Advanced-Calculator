
void vect()
{
    int vector1[3];
    int vector2[3];
    int vector[3];

    int opern,i;
    double d;

    printf("Select your option:\n\n 1 : ADDITION\n 2 : CROSS PRODUCT\n 3 : SUBSTRACTION\n 4 : DOT PRODUCT\n 5 : ABSOLUTE VALUE\n 0 : EXIT\n\n Select : ");

    scanf("%d",&opern);

      if(opern == 1 || opern == 2 || opern == 3 || opern == 4 )
      {
      printf("For 2D vector put 0 for certain direction\n");
      printf("Enter first vector :\n");

      for(i=0 ; i<3 ; i++)
      {
        scanf("%d",&vector1[i]);
      }

      printf("Enter second vector :\n");
      for(i=0 ; i<3 ; i++)
      {
        scanf("%d",&vector2[i]);
      }

      }
      else
      {
          printf("For 2D vector put 0 for certain direction\n");
          printf("Enter a vector :\n");
          for(i=0 ; i<3 ; i++)
            {
                scanf("%d",&vector1[i]);
            }
      }


   switch(opern)
   {
    case 1:
        printf("The addition of the vectors is \n");
        vector[0] = vector1[0] + vector2[0];
        vector[1] = vector1[1] + vector2[1];
        vector[2] = vector1[2] + vector2[2];
        printf("%d %d %d\n",vector[0],vector[1],vector[2]);
        break;
    case 2:
         printf("The cross product of the vectors is \n");

        vector[0] = vector1[1] * vector2[2] - vector2[1] * vector1[2];
        vector[1] = vector1[2] * vector2[0] - vector2[2] * vector1[0];
        vector[2] = vector1[0] * vector2[1] - vector2[0] * vector1[1];

        printf("%d %d %d\n",vector[0],vector[1],vector[2]);
        break;
    case 3:
        printf("The subtraction of the vectors is \n");
        vector[0] = vector1[0] - vector2[0];
        vector[1] = vector1[1] - vector2[1];
        vector[2] = vector1[2] - vector2[2];

        printf("%d %d %d\n",vector[0],vector[1],vector[2]);
        break;
    case 4:
        printf("The dot product of the vectors is \n");
        d = vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2];

        printf("%.0lf\n",d);
        break;
    case 5:
         printf("The absolute value of the vector is\n");

        d = vector1[0]*vector1[0] + vector1[1]*vector1[1] + vector1[2]*vector1[2];

        printf("%.2lf\n",sqrt(d));
        break;
   }
    getch();
    system("cls");
}
