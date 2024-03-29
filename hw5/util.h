#ifndef _util_h
#define _util_h

/**
 * C's mod ('%') operator is mathematically correct, but it may return
 * a negative remainder even when both inputs are nonnegative.  This
 * function always returns a nonnegative remainder (x mod m), as long
 * as x and m are both positive.  This is helpful for computing
 * toroidal boundary conditions.
 */
static inline int 
wrap_mod (int x, int m)
{
//  return (x < 0) ? ((x % m) + m) : (x % m);
	if (x > -1 && x < m) {
		return x;
	} else if (x < 0) {
		return (m-1);
	} else {
		return 0;
	}
}

/**
 * Given neighbor count and current state, return zero if cell will be
 * dead, or nonzero if cell will be alive, in the next round.
 */
static inline char 
alivep (char count, char state)
{
  return (! state && (count == (char) 3)) ||
    (state && (count >= 2) && (count <= 3));
}

#endif /* _util_h */
