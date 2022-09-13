#include<stdio.h>
#include<string.h>
char n1[30],n2[30];
void ans(char ch);
int main()
{
 int x,v,j,f;
 char str1[]="FLAMES",str2[8];
 	printf("\t\t\t       _____________        \n");
	printf("\t\t\t```````|FLAMES TEST|````````\n");
 	printf("\t\t\t       `````````````        \n\n");
 printf("\t_____________\n");
 printf("\t|LADKE KA NAAM| ==\n ");
printf("\t`````````````");
 scanf("%s",&n1);
 printf("\t_____________\n");
 printf("\t|LADKI KA NAAM| ==\n ");
printf("\t`````````````");
 scanf("%s",&n2);
 x=strlen(n1)+strlen(n2);
 strcpy(str2,str1);
 for(int n=6;n>1;n--)
 {
  v=x;
  while(v>n)
  {
   v=v-n;
  }
  str1[v-1]='X';
  j=0;
  //printf("1%s\n",str1);
  for(int i=v;i<=n;i++)
  {
   if(str1[i]!='X')
   {
    str2[j++]=str1[i];
   }
  }
  j--;
  for(int i=0;i<v;i++)
  {
   if(str1[i]!='X')
   {
    str2[j++]=str1[i];
   }
  }
  str2[j]='\0';
  for(int i=0;i<n;i++)
  {
   str1[i]=str2[i];
  }
  //printf("2%s\n",str1);
 }
 ans(str1[0]);
 
 return 0;
}
 void ans(char ch)
 {
 	printf("\n\n\n");
	 if(ch=='F')
 	{
 		printf("%s is FRIEND of %s\n\n\n\t\t\t\tAAPDA KO AVSAR ME BDLO....\n\t\t\t\tCHHITE MT FAILAO....KHUSHIYAN FAILAO...... ",n1,n2);
		 	
	 }
if(ch=='L')
 	{
 		printf("\t\t\t\t%s is LOVER of %s\n\n ",n1,n2);
		printf("\n\n\t\t\tSORRY BETA KTAVEYGA TU ....ABHI BTA RHA HU SAALE\n \n\n\t\t\t KADDU KATEGA SB ME BTEGA....\n\n\t\t\t SAALE TERA KTEGA......."); 	
	 }
if(ch=='A')
 	{
 		printf("                                          ANDHE DEKH KE TYPE KR    ");
		 	
	 }
if(ch=='M')
 	{
 		printf("%s is going to MARRY  %s\n\n\n\t\t\tBADHAI HO....\n\n\n\t\t\t\tSUHAAG RAAT PE DHYAAN SE....BHAI KAISA LGA MERA MJAK ",n1,n2);
		 	
	 }
if(ch=='E')
 	{
 		printf("%s is ENEMY %s\n\n\n\n\a\t\t\tSTAY ALERT.....\n\n\n\t\t\t\tENEMIES AHEAD!!!!!!\a\a\a ",n1,n2);
		 	
	 }
if(ch=='S')
 	{
 		printf("\n your answer is S\n\t\t\t\t\t%s BANG BANG %s ",n1,n2);
		 	
	 }

	 
}

