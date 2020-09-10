/*
Encryption

An English text needs to be encrypted using the following encryption scheme.
First, the spaces are removed from the text. Let  be the length of this text.
Then, characters are written into a grid, whose rows and columns have the following constraints:

For example, the sentence , after removing spaces is  characters long.  is between  and , so it is written in the form of a grid with 7 rows and 8 columns.

ifmanwas
meanttos
tayonthe
groundgo
dwouldha
vegivenu
sroots
Ensure that
If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. .
The encoded message is obtained by displaying the characters in a column, inserting a space, and then displaying the next column and inserting a space, and so on. For example, the encoded message for the above rectangle is:

imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau

You will be given a message to encode and print.

*/


#include <stdio.h>
#include <string.h>
#include <math.h>

char s[82];

int sqrtFloor, sqrtCeil;
int sLen;
int get;

int main(){
    //init

    //read
    scanf("%[^\n]s", s);

    //calculation
    sLen = strlen(s);
    sqrtFloor = floor(sqrt(sLen));
    sqrtCeil = ceil(sqrt(sLen));
    if (sqrtFloor * sqrtCeil < sLen) {
        sqrtFloor += 1;
    }

    //result
    for(int i = 0; i<sqrtCeil; i++){
        for(int j = 0; j<sqrtFloor; j++){
            get = j*sqrtCeil + i;
            if (get > sLen - 1) break;
            printf("%c", s[get]);
        }
        printf(" ");
    }
    printf("\n");
}
