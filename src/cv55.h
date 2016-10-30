/*
 * cv55.h
 *
 *  Created on: 25. 10. 2016
 *      Author: PigyCaj
 */

#ifndef CV55_H_
#define CV55_H_


void adc_init(void);
void init_NVIC(void);
void ADC1_IRQHandler(void);

void initUSART2(void);
void PutcUART2(char);

void RegisterCallbackUART2(void *callback);   // usart 1
void USART2_IRQHandler(void); // usart 1

double conv();

void form(uint16_t);
void Send(char []);
void sprint();

#endif /* CV55_H_ */

