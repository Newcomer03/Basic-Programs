#include<stdio.h>

main()
{
    FILE *fs,*ft;
    char ch1,ch2;
    fs=fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Source.txt","r");
    ft=fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Target.txt","w");
    if(fs==NULL || ft==NULL)
    {
    	puts("File does not exist.....cannot open the file");
    	return 0;
    }
    ch1=fgetc(fs);
    
    while(ch1!=EOF)
    {
    	ch1 = ch1+35;
    	ch2=fputc(ch1,ft);
        ch1=fgetc(fs);
    }
    fclose(fs);
    fclose(ft);
    ft=fopen("C:\\Users\\FAMILY\\Desktop\\Pandemic Break Course\\Target.txt","r");
    ch2=fgetc(ft);
    while(ch2!=EOF)
    {
    	ch2 = ch2-35;
    	printf("%c",ch2);
        ch2=fgetc(ft);
    }
    
	fclose(ft);
    return 0;
}

