#include "CH57x_common.h"

__align(4) UINT8  RxBuffer[ MAX_PACKET_SIZE ];  // IN, must even address
__align(4) UINT8  TxBuffer[ MAX_PACKET_SIZE ];  // OUT, must even address

int main()
{
	GPIOA_SetBits(GPIO_Pin_9);
	GPIOA_ModeCfg(GPIO_Pin_8, GPIO_ModeIN_PU);			// RXD-配置上拉输入
	GPIOA_ModeCfg(GPIO_Pin_9, GPIO_ModeOut_PP_5mA);		// TXD-配置推挽输出，注意先让IO口输出高电平
	UART1_DefInit();
	
	UART1_SendString("11223344", 8 );
	while(1)
	{
		
	}
}

