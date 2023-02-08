 #include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_accepted(const char *str) {
  int state = 0;
  for (int i = 0; i < strlen(str); i++) {
    char c = str[i];
    switch (state) {
      case 0:
        if (c == 'a') state = 1;
        else state = 2;
        break;
      case 1:
        if (c == 'a') state = 1;
        else state = 2;
        break;
      case 2:
        return false;
    }
  }
  return state == 1;
}

int main() {
  const char *test_strings[] = {"a", "aa", "aaa", "ab", "ba"};
  for (int i = 0; i < 5; i++) {
    if (is_accepted(test_strings[i])) {
      printf("%s is accepted\n", test_strings[i]);
    } else {
      printf("%s is not accepted\n", test_strings[i]);
    }
  }
  return 0;
}

