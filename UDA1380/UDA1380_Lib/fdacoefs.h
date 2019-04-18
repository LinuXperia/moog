/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.3 and the Signal Processing Toolbox 6.21.
 * Generated on: 22-Oct-2014 18:20:44
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 88
 * Stable            : Yes
 * Linear Phase      : Yes (Type 2)
 */

/* General type conversion for MATLAB generated C-code  */
//#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\R2014a\extern\include\tmwtypes.h 
 */
/*
 * Warning - Filter coefficients were truncated to fit specified data type.  
 *   The resulting response may not match generated theoretical response.
 *   Use the Filter Design & Analysis Tool to design accurate
 *   int16 filter coefficients.
 */
const int BL = 88;
const int16_t B[88] = {
        2,      3,      4,      5,      5,      3,     -2,    -10,    -22,
      -37,    -54,    -71,    -85,    -92,    -89,    -73,    -42,      4,
       60,    122,    182,    229,    254,    247,    201,    115,    -10,
     -163,   -328,   -483,   -603,   -662,   -635,   -504,   -259,    100,
      560,   1096,   1676,   2255,   2791,   3238,   3560,   3728,   3728,
     3560,   3238,   2791,   2255,   1676,   1096,    560,    100,   -259,
     -504,   -635,   -662,   -603,   -483,   -328,   -163,    -10,    115,
      201,    247,    254,    229,    182,    122,     60,      4,    -42,
      -73,    -89,    -92,    -85,    -71,    -54,    -37,    -22,    -10,
       -2,      3,      5,      5,      4,      3,      2
};
