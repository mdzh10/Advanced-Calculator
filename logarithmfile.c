void logarithm(char *p)
{
char os1[200]={},os2[200]={};
int i,j,c,ic;
float r;
//division check
int fault ;
int divpoint;
again:
fault=0;

for(i=0;p[i]!='\0';i++)
{

if(p[i]=='l' && p[i+2]=='g' )
{
divpoint=i;
ic=i;

fault++;
//reverse

//forward
for(c=0,j=i+3;;j++,c++)
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


float o1,o2;

o2=atof(os2);


r=log(o2);

char rs[200]={};
double r1=r;
sprintf(rs,"%.6f",r1);
//dollarfying
//reverse
p[divpoint]='$';
p[divpoint+1]='$';
p[divpoint+2]='$';

//forward
for(j=divpoint+3;;j++)
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

strcpy(os1,"");
strcpy(os2,"");
if(fault>0)
{
logarithm(p);
}

end:
    ;
}





