#include <stdio.h>

/*print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */

/*to automate compiling and running, add this to vimrc
 * map <leader>r :w <CR> :!gcc % -o %< && ./%< <CR>*/

main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr < upper){
        celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
    }
}
