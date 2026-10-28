#ifndef RETARGET_H
#define RETARGET_H

/* Full RH850 foreground console. Integer/string/character, pointer, octal,
 * float/scientific, l/ll, flags, width and precision follow retarget.c.
 * IEEE binary32/binary64 floating output handles NaN/Inf/negative zero and
 * streams precision digits. A negative result reports format/count overflow.
 * SendChar owns the board UART; this header has no peripheral dependency.
 */
void SendChar(unsigned char ch);
int putchar(int c);
int tiny_printf(const char *format, ...);

#endif
