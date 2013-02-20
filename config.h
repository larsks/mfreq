#ifndef _CONFIG_H
#define _CONFIG_H

/* Define this if you have htole16() and friends in
   <endian.h>. */
//#undef HAVE_ENDIAN_H

#ifndef SYSCONFDIR
#define SYSCONFDIR	"/etc/fido/mfreq"
#endif

#ifndef TMPDIR
#define TMPDIR "/var/tmp"
#endif

#endif // _CONFIG_H

