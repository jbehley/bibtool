/*** cnumber.c*****************************************************************
** 
** This file is part of BibTool.
** It is distributed under the GNU General Public License.
** See the file COPYING for details.
** 
** (c) 2016 Gerd Neugebauer
** 
** Net: gene@gerd-neugebauer.de
** 
******************************************************************************/

#include <bibtool/general.h>
#include <bibtool/symbols.h>
#include <bibtool/error.h>
#include <bibtool/type.h>
#include <bibtool/sbuffer.h>
#include "binding.h"
#include "lcore.h"

/*****************************************************************************/
/* Internal Programs                                                         */
/*===========================================================================*/

#ifdef __STDC__
#define _ARG(A) A
#else
#define _ARG(A) ()
#endif

/*****************************************************************************/
/* External Programs                                                         */
/*===========================================================================*/


/*---------------------------------------------------------------------------*/


Binding cn_binding = NULL;		   	   /*                        */

#define Bind(NAME,GET)  bind(cn_binding, symdef(symbol((String)NAME),     \
						0, 0, GET, NULL));

/*-----------------------------------------------------------------------------
** Function:	class_number()
** Type:	void
** Purpose:	
**		
** Arguments:	none
** Returns:	nothing
**___________________________________________________			     */
void class_number()				   /*                        */
{						   /*                        */
  cn_binding = binding(127, NULL);		   /*                        */
 						   /*                        */
  Bind("as.boolean", m_as_boolean);		   /*                        */
  Bind("as.string", m_as_string);		   /*                        */
  Bind("as.number", m_as_number);		   /*                        */
}						   /*------------------------*/

/*---------------------------------------------------------------------------*/
