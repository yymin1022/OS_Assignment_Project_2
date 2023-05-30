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
    
	void *page1 = palloc_get_multiple(PAL_USER, 20);
	palloc_get_status(PAL_USER);

	void *page2 = palloc_get_multiple(PAL_USER, 60);
	palloc_get_status(PAL_USER);

	void *page3 = palloc_get_multiple(PAL_USER, 120);
	palloc_get_status(PAL_USER);

	palloc_free_multiple(page2, 60);
	palloc_get_status(PAL_USER);

	void *page4 = palloc_get_multiple(PAL_USER, 13);
	palloc_get_status(PAL_USER);

	void *page5 = palloc_get_multiple(PAL_USER, 120);
	palloc_get_status(PAL_USER);



	void *page6 = palloc_get_multiple(PAL_ZERO, 20);
	palloc_get_status(PAL_ZERO);

	void *page7 = palloc_get_multiple(PAL_ZERO, 60);
	palloc_get_status(PAL_ZERO);

	void *page8 = palloc_get_multiple(PAL_ZERO, 120);
	palloc_get_status(PAL_ZERO);

	palloc_free_multiple(page7, 60);
	palloc_get_status(PAL_ZERO);

	void *page9 = palloc_get_multiple(PAL_ZERO, 13);
	palloc_get_status(PAL_ZERO);

	void *page10 = palloc_get_multiple(PAL_ZERO, 120);
	palloc_get_status(PAL_ZERO);


    while (1) {
        timer_msleep(1000);
    }
}
