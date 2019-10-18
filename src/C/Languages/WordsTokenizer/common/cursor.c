#include "cursor.h"

char inline currentOf(StringCursor cursor) {
    return *(cursor.source + cursor.index);
}
