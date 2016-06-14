#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([libionsim], [0.0.1], [joelfred@slac.stanford.edu])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([-Wall -Werror -Woverride subdir-objects])
AC_CONFIG_SRCDIR([src/ionsim.h])

# Checks for programs.
# AX_PROG_CXX_MPI
# AX_PROG_CC_MPI
AC_PROG_CC
AC_PROG_CXX
AM_PROG_AR
LT_INIT
AC_CONFIG_MACRO_DIRS([m4])

# Checks for libraries.
PKG_CHECK_MODULES([GSL], [gsl >= 1.15])
AX_LIB_HDF5
# AC_CHECK_LIB([gflags], [], [HAVE_GFLAGS=1] [GFLAGS_LIBS="-lgflags"], AC_MSG_WARN([gflags is not installed.]))
GFLAGS_LIBS="-lgflags"
AC_SUBST(GFLAGS_LIBS,[$GFLAGS_LIBS])

MYLDADD="$GSL_LIBS $HDF5_LIBS $GFLAGS_LIBS"
AC_SUBST(MYLDADD,[$MYLDADD])

MYAM_CPPFLAGS="$GSL_CFLAGS $HDF5_CPPFLAGS $GFLAGS_CPPFLAGS"
AC_SUBST(MYAM_CPPFLAGS,[$MYAM_CPPFLAGS])

# AC_LANG_PUSH([C++])
# AC_CHECK_HEADER([gtest/gtest.h], [AC_DEFINE([HAVE_GTEST_H], 1)])
# AC_LANG_POP([C++])
# GTEST_LIB_CHECK([1.7.0])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.


AC_CONFIG_FILES([Makefile
                 src/Makefile
		 src/ionsim.pc
		 ])
AC_OUTPUT