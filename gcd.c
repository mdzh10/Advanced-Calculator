//the GCD function begins
int gcd( )
{
system("color D0");
printf("Enter the total number of numbers whose GCD u want to find\n");
int n,i,m;
scanf("%d",&n);
int b[n+1];
printf("Start Entering the numbers please\n");
for(i=1;i<=n;i++)
{
scanf("%d",&b[i]);
if(i==1) m=b[i];
else if(b[i]<b[i-1]) m=b[i];

}
again1:

for(i=1;i<=n;i++)
{
if(b[i]%m!=0) break;
else if (b[n]%m==0) goto flag;
}
m=m-1;
goto again1;
flag:
printf("The gcd is %d",m);
//12,14,18,100
}

//The GCD function ends
