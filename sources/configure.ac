dnl#                                               -*- Autoconf -*-
dnl# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([QuickTimeTcl],[3.1],[matben@privat.utfors.se])
AC_CONFIG_SRCDIR([Broadcast.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign 1.11 no-installinfo dejagnu])
AM_MAINTAINER_MODE

# Checks for programs.
AC_LANG([C])
AC_PROG_CC
AC_PROG_OBJC
AC_PROG_INSTALL
AC_PATH_PROG([XCODEBUILD],[xcodebuild])dnl

# Checks for libraries.
AC_CHECK_LIB([Tk],[Tk_PhotoPutBlock])dnl

# Checks for header files.
AC_PATH_X
AC_PATH_XTRA
AC_CHECK_HEADERS([AERegistry.h AE/AERegistry.h Carbon/Carbon.h cssmconfig.h \
                  fcntl.h HIToolbox/Dialogs.h limits.h QD/QuickdrawTypes.h \
                  QuickTime/QuickTime.h stddef.h sys/file.h sys/time.h \
                  Tcl/tcl.h Tk/Tk.h Tk/tkInt.h X.h X11/X.h])dnl

  ## Keep autoscan happy:
if test "x${ac_cv_header_unistd_h}" = "x"; then
  test -z "${ac_cv_header_unistd_h}"
  AC_CHECK_HEADERS([unistd.h])
fi

# Checks for typedefs, structures, and compiler characteristics.
AC_C_PROTOTYPES
AC_HEADER_STDBOOL dnl# also "_CHECK"s it
AC_TYPE_SIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_CHECK_DECL([blackColor])
AC_CHECK_DECL([blueColor])
AC_CHECK_DECL([cancel])
AC_CHECK_DECL([cTable])
AC_CHECK_DECL([cType])
AC_CHECK_DECL([ds])
AC_CHECK_DECL([i])
AC_CHECK_DECL([index])
AC_CHECK_DECL([resultObjPtr])
AC_CHECK_DECL([type8Char])
AC_CHECK_DECL([typePtr])
AC_CHECK_DECL([uint16])
AC_CHECK_DECL([uint32])
AC_CHECK_DECL([whiteColor])dnl

# Checks for library functions.
AC_CHECK_FUNCS([memmove memset strcasecmp strncasecmp])dnl

# Output.
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
