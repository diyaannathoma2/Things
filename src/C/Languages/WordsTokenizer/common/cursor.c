#include "cursor.h"

char currentOf(StringCursor cursor) {
    return *(cursor.source + cursor.index);
}
