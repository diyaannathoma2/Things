#ifndef CURSOR_H
#define CURSOR_H

typedef struct {
    char* source;
    int   index;
} StringCursor;

StringCursor cursor_of(char* source);
char current_of(StringCursor cursor);

#endif
