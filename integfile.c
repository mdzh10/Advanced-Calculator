

void integration()
{
char arr[50];
printf("Enter your function please\n");
scanf("%s",arr);
char original[100]={};
strcpy(original,arr);
float a,b;
printf("Enter the value of the lower limit\n");
scanf("%f",&a);
printf("Enter the value of the lower limit\n");
scanf("%f",&b);
float N=10000;
float division =(b-a)/N ;
float x,y,integral=0;
for(x=a;x<b;x+=division)
{
xputter(arr,x);
y= calcinteg(arr);
integral=integral+y*division;
strcpy(arr,original);
}
printf("Integral value is %.4f\n",integral);


}
