void factorial(char *p)
{
char os1[200]={},os2[200]={};
int i,j,c,ic;
float r;
//factorial check
int fault ;
int divpoint;
again:
fault=0;
for(i=0;p[i]!='\0';i++)
{

if(p[i]=='f' )
{
divpoint=i;
ic=i;
fault=1;
//forward
for(c=0,j=i+1;;j++,c++)
{
if(p[j]=='.'||p[j]=='0'||p[j]=='1'||p[j]=='2'||p[j]=='3'||p[j]=='4'||p[j]=='5'||p[j]=='6'||p[j]=='7'||p[j]=='8'||p[j]=='9')
  {
    os2[c]=p[j];
  }
else
{
 break;
}
}
break;
}
//if
else
{
continue;
}
}
//for loop
if(fault==0) goto end;
float o2;
o2=atoi(os2);
r=fact(o2);
char rs[200]={};
double r1=r;
sprintf(rs,"%.6f",r1);
//dollarfying
//reverse
p[divpoint]='$';
//forward
for(j=divpoint+1;;j++)
{
if(p[j]=='.'||p[j]=='0'||p[j]=='1'||p[j]=='2'||p[j]=='3'||p[j]=='4'||p[j]=='5'||p[j]=='6'||p[j]=='7'||p[j]=='8'||p[j]=='9')
  {
    p[j]='$';
   }
else
{
 break;
}
}
//kata
char part1[100]={},part2[100]={};
for(c=0,i=0;p[i]!='$';i++,c++)
{
part1[c]=p[i];
}
for(c=0;p[i]!='\0';i++,c++)
{
if(p[i]=='$')
{
c--;
continue;
}
else
{
part2[c]=p[i];
}
}
strcat(part1,rs);
strcat(part1,part2);
strcpy(p,part1);
if(fault>0)
{
factorial(p);
}
end:
    ;
}


