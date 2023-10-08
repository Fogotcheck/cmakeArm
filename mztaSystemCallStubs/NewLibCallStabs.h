#ifndef __NewLibCallStabs_h__
#define __NewLibCallStabs_h__
#warning "You use the functions of the standard library (NEWLIB), so you should implement these methods according to your own platform If you're sure you don't need to implement these, just add an empty implementation to the link add link."
void _close(void);
void _lseek(void);
void _read(void);
void _write(void);
void _exit(int st);
void *_sbrk();
#endif //__NewLibCallStabs_h__