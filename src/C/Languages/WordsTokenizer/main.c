#include <stdio.h>
#include "common/cursor.h"

int main() {
  StringCursor cursor = {
      .source = "Hello",
      .index = 0
  };

  printf("%c", currentOf(cursor));
  return 0;
}
