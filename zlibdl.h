/*
 *  zlibdl.h -- zlib dynamic load interface
 *
 *  zlibdl.h is a part of binkd project
 *
 *  Copyright (C) 2003  val khokhlov, FIDONet 2:550/180
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version. See COPYING.
 */
/*
 * $Id$
 *
 * $Log$
 * Revision 2.11  2003/10/19 12:21:47  gul
 * Stream compression
 *
 * Revision 2.10  2003/10/03 13:29:57  val
 * fix for older bzlib2 error (uses FILE but doesn't include stdio.h)
 *
 * Revision 2.9  2003/09/25 09:01:28  gul
 * Fix CVS macro again
 *
 *
 */

#ifndef _ZLIBDL_H_
#define _ZLIBDL_H_

/* ---------------- zlib stuff --------------- */
#ifdef WITH_ZLIB

#ifdef ZLIBDL
#define deflateInit_	(*dl_deflateInit_)
#define deflate		(*dl_deflate)
#define deflateEnd	(*dl_deflateEnd)
#define inflateInit_	(*dl_inflateInit_)
#define inflate		(*dl_inflate)
#define inflateEnd	(*dl_inflateEnd)
#endif

#include "zconf.h"
#include "zlib.h"

#endif /* WITH_ZLIB */

/* ---------------- bzlib2 stuff --------------- */
#ifdef WITH_BZLIB2

#ifdef ZLIBDL
#define BZ2_bzCompressInit	(*dl_BZ2_bzCompressInit)
#define BZ2_bzCompress		(*dl_BZ2_bzCompress)
#define BZ2_bzCompressEnd	(*dl_BZ2_bzCompressEnd)
#define BZ2_bzDecompressInit	(*dl_BZ2_bzDecompressInit)
#define BZ2_bzDecompress	(*dl_BZ2_bzDecompress)
#define BZ2_bzDecompressEnd	(*dl_BZ2_bzDecompressEnd)
#endif

#include <stdio.h>
#include "bzlib.h"

#endif /* WITH_BZLIB */

#endif