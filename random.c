#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"


int randchar(){// randchar which will be used to generate random character from a-z

int lower = 65, upper = 90;

   srand(time(0));

   printf("Random letter: ");
   for(int i = 0; i < 1; i++){
    int num = (rand() % (upper - lower + 1)) + lower;
    printf("%c", (char)num);
   }

    return (0);

}
int main(){
    randchar();
}




