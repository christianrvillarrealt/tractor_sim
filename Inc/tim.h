#ifndef TIM_H_
#define TIM_H_

///////////////
// msg state //
///////////////

// 0xff marks the start of a new message
// 0x80 signals velocity of the motor
// 0x40 signals speed of the vehicle
// 0x20 signals the gear
static uint8_t msg[6] = {0xff, 0x80, 0x00, 0x40, 0x00, 0x20, 0x00};
static int msg_length = sizeof(msg) / sizeof(msg[0]);

// config registers -> 10 ms
#define TIM2_PSC	9UL
#define TIM2_CNT	1536UL

// config registers -> 200 ms
#define TIM3_PSC	195UL
#define TIM3_CNT	230UL

// config registers -> 50 ms
#define TIM4_PSC	48UL
#define TIM4_CNT    230UL

// config registers -> 5 ms
#define TIM5_PSC	4UL
#define TIM5_CNT    1536UL

// config registers -> 100 us
#define TIM9_PSC	0UL
#define TIM9_CNT    59136UL

// config registers -> 10 us
#define TIM10_PSC	0UL
#define TIM10_CNT   64896UL

// config registers -> 1 ms
#define TIM11_PSC	0UL
#define TIM11_CNT   1536UL

// enable internal clock source
#define TIM2_SMCR_SMS   ( 0x7UL << 0U )

// edge aligned mode
#define TIM2_CR1_EA     ( 0x3UL << 5U )

// up counter (direction)
#define TIM2_CR1_UC     ( 0x1UL << 4U )

// uev enabled
#define TIM2_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM2_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM2_SR_UIF		( 0x1UL << 0U )

void USER_TIM2_Init( void );

void USER_TIM2_Reset( void );

void USER_TIM2_Start( void );

void USER_TIM2_Delay( void );

// enable internal clock source
#define TIM3_SMCR_SMS   ( 0x7UL << 0U )

// edge aligned mode
#define TIM3_CR1_EA     ( 0x3UL << 5U )

// up counter (direction)
#define TIM3_CR1_UC     ( 0x1UL << 4U )

// uev enabled
#define TIM3_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM3_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM3_SR_UIF		( 0x1UL << 0U )

// overflow interrupt enable
#define TIM3_DIER_UIE  ( 0x1UL << 0U )

// move interrupt to peripheral
#define NVIC_ISER_TIM3 ( 0x1UL << 29U )

void USER_TIM3_Init( void );

void USER_TIM3_Reset( void );

void USER_TIM3_Start( void );

void USER_TIM3_Delay( void );

void TIM3_IRQHandler( void );

// enable internal clock source
#define TIM4_SMCR_SMS   ( 0x7UL << 0U )

// edge aligned mode
#define TIM4_CR1_EA     ( 0x3UL << 5U )

// up counter (direction)
#define TIM4_CR1_UC     ( 0x1UL << 4U )

// uev enabled
#define TIM4_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM4_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM4_SR_UIF		( 0x1UL << 0U )

void USER_TIM4_Init( void );

void USER_TIM4_Reset( void );

void USER_TIM4_Start( void );

void USER_TIM4_Delay( void );

// enable internal clock source
#define TIM5_SMCR_SMS   ( 0x7UL << 0U )

// edge aligned mode
#define TIM5_CR1_EA     ( 0x3UL << 5U )

// up counter (direction)
#define TIM5_CR1_UC     ( 0x1UL << 4U )

// uev enabled
#define TIM5_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM5_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM5_SR_UIF		( 0x1UL << 0U )

void USER_TIM5_Init( void );

void USER_TIM5_Reset( void );

void USER_TIM5_Start( void );

void USER_TIM5_Delay( void );

// enable internal clock source
#define TIM9_SMCR_SMS   ( 0x7UL << 0U )

// uev enabled
#define TIM9_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM9_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM9_SR_UIF		( 0x1UL << 0U )

void USER_TIM9_Init( void );

void USER_TIM9_Reset( void );

void USER_TIM9_Start( void );

void USER_TIM9_Delay( void );

// uev enabled
#define TIM10_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM10_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM10_SR_UIF		( 0x1UL << 0U )

void USER_TIM10_Init( void );

void USER_TIM10_Reset( void );

void USER_TIM10_Start( void );

void USER_TIM10_Delay( void );

// uev enabled
#define TIM11_CR1_UEV    ( 0x1UL << 1U )

// enable the timer
#define TIM11_CR1_CEN	( 0x1UL << 0U )

// update interrupt flag
#define TIM11_SR_UIF		( 0x1UL << 0U )

void USER_TIM11_Init( void );

void USER_TIM11_Reset( void );

void USER_TIM11_Start( void );

void USER_TIM11_Delay( void );

#endif /* TIM_H_ */
