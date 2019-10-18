#include <stdio.h>
#include "common/cursor.h"

int main() {
    StringCursor cursor = cursor_of("Hello");

    printf("%c", current_of(cursor));

    return 0;
}
