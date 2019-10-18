#include "cursor.h"

StringCursor inline cursorOf(char *source) {
    return (StringCursor) { source, 0 };
}

char inline currentOf(StringCursor cursor) {
    return *(cursor.source + cursor.index);
}
