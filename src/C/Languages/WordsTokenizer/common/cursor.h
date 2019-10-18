#ifndef CURSOR_H
#define CURSOR_H

typedef struct {
    char* source;
    int   index;
} StringCursor;

StringCursor cursorOf(char* source);
char currentOf(StringCursor cursor);

#endif
