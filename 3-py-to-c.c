#include <stdio.h>

int main() {
/* 
 * NOTE: 
 *      scanf(..) will scan ALL of the text from a program.
 *      Yes, including the previous scanf(...) calls.
 *      This will cause the following code block to not run as expected.
*/
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
}
