#include "sofam.h"
 
void iauRy(double theta, double r[3][3])
/*
**  - - - - - -
**   i a u R y
**  - - - - - -
**
**  Rotate an r-matrix about the y-axis.
**
**  This function is part of the International Astronomical Union's
**  SOFA (Standards Of Fundamental Astronomy) software collection.
**
**  Status:  vector/matrix support function.
**
**  Given:
**     theta  double          angle (radians)
**
**  Given and returned:
**     r      double[3][3]    r-matrix
**
**  Sign convention:  The matrix can be used to rotate the reference
**  frame of a vector.  Calling This function with positive theta
**  incorporates in the matrix an additional rotation, about the y-axis,
**  anticlockwise as seen looking towards the origin from positive y.
**
**  Called:
**     iauIr        initialize r-matrix to identity
**     iauRxr       product of two r-matrices
**     iauCr        copy r-matrix
**
**  This revision:  2008 May 22
**
**  Copyright (C) 2008 IAU SOFA Review Board.  See notes at end.
*/
{
   double s, c, a[3][3], w[3][3];


/* Matrix representing new rotation. */
   s = sin(theta);
   c = cos(theta);
   iauIr(a);
   a[0][0] =  c;
   a[2][0] =  s;
   a[0][2] = -s;
   a[2][2] =  c;
 
/* Rotate. */
   iauRxr(a, r, w);
 
/* Return result. */
   iauCr(w, r);
 
   return;

/*-----------------------------------------------------------------------
**
**  Copyright (C) 2008
**  Standards Of Fundamental Astronomy Review Board
**  of the International Astronomical Union.
**
**  =====================
**  SOFA Software License
**  =====================
**
**  NOTICE TO USER:
**
**  BY USING THIS SOFTWARE YOU ACCEPT THE FOLLOWING TERMS AND CONDITIONS
**  WHICH APPLY TO ITS USE.
**
**  1. The Software is owned by the IAU SOFA Review Board ("the Board").
**
**  2. Permission is granted to anyone to use the SOFA software for any
**     purpose, including commercial applications, free of charge and
**     without payment of royalties, subject to the conditions and 
**     restrictions listed below.
**
**  3. You (the user) may copy and adapt the SOFA software and its 
**     algorithms for your own purposes and you may copy and distribute
**     a resulting "derived work" to others on a world-wide, royalty-free 
**     basis, provided that the derived work complies with the following
**     requirements: 
**
**     a) Your work shall be marked or carry a statement that it (i) uses
**        routines and computations derived by you from software provided 
**        by SOFA under license to you; and (ii) does not contain
**        software provided by SOFA or software that has been distributed
**        by or endorsed by SOFA.
**
**     b) The source code of your derived work must contain descriptions
**        of how the derived work is based upon and/or differs from the
**        original SOFA software.
**
**     c) The name(s) of all routine(s) that you distribute shall differ
**        from the SOFA names, even when the SOFA content has not been
**        otherwise changed.
**
**     d) The routine-naming prefix "iau" shall not be used.
**
**     e) The origin of the SOFA components of your derived work must not
**        be misrepresented;  you must not claim that you wrote the
**        original software, nor file a patent application for SOFA
**        software or algorithms embedded in the SOFA software.
**
**     f) These requirements must be reproduced intact in any source
**        distribution and shall apply to anyone to whom you have granted 
**        a further right to modify the source code of your derived work.
**
**  4. In any published work or commercial products which includes
**     results achieved by using the SOFA software, you shall acknowledge
**     that the SOFA software was used in obtaining those results.
**
**  5. You shall not cause the SOFA software to be brought into
**     disrepute, either by misuse, or use for inappropriate tasks, or by
**     inappropriate modification.
**
**  6. The SOFA software is provided "as is" and the Board makes no 
**     warranty as to its use or performance.   The Board does not and 
**     cannot warrant the performance or results which the user may obtain 
**     by using the SOFA software.  The Board makes no warranties, express 
**     or implied, as to non-infringement of third party rights,
**     merchantability, or fitness for any particular purpose.  In no
**     event will the Board be liable to the user for any consequential,
**     incidental, or special damages, including any lost profits or lost
**     savings, even if a Board representative has been advised of such
**     damages, or for any claim by any third party.
**
**  7. The provision of any version of the SOFA software under the terms 
**     and conditions specified herein does not imply that future
**     versions will also be made available under the same terms and
**     conditions.
**
**  Correspondence concerning SOFA software should be addressed as
**  follows:
**
**     Internet email: sofa@rl.ac.uk
**     Postal address: IAU SOFA Center
**                     Rutherford Appleton Laboratory
**                     Chilton, Didcot, Oxon OX11 0QX
**                     United Kingdom
**
**---------------------------------------------------------------------*/
}