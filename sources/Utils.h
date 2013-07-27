/*
 *  Utils.h
 *  QuickTimeTcl
 *
 *  Created by System Administrator on 7/26/13.
 *
 */

#ifndef _HAVE_UTILS_H
#define _HAVE_UTILS_H

// includes

#include <stdio.h>

#ifndef INCLUDED_QUICKTIMETCL_H
	#include "QuickTimeTcl.h"
#endif

// Prototypes

int GetMovieStartTimeFromObj( Tcl_Interp *interp, Movie movie, Tcl_Obj *obj, long *timeValuePtr );
int GetMovieDurationFromObj( Tcl_Interp *interp, Movie movie, Tcl_Obj *obj, long movTime, long *durValuePtr );

#endif
