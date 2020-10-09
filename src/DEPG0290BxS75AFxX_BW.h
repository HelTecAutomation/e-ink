#ifndef __DEPG0290BxS75AFxX_BW_H__
#define __DEPG0290BxS75AFxX_BW_H__
#include "EpdBase.h"

//250*122///////////////////////////////////////


#define ALLSCREEN_GRAGHBYTES	4736

/* Display resolution */
// #define EPD_WIDTH       
// #define EPD_HEIGHT      

class DEPG0290BxS75AFxX: public EpdBase {
    public:
        DEPG0290BxS75AFxX(uint8_t _rst, uint8_t _dc, uint8_t _cs,  uint8_t _busy, int8_t _clk=-1, uint8_t _spi_num = 0 ,uint32_t _freq = 2000000): \
        EpdBase(_rst, _dc, _cs, _busy, _clk, _spi_num, _freq){}

        ~DEPG0290BxS75AFxX(){};

    public:
        void EPD_Init(void); //Electronic paper initialization
        void EPD_Update(void);
            
        void EPD_WhiteScreen_Black(void);
        void EPD_WhiteScreen_White(void);
        void EPD_DeepSleep(void);
        //Display 

        void EPD_ALL_image(const unsigned char *datas);

    private:
        void EPD_Load_Data(unsigned char data);
};

#endif