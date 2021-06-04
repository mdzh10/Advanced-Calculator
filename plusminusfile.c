void plusminus(char*p)
{
float result;
char carry[100]={};
int i,j,c;
float neg=0,pos=0;
for(i=0;p[i]!='\0';i++)
{

if(p[i]=='-')
{
 for(c=0,j=i+1;;j++,c++)
 {
  if(p[j]=='.'||p[j]=='0'||p[j]=='1'||p[j]=='2'||p[j]=='3'||p[j]=='4'||p[j]=='5'||p[j]=='6'||p[j]=='7'||p[j]=='8'||p[j]=='9')
   {
       carry[c]=p[j];
   }
  else
  {

   neg+=atof(carry);
   arrayfree(&carry,100);
   break;
  }
 }
}
if(p[i]=='+' )
{

 for(c=0,j=i+1;;j++,c++)
 {
  if(p[j]=='.'||p[j]=='0'||p[j]=='1'||p[j]=='2'||p[j]=='3'||p[j]=='4'||p[j]=='5'||p[j]=='6'||p[j]=='7'||p[j]=='8'||p[j]=='9')
   {
       carry[c]=p[j];

   }
  else
  {
   pos+=atof(carry);
   arrayfree(&carry,100);
   break;
  }
 }
}
if(i==0 && (p[i]=='0'||p[i]=='.'||p[i]=='1'||p[i]=='2'||p[i]=='3'||p[i]=='4'||p[i]=='5'||p[i]=='6'||p[i]=='7'||p[i]=='8'||p[i]=='9' ))
{
 for(c=0,j=i;;j++,c++)
 {
  if(p[j]=='.'||p[j]=='0'||p[j]=='1'||p[j]=='2'||p[j]=='3'||p[j]=='4'||p[j]=='5'||p[j]=='6'||p[j]=='7'||p[j]=='8'||p[j]=='9')
   {
    carry[c]=p[j];
   }
  else
  {
   pos+=atof(carry);
   arrayfree(&carry,100);
   break;
  }
 }
}

}
char ret[100];
 result=pos-neg;

 gcvt(result,4,ret);
sprintf(ret,"%.6f",result);
 strcpy(p,ret);

}



