void bracketfree(char *p)
{
int i,bstart,bend,fault=0,c;
char *carry;
carry=(char*)calloc(100,sizeof(char));
arrayfree(carry,100);
for(i=0;p[i]!='\0';i++)
{
 if(p[i]=='(')
   bstart=i;
 if(p[i]==')')
 {
   fault=1;
   bend=i;
   break;
 }
}
if(fault==0) goto end;
for(c=0,i=bstart+1;i<bend;i++,c++)
{
 carry[c]=p[i];
 if(i==bend-1)
 {
  carry[c+1]='\0';
 }
 }
for(i=bstart;i<=bend;i++)
{
 p[i]='$';
}
//functions use
factorial(&carry[0]);
power(&carry[0]);
tangent(&carry[0]);
sine(&carry[0]);
cosine(&carry[0]);
isine(&carry[0]);
icos(&carry[0]);
itan(&carry[0]);
logarithm(&carry[0]);
npr(&carry[0]);
ncr(&carry[0]);
divide(&carry[0]);
multiply(&carry[0]);
plusminus(&carry[0]);
char half1[100]={},half2[100]={};

for(c=0,i=0;p[i]!='$';i++,c++)
{
half1[c]=p[i];
}
for(c=0;p[i]!='\0';i++,c++)
{
if(p[i]=='$')
{
 c--;
 continue;
}
else
half2[c]=p[i];
}
strcat(half1,carry);
strcat(half1,half2);
strcpy(p,half1);
if(fault==1)
{
  free(carry);
 bracketfree(p);
}

//functions use end
end:
    {
      free(carry)  ;
    }
}
