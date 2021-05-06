
/***************************************************************************/
/*           HERE DEFINE THE PROJECT SPECIFIC PUBLIC MACROS                */
/*    These are only in effect in a setting that doesn't use configure     */
/***************************************************************************/

/* Version number of project */
#define IPOPT_VERSION "3.14.0"

/* Major Version number of project */
#define IPOPT_VERSION_MAJOR 3

/* Minor Version number of project */
#define IPOPT_VERSION_MINOR 14

/* Release Version number of project */
#define IPOPT_VERSION_RELEASE 0

/* Define to the C type corresponding to Fortran INTEGER
 * @deprecated Use ipindex instead.
 */
#ifndef IPOPT_FORTRAN_INTEGER_TYPE
#define IPOPT_FORTRAN_INTEGER_TYPE ipindex
#endif

#ifndef IPOPTLIB_EXPORT
#if defined(_WIN32) && defined(DLL_EXPORT)
#define IPOPTLIB_EXPORT __declspec(dllimport)
#else
#define IPOPTLIB_EXPORT
#endif
#endif
