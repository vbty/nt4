/*
 * project.hpp - Shell project header file for Internet Shortcut Shell
 *               extension DLL.
 */


/* Common Headers
 *****************/

#include "project.h"


/* System Headers
 *****************/

#include <stdio.h>

#include <prsht.h>

#ifndef _INTSHCUT_
#define _INTSHCUT_               /* for intshcut.h */
#endif
#include <intshcut.h>


/* Project Headers
 ******************/

/* The order of the following include files is significant. */

#include "olestock.h"
#include "olevalid.h"
#include "shlstock.h"
#include "shlvalid.h"
#include "url.h"
#include "inline.hpp"
#include "memmgr.hpp"
#include "comcpp.hpp"
#include "refcount.hpp"
#include "intshcut.hpp"
#include "dataobj.hpp"
#include "persist.hpp"
#include "extricon.h"
#include "propsht.hpp"

