#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "a_tester.h"

int logic_bomb(int symvar) {
   int pid = (int) getpid();
   if(pid == symvar)
    return BOMB_ENDING;
   else
    return NORMAL_ENDING;
}
