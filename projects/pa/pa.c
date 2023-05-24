#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "threads/init.h"
#include "threads/malloc.h"
#include "threads/palloc.h"
#include "threads/thread.h"
#include "projects/pa/pa.h"

void run_patest(char **argv)
{   
    /// TODO: make your own test
    
    palloc_get_status(0);

    while (1) {
        timer_msleep(1000);
    }
}