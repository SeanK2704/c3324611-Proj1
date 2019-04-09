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
    int  rotatorN;

    printf("Enter String: \n");
    printf("Enter Number: ");
    scanf("%i", &rotatorN);

    int n = 0, rotateSwap = 0;

    int i;
    for(i=0; message[i] != '\0'; i++)
     {
          if(message[i] >='a' && message[i] <='z')
             {
                n = 'z' - message[i];
                if( rotatorN > n )
                 {
                    rotateSwap = rotatorN - n - 1;
                    message[i] = 'a';
                    message[i] += rotateSwap;
                  }  
               else
                message[i] += rotatorN;


               }
       }

      int j;
      for(j = 0; message[j] !='\0'; j++)
        {
             printf("%c", message[j]);
        }

        printf("\n");

        return 0;
}
