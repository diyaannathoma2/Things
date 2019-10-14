#ifndef CURSOR_H
#define CURSOR_H

typedef struct {
    char* source;
    int   index;
} StringCursor;

char currentOf(StringCursor cursor);

#endif
