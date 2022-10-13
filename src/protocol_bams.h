
#ifndef _PROTOCOL_BAMS_H_
#define _PROTOCOL_BAMS_H_
typedef struct
{
	unsigned char funid; //功能码
	unsigned short RegStart;//寄存器开始地址
	short para;				//设置参数
//	unsigned short numData;//数据个数
}BAMS_Fun_Struct;


#endif
