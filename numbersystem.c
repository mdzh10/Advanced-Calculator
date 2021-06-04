int decimal2all()
{
int t,d;
printf("U want to convert decimal to other forms\n");
printf("Please Choose the type\n");
printf("1.Binary\t 2.Octal\t 3.Hexadecimal");
scanf("%d",&t);
if(t==1){d=2;printf("U want to convert to binary\n");}
if(t==2){d=8;printf("U want to convert to Octal\n");}
if(t==3){d=16;printf("U want to convert to Hexadecimal\n");}

printf("Enter the decimal number\n");
int n;
scanf("%d",&n);
int original=n;
int count=0;
while(n)
{
n=n/d;
count++;
}

n=original;
int numstore[count];
int i=0;
while(n)
{
numstore[i]=n%d;

n=n/d;
i++;
}

for(i=count-1;i!=-1;i--)
{
 if(numstore[i]<10)
 {
  printf("%d",numstore[i]);
 }
 else
if(numstore[i]==10) printf("A");
if(numstore[i]==11) printf("B");
if(numstore[i]==12) printf("C");
if(numstore[i]==13) printf("D");
if(numstore[i]==14) printf("E");
if(numstore[i]==15) printf("F");
}
}


//the decimal to others end

//binary to others
int binary2all()
{
int n;
flag1:
printf("enter the binary number please\n");
scanf("%d",&n);

int t,i;
int count=0;
int original=n;
while(n)
{
n=n/10;
count++;
}

n=original;
int numstore[count];
for(i=0;i<count;i++)
{
numstore[i]=n%10;if(numstore[i]>1) {printf("Wrong input binary number cant contain digit greater than 1\n"); goto flag1;}

n=n/10;
}
int s=0;
for(i=0;i<count;i++)
{
s=s+numstore[i]*pow(2,i);
}
int rcollector;
printf("What do you want to convert it to?\n");
printf("1.Decimal\t2.Octal\t3.Hexadecimal\n");
scanf("%d",&t);
if(t==1)printf("The decimal value is %d",s);
else if(t==2)
{
decitotohers2(s,8);

}
else if(t==3)
{
decitotohers2(s,16);
}
}
//end of binary to others


//beginning of octal to others
int octal2all()
{
int n;
flag1:
printf("enter the Octal number please\n");
scanf("%d",&n);

int t,i;
int count=0;
int original=n;
while(n)
{
n=n/10;
count++;
}

n=original;
int numstore[count];
for(i=0;i<count;i++)
{
numstore[i]=n%10;
if(numstore[i]>7  )
    {
        printf("Wrong input octal number cant contain digit greater than 7\n");
        goto flag1;
}
n=n/10;
}
int s=0;
for(i=0;i<count;i++)
{
s=s+numstore[i]*pow(8,i);
}
int rcollector;
printf("What do you want to convert it to?\n");
printf("1.Decimal\t2.Binary\t3.Hexadecimal\n");
scanf("%d",&t);
if(t==1)printf("The decimal value is %d",s);
else if(t==2)
{
decitotohers2(s,2);

}
else if(t==3)
{
decitotohers2(s,16);
}
}
//end of octal to others


//BEGINNING OF HEXA 2 ALL
int hexa2all()
{
 char a[30];
 flag:
 printf("enter a hexadecimal number\n");
 scanf("%s",&a);
 int count=0;
 int i=0;
 while(a[i]!='\0')
 {
  count++;
  i++;
 }

char digistore[count+1];
strcpy(digistore,a);
int s=0,vcarry[count+1];
for(i=0;i<count;i++)
{
 if(digistore[i]>='0'&&digistore[i]<='9')
  {vcarry[count-1-i]=digistore[i]-48;}
  else if(digistore[i]>='A'&&digistore[i]<='F')
  {
   vcarry[count-1-i]=digistore[i]-55;
  }
 else {printf("U have entered wrong input enter correctly\n ");goto flag;}


}
for(i=0;i<count;i++)
{
 s=s+vcarry[i]*pow(16,i);
}
printf("What do u want to convert it to?\n");
printf("1.decimal\t2.binary\t3.Octal\n");
int con;
scanf("%d",&con);
if(con==1) printf("the decimal value is %d \n",s);
else if(con==2)
{
decitotohers2(s,2);

}
else if(con==3)
{
decitotohers2(s,8);
}
}
//END OF hexa2all


//START OF THE COMPLEMENTARY FUNCTION
int decitotohers2(int n,int d)
{
int t;



int original=n;
int count=0;
while(n)
{
n=n/d;
count++;
}

n=original;
int numstore[count];
int i=0;
while(n)
{
numstore[i]=n%d;

n=n/d;
i++;
}

for(i=count-1;i!=-1;i--)
{
 if(numstore[i]<10)
 {
  printf("%d",numstore[i]);
 }
 else
if(numstore[i]==10) printf("A");
if(numstore[i]==11) printf("B");
if(numstore[i]==12) printf("C");
if(numstore[i]==13) printf("D");
if(numstore[i]==14) printf("E");
if(numstore[i]==15) printf("F");



}

}
//end OF THE COMPLEMENTARY FUNCTION
