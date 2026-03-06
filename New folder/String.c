#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[100];

    // Input strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // String length
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    // String concatenation
    strcpy(str3, str1);        // copy str1 to str3
    strcat(str3, str2);        // concatenate str2 to str3
    printf("Concatenated string: %s\n", str3);

    // String comparison
    int cmp = strcmp(str1, str2);
    if(cmp == 0)
        printf("Strings are equal.\n");
    else if(cmp < 0)
        printf("First string is less than second string.\n");
    else
        printf("First string is greater than second string.\n");

    return 0;
}