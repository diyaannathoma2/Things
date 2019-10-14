#ifndef CURSOR_TESTS_H
#define CURSOR_TESTS_H

#include "../common/cursor.h"

int currentOf_should_return_char_at_index() {
    StringCursor cursor = {
        .source = "Hello",
        .index = 0
    };

    return currentOf(cursor) == 'H';
}

#endif
