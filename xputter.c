void xputter(char *p,float x)
{
int i,j,c,point,fault=0;
for(i=0;p[i]!='\0';i++)
{
if(p[i]=='x')
{
 fault=1;
char half1[100]={},half2[100]={};
for(j=0;;j++)
{
if(p[j]!='x')
{
half1[j]=p[j];
}
else if(p[j]=='x')
{

 point=j;
 break;
}
}
for(j=point+1,c=0;;j++,c++)
{
if(p[j]!='\0')
{
half2[c]=p[j];
}
else if(p[j]=='x'||p[j]=='\0')
{
 break;
}
}if(fault==0)goto end;
sprintf(p,"%s%f%s",half1,x,half2);

}
//if inside for
}
if(fault==1) xputter(p,x);
end:
    {
        ;
    }
}
