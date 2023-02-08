#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char input_string[MAX_LEN];
    int i, j;
    int length;
    int flag = 0;

    printf("Enter the input string: ");
    scanf("%s", input_string);

    length = strlen(input_string);

    if (input_string[0] == '0') {
        i = 1;
        j = length - 1;
        while (i < length && j > 0) {
            if (input_string[i] == '0')
                i++;
            else if (input_string[j] == '1')
                j--;
            else
                break;
        }
        if (i >= j)
            flag = 1;
    }

    if (flag == 1 && input_string[length - 1] == '1')
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");

    return 0;
}
