#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main()
{
    char input_string[MAX_LEN];
    int state = 0;

    printf("Enter the input string: ");
    scanf("%s", input_string);

    for (int i = 0; i < strlen(input_string); i++) {
        char current_char = input_string[i];
        switch(state) {
            case 0:
                if (current_char == '0')
                    state = 1;
                else
                    state = 3;
                break;
            case 1:
                if (current_char == '0')
                    state = 1;
                else if (current_char == '1')
                    state = 2;
                else
                    state = 3;
                break;
            case 2:
                state = 3;
                break;
            case 3:
                break;
        }
    }

    if (state == 2)
        printf("The string belongs to the language.\n");
    else
        printf("The string does not belong to the language.\n");

    return 0;
}
