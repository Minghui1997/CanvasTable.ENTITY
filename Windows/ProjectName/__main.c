#include "CanvasTable.h"

void CT_main();
void CT_loop();

void ENTITYmain()
{
    char *ResList[] = {""};

    CT_init(960,540,ResList,sizeof(ResList)/sizeof(char*),CT_main,CT_loop,1,0,1,960,540,0,0,0,0,0,0,0,0,0,0,0);
}

void CT_main()
{

}

void CT_loop()
{

}