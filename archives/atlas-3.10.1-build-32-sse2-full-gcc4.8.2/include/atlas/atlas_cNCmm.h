#ifndef CMM_H
   #define CMM_H

   #define ATL_mmMULADD
   #define ATL_mmLAT 3
   #define ATL_mmMU  4
   #define ATL_mmNU  1
   #define ATL_mmKU  2
   #define MB 36
   #define NB 36
   #define KB 36
   #define NBNB 1296
   #define MBNB 1296
   #define MBKB 1296
   #define NBKB 1296
   #define NB2 72
   #define NBNB2 2592

   #define ATL_MulByNB(N_) ((N_) * 36)
   #define ATL_DivByNB(N_) ((N_) / 36)
   #define ATL_MulByNBNB(N_) ((N_) * 1296)

#endif
