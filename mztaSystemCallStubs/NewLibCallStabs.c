#include "NewLibCallStabs.h"
#include <stdlib.h>
#include <errno.h>
__attribute__((weak)) void _close(void)
{
    while (1)
    {
        /* code */
    }
}
__attribute__((weak)) void _lseek(void)
{
    while (1)
    {
        /* code */
    }
}
__attribute__((weak)) void _read(void)
{
    while (1)
    {
        /* code */
    }
}
__attribute__((weak)) void _write(void)
{
    while (1)
    {
        /* code */
    }
}

__attribute__((weak)) void _exit(int st)
{
    while (1)
    {
        /* code */
    }
}


__attribute__((weak)) void *_sbrk(int incr)
{
    extern char __heap_start; // set by linker
    extern char __heap_end;   // set by linker

    static char *heap_end; /* Previous end of heap or 0 if none */
    char *prev_heap_end;

    if (0 == heap_end)
    {
        heap_end = &__heap_start; /* Initialize first time round */
    }

    prev_heap_end = heap_end;
    heap_end += incr;
    // check
    if (heap_end < (&__heap_end))
    {
    }
    else
    {
        errno = ENOMEM;
        return (char *)-1;
    }
    return (void *)prev_heap_end;

} /* _sbrk () */
