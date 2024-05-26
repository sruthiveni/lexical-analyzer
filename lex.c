#include&lt;stdio.h&gt;
#include&lt;string.h&gt;
main()
{
FILE *fp;
char a[5]={&#39;:&#39;,&#39;-&#39;,&#39;*&#39;,&#39;+&#39;,&#39;=&#39;};
char b[8]={&#39;{&#39;,&#39;}&#39;,&#39;[&#39;,&#39;]&#39;,&#39;(&#39;,&#39;)&#39;};
char q[20]={&#39;a&#39;,&#39;b&#39;,&#39;c&#39;,&#39;d&#39;};
char p[15][15]={&quot;int&quot;,&quot;if&quot;,&quot;void&quot;};
int i,j,k,n,l;
char x,ch,y[7],s[10],z[8],ch1[80],id[60];
printf(&quot;********\n Choices are: \n*********&quot;);
printf(&quot;\n 1. Operators&quot;);
printf(&quot;\n 2. Special Symbols&quot;);
printf(&quot;\n 3. Keywords&quot;);
printf(&quot;\n 4. Identifiers&quot;);
printf(&quot;\n 5. Exit&quot;);
first:;
printf(&quot;\n Enter your choice:&quot;);
scanf(&quot;%d&quot;,&amp;n);
switch(n)
{
case 1:
printf(&quot;\n 1. Operators&quot;);
for(i=0;i&lt;strlen(a);i++)
{
fp=fopen(&quot;in6.txt&quot;,&quot;r&quot;);
do
{ch=fgetc(fp);
if(ch==a[i])
{
printf(&quot;\n%c\n&quot;,ch);
break;
}
}
while(!feof(fp));
}
fclose(fp);
goto first;
case 2:
printf(&quot;\n 2. Special Symbols&quot;);
for(j=0;j&lt;strlen(b);j++)
{
fp=fopen(&quot;in6.txt&quot;,&quot;r&quot;);
do
{ x=fgetc(fp);
if(x==b[j])
{
printf(&quot;\n%c\n&quot;,b[j]);
break;
}
}while(x!=EOF);
}
fclose(fp);
goto first;
break;
case 3:
printf(&quot;\n 3. Keywords&quot;);
fp=fopen(&quot;in6.txt&quot;,&quot;r&quot;);
l=0;
x=getc(fp);
while(x!=EOF&amp;&amp;x!=&#39;(&#39;)
{
id[l]=x;
l++;
x=getc(fp);
}
id[l]=&#39;\0&#39;;
fclose(fp);
printf(&quot;\n%s\n&quot;,id);
goto first;
break;
case 4:
printf(&quot;\n 4. Identifiers&quot;);
for(i=0;i&lt;strlen(q);i++)
{
fp=fopen(&quot;in6.txt&quot;,&quot;r&quot;);
do
{
ch=fgetc(fp);
if(ch==q[i])
{
printf( &quot;\n%c\n&quot;,ch);
break;
}
}
while(!feof(fp));
}
fclose(fp);
goto first;
break;
case 5:
printf(&quot;5. You Want To Quit Give Y:&quot;);
scanf(&quot;\n%c\n&quot;,&amp;y);
if(getchar()==&#39;y&#39;)
exit(0);
else goto first;
break;
}
}
