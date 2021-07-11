#include<stdio.h>

main()
{
      FILE *fp;
      char ch;
      int count=0,upper=0,lower=0,space=0,vowel=0;
      fp=fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\test.txt","r");
      if(fp==NULL)
      {
      puts("File does not exist.....cannot open the file");
      return 0;
      }
      for(ch=fgetc(fp);ch!=EOF;ch=fgetc(fp))
      {
      
      if(ch>='A' && ch<='Z')
    	{
      		upper++;
      	}
      if(ch>='a' && ch<='z')
     	{
      		lower++;
    	}
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    	{
    		vowel++;
    	}
      if(ch==' ')
      {
    		space++;
      }
      
      
      count=count+1;
      }
      fclose(fp);
      printf("The file has %d characters\n",count);
      printf("The file has %d uppercase\n",upper);
      printf("The file has %d lowercase\n",lower);
      printf("The file has %d vowels\n",vowel);
      printf("The file has %d white spaces\n",space);
      return 0;
      }

