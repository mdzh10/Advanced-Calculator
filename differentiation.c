void diff()
{
char arr[50];
printf("Enter your function please\n");
scanf("%s",&arr);
char original[100]={};
strcpy(original,arr);
float x,y;
float func2,func1;
printf("Enter the value of the x \n");
scanf("%f",&x);
xputter(arr,x);
char fox[100];
strcpy(fox,arr);
strcpy(arr,original);

xputter(arr,x+0.0001);
char foxh[100];
strcpy(foxh,arr);
printf("f of x\n");
puts(fox);
printf("f of x+h\n");
puts(foxh);
func1=calcinteg(fox);
func2=calcinteg(foxh);
printf("b44 y\n");
printf("funct 1 is %f and func 2 is %f\n",func1,func2);
printf("b4 y\n");
y=(func2-func1)/0.0001;
printf("after y\n");
printf("The result of your differenciation is %.2f",y);

}

