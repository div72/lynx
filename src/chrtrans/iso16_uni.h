/*
 * Compile-in this chunk of code unless we've turned it off specifically
 * or in general (id=_iso_8859_16).
 */

#ifndef INCL_CHARSET_iso_8859_16
#define INCL_CHARSET_iso_8859_16 1

/*ifdef NO_CHARSET*/
#ifdef  NO_CHARSET
#undef  NO_CHARSET
#endif
#define NO_CHARSET 0 /* force default to always be active */

/*ifndef NO_CHARSET_iso_8859_16*/
#ifndef NO_CHARSET_iso_8859_16

#if    ALL_CHARSETS
#define NO_CHARSET_iso_8859_16 0
#else
#define NO_CHARSET_iso_8859_16 1
#endif

#endif /* ndef(NO_CHARSET_iso_8859_16) */

#if NO_CHARSET_iso_8859_16
#define UC_CHARSET_SETUP_iso_8859_16 /*nothing*/
#else

/*
 *  uni_hash.tbl
 *
 *  Do not edit this file; it was automatically generated by
 *
 *  ./makeuctb ./iso16_uni.tbl
 *
 */

static const u8 dfont_unicount_iso_8859_16[256] = 
{
	  0,   0,   0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  0,   0,   0,   0,   0,   0,   0,   0,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1,
	  1,   1,   1,   1,   1,   1,   1,   1
};

static const u16 dfont_unitable_iso_8859_16[191] = 
{
	0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026, 0x0027,
	0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e, 0x002f,
	0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036, 0x0037,
	0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e, 0x003f,
	0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046, 0x0047,
	0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e, 0x004f,
	0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056, 0x0057,
	0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e, 0x005f,
	0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066, 0x0067,
	0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e, 0x006f,
	0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0077,
	0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x00a0,
	0x0104, 0x0105, 0x0141, 0x20ac, 0x201e, 0x0160, 0x00a7, 0x0161,
	0x00a9, 0x0218, 0x00ab, 0x0179, 0x00ad, 0x017a, 0x017b, 0x00b0,
	0x00b1, 0x010c, 0x0142, 0x017d, 0x201d, 0x00b6, 0x00b7, 0x017e,
	0x010d, 0x0219, 0x00bb, 0x0152, 0x0153, 0x0178, 0x017c, 0x00c0,
	0x00c1, 0x00c2, 0x0102, 0x00c4, 0x0106, 0x00c6, 0x00c7, 0x00c8,
	0x00c9, 0x00ca, 0x00cb, 0x00cc, 0x00cd, 0x00ce, 0x00cf, 0x0110,
	0x0143, 0x00d2, 0x00d3, 0x00d4, 0x0150, 0x00d6, 0x015a, 0x0170,
	0x00d9, 0x00da, 0x00db, 0x00dc, 0x0118, 0x021a, 0x00df, 0x00e0,
	0x00e1, 0x00e2, 0x0103, 0x00e4, 0x0107, 0x00e6, 0x00e7, 0x00e8,
	0x00e9, 0x00ea, 0x00eb, 0x00ec, 0x00ed, 0x00ee, 0x00ef, 0x0111,
	0x0144, 0x00f2, 0x00f3, 0x00f4, 0x0151, 0x00f6, 0x015b, 0x0171,
	0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x0119, 0x021b, 0x00ff
};

/* static struct unipair_str repl_map_iso_8859_16[]; */

static const struct unimapdesc_str dfont_replacedesc_iso_8859_16 = {0,NULL,0,1};
#define UC_CHARSET_SETUP_iso_8859_16 UC_Charset_Setup("iso-8859-16",\
"Latin 10 (ISO-8859-16)",\
dfont_unicount_iso_8859_16,dfont_unitable_iso_8859_16,191,\
dfont_replacedesc_iso_8859_16,160,2,0)

#endif /* NO_CHARSET_iso_8859_16 */

#endif /* INCL_CHARSET_iso_8859_16 */
