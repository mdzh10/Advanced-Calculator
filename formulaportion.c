void formula()
{
printf("Which formula section you want to check out?Please type the number\n");
FILE *fp;
printf("1.Co-Ordinate Geometry\n2.Permutation\n3.Combination\n4.Trigonometry\n5.Motion\n6.Inverse Trigonometry \n");
int c;
char a;
scanf("%d",&c);
system("cls");
if(c==1)
{
 fp=fopen("co ordinate.txt","r");
 while(!feof(fp))
 {
  a=fgetc(fp);
  printf("%c",a);
 }
}
if(c==2)
{
 fp=fopen("permutation.txt","r");
 while(!feof(fp))
 {
  a=fgetc(fp);
  printf("%c",a);
 }
}
if(c==3)
{
 fp=fopen("combination.txt","r");
 while(!feof(fp))
 {
  a=fgetc(fp);
  printf("%c",a);
 }
}
if(c==4)
{
 fp=fopen("Trigonometry.txt","r");
 while(!feof(fp))
 {
  a=fgetc(fp);
  printf("%c",a);
 }
}
if(c==5)
{
 fp=fopen("motion.txt","r");
 while(!feof(fp))
 {
  a=fgetc(fp);
  printf("%c",a);
 }
}
if(c==6)
{
 fp=fopen("inversetrigonometry.txt","r");
 while(!feof(fp))
 {
  a=fgetc(fp);
  printf("%c",a);
 }
}
}
