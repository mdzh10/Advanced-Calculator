void icos(char *p)
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

if(p[i]=='c' && p[i+3]=='i')
{
divpoint=i;
ic=i;

fault++;
//reverse

//forward
for(c=0,j=i+4;;j++,c++)
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
if(fault==0) goto end1;


float o1,o2;

o2=atof(os2);


r=acos(o2);

char rs[200]={};
double r1=r*180/3.1416;

sprintf(rs,"%.6f",r1);

//dollarfying
//reverse
p[divpoint]='$';
p[divpoint+1]='$';
p[divpoint+2]='$';
p[divpoint+3]='$';

//forward
for(j=divpoint+4;;j++)
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
icos(p);
}

end1:
    ;
}






void isine(char *p)
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

if(p[i]=='s' && p[i+3]=='i')
{
divpoint=i;
ic=i;

fault++;
//reverse

//forward
for(c=0,j=i+4;;j++,c++)
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
if(fault==0) goto end2;


float o1,o2;

o2=atof(os2);


r=asin(o2);

char rs[200]={};
double r1=r*180/3.1416;

sprintf(rs,"%.3f",r1);

//dollarfying
//reverse
p[divpoint]='$';
p[divpoint+1]='$';
p[divpoint+2]='$';
p[divpoint+3]='$';

//forward
for(j=divpoint+4;;j++)
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
isine(p);
}

end2:
    ;
}






void itan(char *p)
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

if(p[i]=='t' && p[i+3]=='i')
{
divpoint=i;
ic=i;

fault++;
//reverse

//forward
for(c=0,j=i+4;;j++,c++)
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
if(fault==0) goto end3;


float o1,o2;

o2=atof(os2);


r=atan(o2);

char rs[200]={};
double r1=r*180/3.1416;

sprintf(rs,"%.3f",r1);

//dollarfying
//reverse
p[divpoint]='$';
p[divpoint+1]='$';
p[divpoint+2]='$';
p[divpoint+3]='$';

//forward
for(j=divpoint+4;;j++)
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
itan(p);
}

end3:
    ;
}








