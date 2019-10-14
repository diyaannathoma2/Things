#include <stdio.h>
#include "cursor_tests.h"

int currentOf_should_return_char_at_index() {
    StringCursor cursor = {
        .source = "Hello",
        .index = 0
    };

    return currentOf(cursor) == 'H';
}
