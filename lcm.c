//lcm function start
int lcm ()
{
 system("color E0");
int n;
printf("How many numbers whose LCM u are finding?\n");
scanf("%d",&n);
printf("Enter the numbers whose LCM u want to find\n");
int a[n+1],i;
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
int multiple=0;

int mutiple=a[1];
again:
multiple+=a[1];

for(i=1;i<=n;i++)
{
if(multiple%a[i]!=0) goto again;
else if (a[n]==0) break;
}
printf("The LCM is %d \n",multiple);

}


//lcm function end
