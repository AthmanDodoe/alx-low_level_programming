#include <stdio.h>

void print_alphabet(void);

int main(void)
{

        char i = 'a';   

        void print_alphabet(void){

                for (i = 'a'; i < 'z'; i++)
                {
                putchar(i);
                }
                putchar('\n');
        }

        print_alphabet();
        return 0;
}