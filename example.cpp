#include "mulsys.h"

int main()
{
	if (isSys("win"))
	{
		printf("Hewwo!\n");
	}
	wlcmd("pause>nul", "sleep 2");
	clearscr();
	return 0; 
}