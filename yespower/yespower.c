#include "yespower.h"

int verstring;

void yespower_hash( const char *input, char *output, uint32_t len )
{
   if (verstring==1)
   { 
		static const yespower_params_t v1 = {YESPOWER_0_5, 4096, 16, "Client Key", 10};
		yespower_tls( (yespower_binary_t*)input, len, &v1, (yespower_binary_t*)output ); 
	}
   if (verstring==2)
   {
	   static const yespower_params_t v2 = {YESPOWER_1_0, 2048, 32, NULL, 0};
	   yespower_tls( (yespower_binary_t*)input, len, &v2, (yespower_binary_t*)output ); 
	}

}
