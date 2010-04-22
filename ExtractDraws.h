// $Id$
//! @file   ExtractDraws.h
//! Brief.
//! @author Daniel Lidstrom <daniel.lidstrom@sbg.se>
//! @date   2010-04-06 11:56
//! @ingroup
//!

#if !defined(EXTRACTDRAWS_H__20100406T1156)
#define EXTRACTDRAWS_H__20100406T1156

#include "Fwd.h"

//!
//! @author  Daniel Lidstrom <daniel.lidstrom@sbg.se>
//! @date    2010-04-06 11:56
//! @ingroup
//! Brief.
//!
int ExtractDraws(int argc,
                 char** argv,
                 const char* submode,
                 const CComputerDefaults& cd1,
                 const CComputerDefaults& cd2);

#endif
