
#include "random.h"


int randchar(){// randchar which will be used to generate random character from a-z

int lower = 65, upper = 90, count = 1;

    time_t t;
   srand((unsigned) time(&t));

   //printf("Random letter: ");
   for(int i = 0; i < count; i++){
    printf("%c ", (char)(rand() % (upper - lower + 1)) + lower);
    //printf("%c ", (char)num);
   }

   return(0);

    
}




