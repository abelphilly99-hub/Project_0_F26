#include <stdlib.h>

void rand_string(char *s, size_t size) //function to generate random string of size 'size' and store it in the string 's'
{
 const char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; //character list
    
        for (size_t i = 0; i < size; i++) {//loop to generate random characters

            int key = rand() % (int)(sizeof(chars) - 1);//generate random index for character list
            s[i] = chars[key];
        }
        s[size] = '\0'; //terminate the string
    
}