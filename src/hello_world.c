#include<stdio.h>

int main () {
  int ret;
  ret = printf("Hello world\n");
  // Check if the correct numbers of characters was printed
  if (ret != 12) {
    fprintf(stderr, "ERROR: The incorrect number of characters were printed\n");
    return -1;
  }
  return 0;
}
