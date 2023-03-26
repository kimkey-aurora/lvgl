#ifndef __MYFONT_H__
#define __MYFONT_H__

// 自定义字库起始地址为 1M
#define FLASH_FONT_BASE_ADDR	(1*1024*1024)

// SD卡字库路径
#define MYFONT_MSYH_16_PATH		"0:FONT/myfont_msyh_16.bin"	/* 微软雅黑16号字体 */
#define MYFONT_MSYH_32_PATH		"0:FONT/myfont_msyh_32.bin"	/* 微软雅黑16号字体 */

#define MYFONT_MSYH_16_ADDR		(FLASH_FONT_BASE_ADDR+0)	/*微软雅黑16号字体*/
#define MYFONT_MSYH_32_ADDR     (FLASH_FONT_BASE_ADDR+2*1024*1024)

#endif
