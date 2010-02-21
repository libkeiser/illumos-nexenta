/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */
/* $Id: acconfig.h,v 1.145 2002/09/26 00:38:48 tim Exp $ */
/*
 * Copyright 2009 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#ifndef	_CONFIG_H
#define	_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif


/* Generated automatically from acconfig.h by autoheader. */
/* Please make your changes there */


/* Define to a Set Process Title type if your system is */
/* supported by bsd-setproctitle.c */
/* #undef SPT_TYPE */

/* setgroups() NOOP allowed */
/* #undef SETGROUPS_NOOP */

/* SCO workaround */
/* #undef BROKEN_SYS_TERMIO_H */

/* If your header files don't define LOGIN_PROGRAM, then use this (detected) */
/* from environment and PATH */
#define	LOGIN_PROGRAM_FALLBACK "/usr/bin/login"

/* Define if your password has a pw_class field */
/* #undef HAVE_PW_CLASS_IN_PASSWD */

/* Define if your password has a pw_expire field */
/* #undef HAVE_PW_EXPIRE_IN_PASSWD */

/* Define if your password has a pw_change field */
/* #undef HAVE_PW_CHANGE_IN_PASSWD */

/* Define if your system uses access rights style file descriptor passing */
#define	HAVE_ACCRIGHTS_IN_MSGHDR 1

/* Define if your system uses ancillary data style file descriptor passing */
/* #undef HAVE_CONTROL_IN_MSGHDR */

/* Define if you system's inet_ntoa is busted (e.g. Irix gcc issue) */
/* #undef BROKEN_INET_NTOA */

/* Define if your system defines sys_errlist[] */
#define	HAVE_SYS_ERRLIST 1

/* Define if your system defines sys_nerr */
#define	HAVE_SYS_NERR 1

/* Define if your system choked on IP TOS setting */
#define	IP_TOS_IS_BROKEN 1

/* Define if you have the getuserattr function.  */
/* #undef HAVE_GETUSERATTR */

/* Work around problematic Linux PAM modules handling of PAM_TTY */
#define	PAM_TTY_KLUDGE 1

/* Define if your snprintf is busted */
/* #undef BROKEN_SNPRINTF */

/* Define if you are on Cygwin */
/* #undef HAVE_CYGWIN */

/* Define if you have a broken realpath. */
/* #undef BROKEN_REALPATH */

/* Define if you are on NEWS-OS */
/* #undef HAVE_NEWS4 */

/* Define if you want to enable PAM support */
#define	USE_PAM 1

/* Define if you want to enable AIX4's authenticate function */
/* #undef WITH_AIXAUTHENTICATE */

/*
 * Define if you have/want arrays (cluster-wide session managment, not C
 * arrays)
 */
/* #undef WITH_IRIX_ARRAY */

/* Define if you want IRIX project management */
/* #undef WITH_IRIX_PROJECT */

/* Define if you want IRIX audit trails */
/* #undef WITH_IRIX_AUDIT */

/* Define if you want IRIX kernel jobs */
/* #undef WITH_IRIX_JOBS */

/* Location of PRNGD/EGD random number socket */
/* #undef PRNGD_SOCKET */

/* Port number of PRNGD/EGD random number socket */
/* #undef PRNGD_PORT */

/* Builtin PRNG command timeout */
#define	ENTROPY_TIMEOUT_MSEC 200

/* non-privileged user for privilege separation */
#define	SSH_PRIVSEP_USER "sshd"

/* Define if you want to install preformatted manpages. */
/* #undef MANTYPE */

/* Define if your ssl headers are included with #include <openssl/header.h>  */
#define	HAVE_OPENSSL 1

/* Define if Solaris' OpenSSL lacks AES support */
#define	SOLARIS_OPENSSL_NO_AES 1

/* Define if Solaris-style Least Privilege is available */
#define	HAVE_SOLARIS_PRIVILEGE 1

/* Define if you want Sun's alternative privilege separation */
#define	ALTPRIVSEP

/* Define if you have Solaris-style Contracts */
#define	HAVE_SOLARIS_CONTRACTS 1

/* Define if SVR4-style libcmd (for accessing /etc/default/ files) */
#define	HAVE_DEFOPEN 1

/*
 * Define if you are linking against RSAref. Used only to print the right
 * message at run-time.
 */
/* #undef RSAREF */

/* struct timeval */
#define	HAVE_STRUCT_TIMEVAL 1

/* struct utmp and struct utmpx fields */
/* #undef HAVE_HOST_IN_UTMP */
#define	HAVE_HOST_IN_UTMPX 1
/* #undef HAVE_ADDR_IN_UTMP */
/* #undef HAVE_ADDR_IN_UTMPX */
/* #undef HAVE_ADDR_V6_IN_UTMP */
/* #undef HAVE_ADDR_V6_IN_UTMPX */
#define	HAVE_SYSLEN_IN_UTMPX 1
#define	HAVE_PID_IN_UTMP 1
#define	HAVE_TYPE_IN_UTMP 1
#define	HAVE_TYPE_IN_UTMPX 1
/* #undef HAVE_TV_IN_UTMP */
#define	HAVE_TV_IN_UTMPX 1
#define	HAVE_ID_IN_UTMP 1
#define	HAVE_ID_IN_UTMPX 1
#define	HAVE_EXIT_IN_UTMP 1
#define	HAVE_TIME_IN_UTMP 1
#define	HAVE_TIME_IN_UTMPX 1

/* Define if you don't want to use your system's login() call */
/* #undef DISABLE_LOGIN */

/* Define if you don't want to use pututline() etc. to write [uw]tmp */
/* #undef DISABLE_PUTUTLINE */

/* Define if you don't want to use pututxline() etc. to write [uw]tmpx */
/* #undef DISABLE_PUTUTXLINE */

/* Define if you don't want to use lastlog */
/* #undef DISABLE_LASTLOG */

/* Define if you don't want to use lastlog in session.c */
/* #undef NO_SSH_LASTLOG */

/* Define if you don't want to use utmp */
#define	DISABLE_UTMP 1

/* Define if you don't want to use utmpx */
/* #undef DISABLE_UTMPX */

/* Define if you don't want to use wtmp */
#define	DISABLE_WTMP 1

/* Define if you don't want to use wtmpx */
/* #undef DISABLE_WTMPX */

/* Some systems need a utmpx entry for /bin/login to work */
#define	LOGIN_NEEDS_UTMPX 1

/* Some versions of /bin/login need the TERM supplied on the commandline */
#define	LOGIN_NEEDS_TERM 1

/* Define if your login program cannot handle end of options ("--") */
/* #undef LOGIN_NO_ENDOPT */

/* Define if you want to specify the path to your lastlog file */
#define	CONF_LASTLOG_FILE "/var/adm/lastlog"

/* Define if you want to specify the path to your utmp file */
/* #undef CONF_UTMP_FILE */

/* Define if you want to specify the path to your wtmp file */
/* #undef CONF_WTMP_FILE */

/* Define if you want to specify the path to your utmpx file */
/* #undef CONF_UTMPX_FILE */

/* Define if you want to specify the path to your wtmpx file */
/* #undef CONF_WTMPX_FILE */

/* Define if you want external askpass support */
/* #undef USE_EXTERNAL_ASKPASS */

/* Define if libc defines __progname */
/* #undef HAVE___PROGNAME */

/* Define if compiler implements __FUNCTION__ */
#define	HAVE___FUNCTION__ 1

/* Define if compiler implements __func__ */
#define	HAVE___func__ 1

/* Define if you want GSS-API support */
#define	GSSAPI 1

/* Define if you have <gssapi/gssapi.h> */
#define	SUNW_GSSAPI 1

/* Define if you have GSS_Store_cred() */
#define	HAVE_GSS_STORE_CRED  1

/* Define if you have __gss_userok() */
#define	HAVE___GSS_USEROK 1

/* Define for simple authorization of GSS-API principals */
/* #undef GSSAPI_SIMPLE_USEROK */

/* Define if you have gsscred_name_to_unix_cred() (Solaris) */
#define	HAVE_GSSCRED_API 1

/* Define if you have __gss_oid_to_mech() */
#define	HAVE_GSS_OID_TO_MECH 1

/* Define if you have gss_oid_to_str() */
#define	HAVE_GSS_OID_TO_STR 1

/* Define if you want support for MIT krb5 GSS internals */
/* #undef KRB5_GSS */

/* Define if you want support for GSI GSS internals */
/* #undef GSI_GSS */

/* Define if you want raw Kerberos 5 support */
/* #undef KRB5 */

/* Define if you want GSI/Globus authentication support */
/* #undef GSI */

/* Define this if you are using the Heimdal version of Kerberos V5 */
/* #undef HEIMDAL */

/* Define if you want Kerberos 4 support */
/* #undef KRB4 */

/* Define if you want AFS support */
/* #undef AFS */

/* Define if you want S/Key support */
/* #undef SKEY */

/* Define if you want TCP Wrappers support */
#define	LIBWRAP 1

/* Define if your libraries define login() */
/* #undef HAVE_LOGIN */

/* Define if your libraries define getpagesize() */
#define	HAVE_GETPAGESIZE 1

/* Define if xauth is found in your path */
#define	XAUTH_PATH "/usr/bin/xauth"

/* Define if rsh is found in your path */
#define	RSH_PATH "/usr/bin/rsh"

/* Define if you want to allow MD5 passwords */
/* #undef HAVE_MD5_PASSWORDS */

/* Define if you want to disable shadow passwords */
/* #undef DISABLE_SHADOW */

/* Define if you want to use shadow password expire field */
/* #undef HAS_SHADOW_EXPIRE */

/* Define if you have Digital Unix Security Integration Architecture */
/* #undef HAVE_OSF_SIA */

/* Define if you have getpwanam(3) [SunOS 4.x] */
/* #undef HAVE_GETPWANAM */

/* Define if you have an old version of PAM which takes only one argument */
/* to pam_strerror */
/* #undef HAVE_OLD_PAM */

/* Define if you are using Solaris-derived PAM which passes pam_messages  */
/* to the conversation function with an extra level of indirection */
#define	PAM_SUN_CODEBASE 1

/* Set this to your mail directory if you don't have maillock.h */
/* #undef MAIL_DIRECTORY */

/* Data types */
#define	HAVE_U_INT 1
#define	HAVE_INTXX_T 1
/* #undef HAVE_U_INTXX_T */
#define	HAVE_UINTXX_T 1
#define	HAVE_INT64_T 1
/* #undef HAVE_U_INT64_T */
#define	HAVE_U_CHAR 1
#define	HAVE_SIZE_T 1
#define	HAVE_SSIZE_T 1
#define	HAVE_CLOCK_T 1
#define	HAVE_MODE_T 1
#define	HAVE_PID_T 1
#define	HAVE_SA_FAMILY_T 1
#define	HAVE_STRUCT_SOCKADDR_STORAGE 1
#define	HAVE_STRUCT_ADDRINFO 1
#define	HAVE_STRUCT_IN6_ADDR 1
#define	HAVE_STRUCT_SOCKADDR_IN6 1

/* Fields in struct sockaddr_storage */
#define	HAVE_SS_FAMILY_IN_SS 1
/* #undef HAVE___SS_FAMILY_IN_SS */

/* Define if you have /dev/ptmx */
#define	HAVE_DEV_PTMX 1

/* Define if you have /dev/ptc */
/* #undef HAVE_DEV_PTS_AND_PTC */

/* Define if you need to use IP address instead of hostname in $DISPLAY */
/* #undef IPADDR_IN_DISPLAY */

/*
 * Specify the default $PATH. While /bin is a symbolic link to /usr/bin in
 * Solaris, to include both of them there may help when users use
 * ChrootDirectory options with plain SSH connections, without their own shell
 * profiles.
 */
#define	USER_PATH "/usr/bin:/bin"

/* Specify location of ssh.pid */
#define	_PATH_SSH_PIDDIR "/var/run"

/* Use IPv4 for connection by default, IPv6 can still if explicity asked */
/* #undef IPV4_DEFAULT */

/* getaddrinfo is broken (if present) */
/* #undef BROKEN_GETADDRINFO */

/* Workaround more Linux IPv6 quirks */
/* #undef DONT_TRY_OTHER_AF */

/* Detect IPv4 in IPv6 mapped addresses and treat as IPv4 */
#define	IPV4_IN_IPV6 1

/* Define if you have BSD auth support */
/* #undef BSD_AUTH */

/* Define if X11 doesn't support AF_UNIX sockets on that system */
/* #undef NO_X11_UNIX_SOCKETS */

/* Define if the concept of ports only accessible to superusers isn't known */
/* #undef NO_IPPORT_RESERVED_CONCEPT */

/* Needed for SCO and NeXT */
/* #undef BROKEN_SAVED_UIDS */

/* Define if your system glob() function has the GLOB_ALTDIRFUNC extension */
/* #undef GLOB_HAS_ALTDIRFUNC */

/* Define if your system glob() function has gl_matchc options in glob_t */
/* #undef GLOB_HAS_GL_MATCHC */

/*
 * Define in your struct dirent expects you to allocate extra space for
 * d_name
 */
#define	BROKEN_ONE_BYTE_DIRENT_D_NAME 1

/* Define if your getopt(3) defines and uses optreset */
/* #undef HAVE_GETOPT_OPTRESET */

/* Define on *nto-qnx systems */
/* #undef MISSING_NFDBITS */

/* Define on *nto-qnx systems */
/* #undef MISSING_HOWMANY */

/* Define on *nto-qnx systems */
/* #undef MISSING_FD_MASK */

/*
 * Use libedit or libtecla for sftp
 * If both USE_LIBEDIT and USE_LIBTECLA are defined, then USE_LIBEDIT will
 * have higher precedence.
 */
#undef USE_LIBEDIT
#define	USE_LIBTECLA	1

/* Define if you want to use OpenSSL's internally seeded PRNG only */
#define	OPENSSL_PRNG_ONLY 1

/* Define if you shouldn't strip 'tty' from your ttyname in [uw]tmp */
/* #undef WITH_ABBREV_NO_TTY */

/* Define if you want a different $PATH for the superuser */
#define	SUPERUSER_PATH "/usr/sbin:/usr/bin"

/* Path that unprivileged child will chroot() to in privep mode */
/* #undef PRIVSEP_PATH */

/* Define if your platform needs to skip post auth file descriptor passing */
/* #undef DISABLE_FD_PASSING */


/* Define to 1 if the `getpgrp' function requires zero arguments. */
#define	GETPGRP_VOID 1

/* Define to 1 if you have the `arc4random' function. */
/* #undef HAVE_ARC4RANDOM */

/* Define to 1 if you have the `asprintf' function. */
#define	HAVE_ASPRINTF 1

/* Define to 1 if you have the `b64_ntop' function. */
/* #undef HAVE_B64_NTOP */

/* Define to 1 if you have the `bcopy' function. */
#define	HAVE_BCOPY 1

/* Define to 1 if you have the `bindresvport_sa' function. */
/* #undef HAVE_BINDRESVPORT_SA */

/* Define to 1 if you have the <bstring.h> header file. */
/* #undef HAVE_BSTRING_H */

/* Define to 1 if you have the `clock' function. */
#define	HAVE_CLOCK 1

/* Define to 1 if you have the <crypt.h> header file. */
#define	HAVE_CRYPT_H 1

/* Define to 1 if you have the `dirname' function. */
#define	HAVE_DIRNAME 1

/* Define to 1 if you have the <endian.h> header file. */
/* #undef HAVE_ENDIAN_H */

/* Define to 1 if you have the `endutent' function. */
#define	HAVE_ENDUTENT 1

/* Define to 1 if you have the `endutxent' function. */
#define	HAVE_ENDUTXENT 1

/* Define to 1 if you have the `fchmod' function. */
#define	HAVE_FCHMOD 1

/* Define to 1 if you have the `fchown' function. */
#define	HAVE_FCHOWN 1

/* Define to 1 if you have the <floatingpoint.h> header file. */
#define	HAVE_FLOATINGPOINT_H 1

/* Define to 1 if you have the `freeaddrinfo' function. */
#define	HAVE_FREEADDRINFO 1

/* Define to 1 if you have the `futimes' function. */
/* #undef HAVE_FUTIMES */

/* Define to 1 if you have the `gai_strerror' function. */
#define	HAVE_GAI_STRERROR 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define	HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getcwd' function. */
#define	HAVE_GETCWD 1

/* Define to 1 if you have the `getgrouplist' function. */
/* #undef HAVE_GETGROUPLIST */

/* Define to 1 if you have the `getluid' function. */
/* #undef HAVE_GETLUID */

/* Define to 1 if you have the `getnameinfo' function. */
#define	HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getopt' function. */
#define	HAVE_GETOPT 1

/* Define to 1 if you have the <getopt.h> header file. */
/* #undef HAVE_GETOPT_H */

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the `getpeerucred' function. */
#define	HAVE_GETPEERUCRED 1

/* Define to 1 if you have the `getpwanam' function. */
/* #undef HAVE_GETPWANAM */

/* Define to 1 if you have the `getrlimit' function. */
#define	HAVE_GETRLIMIT 1

/* Define to 1 if you have the `getrusage' function. */
#define	HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettimeofday' function. */
#define	HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `getttyent' function. */
/* #undef HAVE_GETTTYENT */

/* Define to 1 if you have the `getutent' function. */
#define	HAVE_GETUTENT 1

/* Define to 1 if you have the `getutid' function. */
#define	HAVE_GETUTID 1

/* Define to 1 if you have the `getutline' function. */
#define	HAVE_GETUTLINE 1

/* Define to 1 if you have the `getutxent' function. */
#define	HAVE_GETUTXENT 1

/* Define to 1 if you have the `getutxid' function. */
#define	HAVE_GETUTXID 1

/* Define to 1 if you have the `getutxline' function. */
#define	HAVE_GETUTXLINE 1

/* Define to 1 if you have the `glob' function. */
#define	HAVE_GLOB 1

/* Define to 1 if you have the <glob.h> header file. */
#define	HAVE_GLOB_H 1

/* Define to 1 if you have the <ia.h> header file. */
/* #undef HAVE_IA_H */

/* Define to 1 if you have the `inet_aton' function. */
/* #undef HAVE_INET_ATON */

/* Define to 1 if you have the `inet_ntoa' function. */
#define	HAVE_INET_NTOA 1

/* Define to 1 if you have the `inet_ntop' function. */
#define	HAVE_INET_NTOP 1

/* Define to 1 if you have the `innetgr' function. */
#define	HAVE_INNETGR 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define	HAVE_INTTYPES_H 1

/* Define to 1 if you have the <krb.h> header file. */
/* #undef HAVE_KRB_H */

/* Define to 1 if you have the <lastlog.h> header file. */
#define	HAVE_LASTLOG_H 1

/* Define to 1 if you have the `crypt' library (-lcrypt). */
/* #undef HAVE_LIBCRYPT */

/* Define to 1 if you have the `des' library (-ldes). */
/* #undef HAVE_LIBDES */

/* Define to 1 if you have the `des425' library (-ldes425). */
/* #undef HAVE_LIBDES425 */

/* Define to 1 if you have the `dl' library (-ldl). */
#define	HAVE_LIBDL 1

/* Define to 1 if you have the <libgen.h> header file. */
#define	HAVE_LIBGEN_H 1

/* Define to 1 if you have the `krb' library (-lkrb). */
/* #undef HAVE_LIBKRB */

/* Define to 1 if you have the `krb4' library (-lkrb4). */
/* #undef HAVE_LIBKRB4 */

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define	HAVE_LIBNSL 1

/* Define to 1 if you have the `pam' library (-lpam). */
#define	HAVE_LIBPAM 1

/* Define to 1 if you have the `resolv' library (-lresolv). */
/* #undef HAVE_LIBRESOLV */

/* Define to 1 if you have the `sectok' library (-lsectok). */
/* #undef HAVE_LIBSECTOK */

/* Define to 1 if you have the `socket' library (-lsocket). */
#define	HAVE_LIBSOCKET 1

/* Define to 1 if you have the <libutil.h> header file. */
/* #undef HAVE_LIBUTIL_H */

/* Define to 1 if you have the `xnet' library (-lxnet). */
/* #undef HAVE_LIBXNET */

/* Define to 1 if you have the `z' library (-lz). */
#define	HAVE_LIBZ 1

/* Define to 1 if you have the <limits.h> header file. */
#define	HAVE_LIMITS_H 1

/* Define to 1 if you have the <login_cap.h> header file. */
/* #undef HAVE_LOGIN_CAP_H */

/* Define to 1 if you have the `login_getcapbool' function. */
/* #undef HAVE_LOGIN_GETCAPBOOL */

/* Define to 1 if you have the <login.h> header file. */
/* #undef HAVE_LOGIN_H */

/* Define to 1 if you have the `logout' function. */
/* #undef HAVE_LOGOUT */

/* Define to 1 if you have the `logwtmp' function. */
/* #undef HAVE_LOGWTMP */

/* Define to 1 if you have the <maillock.h> header file. */
#define	HAVE_MAILLOCK_H 1

/* Define to 1 if you have the `md5_crypt' function. */
/* #undef HAVE_MD5_CRYPT */

/* Define to 1 if you have the `memmove' function. */
#define	HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define	HAVE_MEMORY_H 1

/* Define to 1 if you have mkstemp, mkstemps and mkdtemp */
#define	HAVE_MKDTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define	HAVE_MMAP 1

/* Define to 1 if you have the <netdb.h> header file. */
#define	HAVE_NETDB_H 1

/* Define to 1 if you have the <netgroup.h> header file. */
/* #undef HAVE_NETGROUP_H */

/* Define to 1 if you have the <netinet/in_systm.h> header file. */
#define	HAVE_NETINET_IN_SYSTM_H 1

/* Define to 1 if you have the `ngetaddrinfo' function. */
/* #undef HAVE_NGETADDRINFO */

/* Define to 1 if you have the `ogetaddrinfo' function. */
/* #undef HAVE_OGETADDRINFO */

/* Define to 1 if you have the `openpty' function. */
/* #undef HAVE_OPENPTY */

/* Define to 1 if you have the `pam_getenvlist' function. */
#define	HAVE_PAM_GETENVLIST 1

/* Define to 1 if you have the <paths.h> header file. */
/* #undef HAVE_PATHS_H */

/* Define to 1 if you have the <pty.h> header file. */
/* #undef HAVE_PTY_H */

/* Define to 1 if you have the `pututline' function. */
#define	HAVE_PUTUTLINE 1

/* Define to 1 if you have the `pututxline' function. */
#define	HAVE_PUTUTXLINE 1

/* Define to 1 if you have the `readpassphrase' function. */
/* #undef HAVE_READPASSPHRASE */

/* Define to 1 if you have the <readpassphrase.h> header file. */
/* #undef HAVE_READPASSPHRASE_H */

/* Define to 1 if you have the `realpath' function. */
#define	HAVE_REALPATH 1

/* Define to 1 if you have the `recvmsg' function. */
#define	HAVE_RECVMSG 1

/* Define to 1 if you have the <rpc/types.h> header file. */
#define	HAVE_RPC_TYPES_H 1

/* Define to 1 if you have the `rresvport_af' function. */
#define	HAVE_RRESVPORT_AF 1

/* Define to 1 if you have the <sectok.h> header file. */
/* #undef HAVE_SECTOK_H */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
#define	HAVE_SECURITY_PAM_APPL_H 1

/* Define to 1 if you have the `sendmsg' function. */
#define	HAVE_SENDMSG 1

/* Define to 1 if you have the `setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if you have the `setegid' function. */
#define	HAVE_SETEGID 1

/* Define to 1 if you have the `setenv' function. */
#define	HAVE_SETENV 1

/* Define to 1 if you have the `seteuid' function. */
#define	HAVE_SETEUID 1

/* Define to 1 if you have the `setgroups' function. */
#define	HAVE_SETGROUPS 1

/* Define to 1 if you have the `setlogin' function. */
/* #undef HAVE_SETLOGIN */

/* Define to 1 if you have the `setluid' function. */
/* #undef HAVE_SETLUID */

/* Define to 1 if you have the `setpcred' function. */
/* #undef HAVE_SETPCRED */

/* Define to 1 if you have the `setproctitle' function. */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `setresgid' function. */
/* #undef HAVE_SETRESGID */

/* Define to 1 if you have the `setreuid' function. */
#define	HAVE_SETREUID 1

/* Define to 1 if you have the `setrlimit' function. */
#define	HAVE_SETRLIMIT 1

/* Define to 1 if you have the `setsid' function. */
#define	HAVE_SETSID 1

/* Define to 1 if you have the `setutent' function. */
#define	HAVE_SETUTENT 1

/* Define to 1 if you have the `setutxent' function. */
#define	HAVE_SETUTXENT 1

/* Define to 1 if you have the `setvbuf' function. */
#define	HAVE_SETVBUF 1

/* Define to 1 if you have the <shadow.h> header file. */
#define	HAVE_SHADOW_H 1

/* Define to 1 if you have the `sigaction' function. */
#define	HAVE_SIGACTION 1

/* Define to 1 if you have the `sigvec' function. */
/* #undef HAVE_SIGVEC */

/* Define to 1 if the system has the type `sig_atomic_t'. */
#define	HAVE_SIG_ATOMIC_T 1

/* Define to 1 if you have the `snprintf' function. */
#define	HAVE_SNPRINTF 1

/* Define to 1 if you have the `socketpair' function. */
#define	HAVE_SOCKETPAIR 1

/* Define to 1 if you have the <stddef.h> header file. */
#define	HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define	HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror' function. */
#define	HAVE_STRERROR 1

/* Define to 1 if you have the `strftime' function. */
#define	HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define	HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define	HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define	HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define	HAVE_STRLCPY 1

/* Define to 1 if you have the `strmode' function. */
/* #undef HAVE_STRMODE */

/* Define to 1 if `st_blksize' is member of `struct stat'. */
#define	HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if you have the `sysconf' function. */
#define	HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/bsdtty.h> header file. */
/* #undef HAVE_SYS_BSDTTY_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
/* #undef HAVE_SYS_CDEFS_H */


/* Define to 1 if you have the <sys/mman.h> header file. */
#define	HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define	HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define	HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/stropts.h> header file. */
#define	HAVE_SYS_STROPTS_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define	HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define	HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define	HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define	HAVE_SYS_UN_H 1

/* Define to 1 if you have the `tcgetpgrp' function. */
#define	HAVE_TCGETPGRP 1

/* Define to 1 if you have the `time' function. */
#define	HAVE_TIME 1

/* Define to 1 if you have the <time.h> header file. */
#define	HAVE_TIME_H 1

/* Define to 1 if you have the <tmpdir.h> header file. */
/* #undef HAVE_TMPDIR_H */

/* Define to 1 if you have the `truncate' function. */
#define	HAVE_TRUNCATE 1

/* Define to 1 if you have the <ttyent.h> header file. */
/* #undef HAVE_TTYENT_H */

/* Define to 1 if you have the <ucred.h> header file. */
#define	HAVE_UCRED_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define	HAVE_UNISTD_H 1

/* Define to 1 if you have the `updwtmp' function. */
#define	HAVE_UPDWTMP 1

/* Define to 1 if you have the <usersec.h> header file. */
/* #undef HAVE_USERSEC_H */

/* Define to 1 if you have the <util.h> header file. */
/* #undef HAVE_UTIL_H */

/* Define to 1 if you have the `utimes' function. */
#define	HAVE_UTIMES 1

/* Define to 1 if you have the <utime.h> header file. */
#define	HAVE_UTIME_H 1

/* Define to 1 if you have the `utmpname' function. */
#define	HAVE_UTMPNAME 1

/* Define to 1 if you have the `utmpxname' function. */
#define	HAVE_UTMPXNAME 1

/* Define to 1 if you have the <utmpx.h> header file. */
#define	HAVE_UTMPX_H 1

/* Define to 1 if you have the <utmp.h> header file. */
#define	HAVE_UTMP_H 1

/* Define to 1 if you have the `vasprintf' function. */
#define	HAVE_VASPRINTF 1

/* Define to 1 if you have the `vhangup' function. */
#define	HAVE_VHANGUP 1

/* Define to 1 if you have the `vsnprintf' function. */
#define	HAVE_VSNPRINTF 1

/* Define to 1 if you have the `waitpid' function. */
#define	HAVE_WAITPID 1

/* Define to 1 if you have the `_getpty' function. */
/* #undef HAVE__GETPTY */

/* Define to 1 if you have the `__b64_ntop' function. */
/* #undef HAVE___B64_NTOP */

/* Define to the address where bug reports for this package should be sent. */
#define	PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define	PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define	PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define	PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define	PACKAGE_VERSION ""

/* The size of a `char', as computed by sizeof. */
#define	SIZEOF_CHAR 1

/* The size of a `int', as computed by sizeof. */
#define	SIZEOF_INT 4

/* The size of a `long int', as computed by sizeof. */
#define	SIZEOF_LONG_INT 4

/* The size of a `long long int', as computed by sizeof. */
#define	SIZEOF_LONG_LONG_INT 8

/* The size of a `short int', as computed by sizeof. */
#define	SIZEOF_SHORT_INT 2

/* Define to 1 if you have the ANSI C header files. */
#define	STDC_HEADERS 1

/*
 * Define to 1 if your processor stores words with the most significant byte
 * first (like Motorola and SPARC, unlike Intel and VAX).
 */
#define	WORDS_BIGENDIAN 1

/* Number of bits in a file offset, on hosts where this is settable. */
#define	_FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/*
 * Define as `__inline' if that's what the C compiler calls it, or to nothing if
 * it is not supported.
 */
/* #undef inline */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define for BSM auditing (Solaris) support */
#define	HAVE_BSM 1

/* Define if compiling in ON */
#define	SUNW_SSH 1

/* ******************* Shouldn't need to edit below this line ************** */

#ifdef __cplusplus
}
#endif

#endif /* _CONFIG_H */
