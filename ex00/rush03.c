#include <unistd.h>
#include "ft_putchar.c"

void rush(int x, int y) {
    int i = 1;
    int j = 1;
    int v = 1;

    // Handle Error
    if (x <= 0 || y <= 0) {
        char error [] = "Error: necesitas agregar un número mayor que 1\n";
        write(1, &error, 48);
    }

    while(i <= y){

        int p = 1;
        while(j<= x){

            if (x > 1) {

                // horiztal
                if (p == 1 && i == 1 || p == 1 && i == y) {
                    ft_putchar ('A');
                } else if (p == x && i == 1 || p == x && i == y) {
                    ft_putchar ('C');
                } else {
                  
                    if (p > 1 && p < x && i > 1 && i < y) {
                        ft_putchar (' ');
                    }else {
                        ft_putchar ('B');                  
                    }
                }

            } else {

                // vertical
                if (p == 1 && v == 1 || v == y) {
                    ft_putchar ('A');
                } else if (p == x && v < 1 && v > y) {
                    ft_putchar ('C');
                } else {
                    ft_putchar ('B');
                } 

            }

            p++;
            v++;
            j++;
        }
        ft_putchar ('\n');
        j=1;
        i++;
    }
    
}
