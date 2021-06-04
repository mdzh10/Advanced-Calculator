void tangent(char *p)
{
char os2[200]={};
int i,j,c;
float r;
//tan check
int fault ;
int divpoint;
again:
fault=0;

for(i=0;p[i]!='\0';i++)
{

if(p[i]=='t' && p[i+2]=='n'&&p[i+3]!='i')
{
divpoint=i;
fault++;
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
if(fault==0) goto end1;


float o2;
o2=atof(os2);


r=tan(3.1416*o2/180);

char rs[200]={};
double r1=r;
if(r1<=0.01 && !(r<0))
    r1=0;
else if(r1>=-0.01&& !(r1>0))
   r1=0;

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

if(fault>0)
{
tangent(p);
}
end1:
    ;
}


//sine file




void sine(char *p)
{
char os2[200]={};
int i,j,c;
float r;
//sine check
int fault=0 ;
int divpoint;
for(i=0;p[i]!='\0';i++)
{
if(p[i]=='s' && p[i+2]=='n' &&p[i+3]!='i')
{
divpoint=i;
fault=1;
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
if(fault==0) goto end2;
float o2;
o2=atof(os2);
r=sin(3.1416*o2/180);

char rs[200]={};
double r1=r;
sprintf(rs,"%.3f",r1);

    //dollarfying

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

if(fault>0)
{
sine(p);
}

end2:
    ;
}



void cosine(char *p)
{
char os2[200]={};
int i,j,c;
float r;
//sine check
int fault=0 ;
int divpoint;
for(i=0;p[i]!='\0';i++)
{
if(p[i]=='c' && p[i+2]=='s' &&p[i+3]!='i')
{
divpoint=i;
fault=1;
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
if(fault==0) goto end3;
float o2;
o2=atof(os2);
r=cos(3.1416*o2/180);
char rs[200]={};
double r1=r;
sprintf(rs,"%.3f",r1);

//dollarfying

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
if(fault>0)
{
cosine(p);
}

end3:
    ;
}
















