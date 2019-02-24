#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    char* buf2 = NULL;
    size_t len = 0;
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf", &i2, &d2);
    getline(&buf2, &len, stdin);

    printf("%s\n", buf2);
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i + i2);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d + d2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", s, buf2);

    return 0;
}
