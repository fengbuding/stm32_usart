#ifndef __USART1_H
#define	__USART1_H

#include "stm32f10x.h"
#include <stdio.h>
#include <stdarg.h>

#define CMD_BUFFER_LEN 255

void UsartInit(void);
void USART1_Config(void);
void USART2_Config(void);
void usart2Printf(char *fmt, ...);
void GpuSend(char * buf1);
int fgetc(FILE *f);
int fputc(int ch, FILE *f);

#endif /* __USART1_H */
