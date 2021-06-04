void arrayfree(char *p,int size)
{
 int i;
 for(i=0;i<size;i++)
 {
  p[i]='\0';
 }

}
