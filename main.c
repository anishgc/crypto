#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    FILE *pt;
    char mess[20];
    char ct[20];
    int key,i,ciptext,et,dt;
   pt=fopen("etext.txt","w");

    printf("Enter Plain text =");
    gets(mess);
    fclose(pt);
    printf("\n Enter Key = ");
    scanf("%d",&key);
    printf("\n ciphertext is = \n ");

    for(i=0;i<strlen(mess);i++)
    {
           mess[i]=tolower(mess[i]);
           if(mess[i]==32)
           {
               printf(" ");
           }
           else
           {
           ciptext=((mess[i]-97)+key)%26;
           et=ciptext+97;
           printf("%c",et);
    }
    }
    getch();
}/*

        printf("\n enter the text for decryption = ");
     gets(ct);
     for(i=0;i<strlen(ct);i++)

     {
         if(ct[i]==32)
         {
             printf(" ");
         }
         else
         {
             dt=((ct[i]-97)-key)%26;
             printf("%c",dt+97);
         }
     }
    getch();
}

*/
