#include "taia.h"

void taia_pack(char *s,const struct taia *t)
{
  uint32 x;

  tai_pack(s,&t->sec);
  s += 8;

  x = t->atto;
  s[7] = (char)x; x >>= 8;
  s[6] = (char)x; x >>= 8;
  s[5] = (char)x; x >>= 8;
  s[4] = (char)x;
  x = t->nano;
  s[3] = (char)x; x >>= 8;
  s[2] = (char)x; x >>= 8;
  s[1] = (char)x; x >>= 8;
  s[0] = (char)x;
}
