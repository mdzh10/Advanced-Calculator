void matrix()
{
int i,j,k,x,y,sum,value,a[10][10],b[10][10],c[10][10];

printf("Enter Rows & Column Of Matrix-\n");
scanf("%d%d",&x,&y);

printf("\nEnter The values of 1st matrix-\n");
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       scanf("%d",&a[i][j]);
  }
}

printf("\nEnter The values of 2nd matrix-\n");
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       scanf("%d",&b[i][j]);
  }
}

printf("\nYour 1st matrix-\n");
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       printf("%d ",a[i][j]);
  }
  printf("\n");
}

printf("\nYour 2nd matrix-\n");
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       printf("%d ",b[i][j]);
  }
  printf("\n");
}

printf("\nPress 1 For Addition & 2 For Subtraction & 3 For Multiplication- ");
scanf("%d",&value);

switch(value)
{
     case 1:
printf("\nAddition of 2 matrix-\n");
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       c[i][j]=a[i][j]+b[i][j];
  }
}

for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       printf("%d ",c[i][j]);
  }
  printf("\n");
}
break;
    case 2:
printf("\nSubtraction of 2 matrix-\n");
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       c[i][j]=a[i][j]-b[i][j];
  }
}
for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       printf("%d ",c[i][j]);
  }
  printf("\n");
}
break;
   case 3:
printf("\nMultiplication of 2 matrix-\n");
for (i = 0; i <x ; i++) {
      for (j = 0; j <y; j++) {
         sum = 0;
         for (k = 0; k < x; k++) {
            sum = sum + a[i][k] * b[k][j];
         }
         c[i][j] = sum;
      }
   }
   for(i=0;i<x;i++)
{
  for(j=0;j<y;j++)
  {
       printf("%d ",c[i][j]);
  }
  printf("\n");
}
break;
   default:
     printf("No Other Functions!!");
     break;
}
}
