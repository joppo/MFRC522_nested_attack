/*30-03-17*****************************************************************************************************
***************************************************************************************************************
**                                                                                                           **
**                                                 main.cpp                                                  **
**                                                                                                           **
***************************************************************************************************************
**************************************************************************************************************/

#include "MFrec.h"

int main()
{
 
    MFrec com;
    
	byte key[] = {0xf6, 0xf6, 0x18, 0xb3, 0xd7, 0x85, 0x5a};
    com.crackKey( AUTHENT_A, 62, 7, key );

    com.stop();
    
    return 0;

}
