/* Copyright 2016 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IOTJS_MODULE_PIN_H
#define IOTJS_MODULE_PIN_H


#if defined(__NUTTX__)


#if ENABLE_MODULE_ADC || ENABLE_MODULE_PWM

#define SYSIO_TIMER_PIN_SHIFT 21 /* Bits 21-24: Timer number */
#define SYSIO_TIMER_PIN_MASK 15
#define SYSIO_TIMER_NUMBER(n) ((n) << SYSIO_TIMER_PIN_SHIFT)
#define SYSIO_GET_TIMER(n) \
  (((n) >> SYSIO_TIMER_PIN_SHIFT) & SYSIO_TIMER_PIN_MASK)

#endif /* ENABLE_MODULE_ADC || ENABLE_MODULE_PWM */


#if ENABLE_MODULE_ADC

#define ADC_NUMBER_SHIFT 25 /* Bits 25-26: ADC number */
#define ADC_NUMBER_MASK 3
#define ADC_NUMBER(n) ((n) << ADC_NUMBER_SHIFT)
#define ADC_GET_NUMBER(n) (((n) >> ADC_NUMBER_SHIFT) & ADC_NUMBER_MASK)

#endif /* ENABLE_MODULE_ADC */


#endif /* __NUTTX__ */


void iotjs_pin_initialize(const iotjs_jval_t* jobj);


#endif /* IOTJS_MODULE_PIN_H */
