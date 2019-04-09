#include<stdio.h>

char B; //Initialising B 
int main() //Main code is written inside.
{
   char message[25]; //
   
    // int enc, dec, key;  //Initialising variable encryption, decryption and key. // 
  
  printf("Type what you would like to be decrypted:", message);
    
    
    scanf("%c", B); // Scanning for 
    B = B - 1; //Function: Encryption Method. 
	
	return 0;
}
#include <stdio.h>
int main()
{
    char message[80];
    int keyX;

    printf("Enter String: "); // Enter message to be encrypted
    gets(message); // 
    printf("Enter Number: ");
    scanf("%c", &keyX);

    int x = 0, keyChange = 0;

    int b;
    for(b=0; message[b] != "\0"; b++)
     {
          if(message[b] >="a" && message[b] <="z")
             {
                x = "z" - message[b];
                if( keyX > x )
                 {
                    keyChange = keyX - x - 1;
                    message[b] = "a";
                    message[b] += keyChange;
                  }  
               else
                message[b] += keyX;


               }
       }

      int j;
      for(j = 0; message[j] !="\0"; j++)
        {
             printf("%c", message[j]); //Prints encoded message
        }

        printf("\n");

        return 0;
}
//Code finished
