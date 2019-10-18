#include <stdio.h>
#include "common/cursor.h"

int main() {
    StringCursor cursor = cursorOf("Hello");

    printf("%c", currentOf(cursor));

    return 0;
}
