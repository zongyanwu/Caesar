#include <stdio.h>
#include <string.h>

int main(){


    char text[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

    char cypher[100];


    gets(cypher);

    int i=0;

    for(i=1; i<=52; i++){
        int j=0;
        printf("%d. ",i);
        for(j=0; j<strlen(cypher); j++){
            if(cypher[j]==' ')
                printf(" ");
            else{
                int k=0;
                for(k=0; k<strlen(text); k++){
                    if(cypher[j]==text[k]){
                        int p=k;
                        if((k-i)<0)
                        {
                            p=strlen(text)-i+k;
                            printf("%c",text[p]);
                        }

                        else
                            printf("%c",text[p-i]);
                    }

                }

            }

        }
        printf("\n");
    }

}
