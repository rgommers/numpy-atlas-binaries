#ifndef ATLAS_DR2_L1_H
#define ATLAS_DR2_L1_H

#include "atlas_type.h"

typedef void (*ATL_r2kern_t)
   (ATL_CINT, ATL_CINT, const double*, const double*, const double*,
    const double*, double*, ATL_CINT);
void ATL_dger2k__900003
   (ATL_CINT, ATL_CINT, const double*, const double*, const double*,
    const double*, double*, ATL_CINT);

static ATL_r2kern_t ATL_GetR2Kern
   (ATL_CINT M, ATL_CINT N, const void *A, ATL_CINT lda,
    int *mu, int *nu, int *minM, int *minN, int *alignX, int *ALIGNX2A,
    int *alignY, int *FNU, ATL_INT *CacheElts) 
{
   *minM = 4;   *minN = 2;
   *mu = 4;     *nu = 2;
   *alignX = 8;  *alignY = 8;
   *ALIGNX2A = 0;
   *FNU = 1;
   *CacheElts = 4096;
   return(ATL_dger2k__900003);
}

#define ATL_GetPartR2(A_, lda_, mb_, nb_) { (mb_) = 680; (nb_) = 2; }

#endif  /* end protection around header file contents */
