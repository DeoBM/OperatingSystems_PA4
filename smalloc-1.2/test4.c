#include <stdio.h>
#include "smalloc.h"

int 
main()
{
	void *p1, *p2, *p3, *p4, *p5, *p6, *p7 ;

	print_sm_containers() ;

	p1 = smalloc(2000) ; 
	printf("smalloc(2000)\n") ; 
	print_sm_containers() ;

	p2 = smalloc(2500) ; 
	printf("smalloc(2500)\n") ; 
	print_sm_containers() ;

	sfree(p1) ; 
	printf("sfree(%p)\n", p1) ; 
	print_sm_containers() ;

	p3 = smalloc(1450) ; 
	printf("smalloc(1450)\n") ; 
	print_sm_containers() ;

	p4 = smalloc(1000) ; 
	printf("smalloc(1000)\n") ; 
	print_sm_containers() ;

	p5 = smalloc(50) ; 
        printf("smalloc(50)\n") ; 
        print_sm_containers() ;

	p6 = smalloc(900) ; 
        printf("smalloc(900)\n") ; 
        print_sm_containers() ;

	p7 = smalloc(1700) ;
        printf("smalloc(1700)\n") ;
        print_sm_containers() ;
}
