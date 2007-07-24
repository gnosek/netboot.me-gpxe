#ifndef _BITS_ERRFILE_H
#define _BITS_ERRFILE_H

/**
 * @addtogroup errfile Error file identifiers
 * @{
 */

#define ERRFILE_umalloc		( ERRFILE_ARCH | ERRFILE_CORE | 0x00000000 )
#define ERRFILE_memmap		( ERRFILE_ARCH | ERRFILE_CORE | 0x00010000 )
#define ERRFILE_pnpbios		( ERRFILE_ARCH | ERRFILE_CORE | 0x00020000 )
#define ERRFILE_smbios		( ERRFILE_ARCH | ERRFILE_CORE | 0x00030000 )
#define ERRFILE_biosint		( ERRFILE_ARCH | ERRFILE_CORE | 0x00040000 )
#define ERRFILE_int13		( ERRFILE_ARCH | ERRFILE_CORE | 0x00050000 )

#define ERRFILE_bootsector     ( ERRFILE_ARCH | ERRFILE_IMAGE | 0x00000000 )
#define ERRFILE_bzimage	       ( ERRFILE_ARCH | ERRFILE_IMAGE | 0x00010000 )
#define ERRFILE_eltorito       ( ERRFILE_ARCH | ERRFILE_IMAGE | 0x00020000 )
#define ERRFILE_multiboot      ( ERRFILE_ARCH | ERRFILE_IMAGE | 0x00030000 )
#define ERRFILE_nbi	       ( ERRFILE_ARCH | ERRFILE_IMAGE | 0x00040000 )
#define ERRFILE_pxe_image      ( ERRFILE_ARCH | ERRFILE_IMAGE | 0x00050000 )

#define ERRFILE_undi		 ( ERRFILE_ARCH | ERRFILE_NET | 0x00000000 )
#define ERRFILE_undiload	 ( ERRFILE_ARCH | ERRFILE_NET | 0x00010000 )
#define ERRFILE_undinet		 ( ERRFILE_ARCH | ERRFILE_NET | 0x00020000 )
#define ERRFILE_undionly	 ( ERRFILE_ARCH | ERRFILE_NET | 0x00030000 )
#define ERRFILE_undirom		 ( ERRFILE_ARCH | ERRFILE_NET | 0x00040000 )

/** @} */

#endif /* _BITS_ERRFILE_H */
