#include "cursor.h"

StringCursor inline cursor_of(char *source) {
    return (StringCursor) { source, 0 };
}

char inline current_of(StringCursor cursor) {
    return *(cursor.source + cursor.index);
}
