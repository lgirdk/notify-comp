/*********************************************************************************

    description:

        This is the template file of ssp_global.h for XxxxSsp.
        You may add the header files you want to include.

    ------------------------------------------------------------------------------

    revision:

        09/08/2011    initial revision.

**********************************************************************************/

#ifndef  _SSP_GLOBAL_H
#define  _SSP_GLOBAL_H

#include <time.h>

#include "ansc_platform.h"
#include "slap_definitions.h"

#ifndef WIN32
#include "ccsp_message_bus.h"
#endif

#include "ccsp_base_api.h"

#include "dslh_cpeco_interface.h"
#include "dslh_cpeco_exported_api.h"

#include "slap_vco_exported_api.h"
#include "ssp_messagebus_interface.h"

#include "dslh_ifo_mpa.h"
#include "dslh_dmagnt_interface.h"
#include "dslh_dmagnt_exported_api.h"

#include "ssp_internal.h"
#include "ccsp_ifo_ccd.h"
#include "ccc_ifo_mbi.h"

#include "messagebus_interface_helper.h"

/*
 *  Define custom trace module ID
 */
#ifdef   ANSC_TRACE_MODULE_ID
    #undef  ANSC_TRACE_MODULE_ID
#endif

#define  ANSC_TRACE_MODULE_ID                       ANSC_TRACE_ID_SSP

#endif
