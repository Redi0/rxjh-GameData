
#ifndef _G_FUNCANDVAR_H_
#define _G_FUNCANDVAR_H_

#include "stdafx.h"
#include <windows.h>
#include <stdio.h>


#define MAX_BUFFER_SIZE 0x100

void dbgPrint_String(char* szpFormatName, ...){

#ifdef _DEBUG

	va_list argList;
	char buffer[MAX_BUFFER_SIZE];
	char szBuffer_Game[MAX_BUFFER_SIZE] = "Game:";

	va_start(argList, szpFormatName);

	vsprintf_s(buffer, szpFormatName, argList);

	strcat_s(szBuffer_Game, buffer);

	OutputDebugStringA(szBuffer_Game);

	va_end(argList);

#endif // __DEBUG


}



#endif