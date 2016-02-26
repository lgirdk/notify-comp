
/**************************************************************************

    module: cosa_apis_pluginsampleobj.h

        For COSA Data Model Library Development

    -------------------------------------------------------------------

    copyright:

        Cisco Systems, Inc.
        All Rights Reserved.

    -------------------------------------------------------------------

    description:

        This file defines the apis for objects to support Data Model Library.

    -------------------------------------------------------------------


    author:

        COSA XML TOOL CODE GENERATOR 1.0

    -------------------------------------------------------------------

    revision:

        12/02/2010    initial revision.

**************************************************************************/


#ifndef  _COSA_APIS_PLUGINSAMPLEOBJ_H
#define  _COSA_APIS_PLUGINSAMPLEOBJ_H

#include "slap_definitions.h"

/***********************************************************************

 APIs for Object:

    InternetGatewayDevice.X_CISCO_COM_COSADataModel.PluginSampleObj.

    *  PluginSampleObj_GetBulkParamValues
    *  PluginSampleObj_SetBulkParamValues
    *  PluginSampleObj_Validate
    *  PluginSampleObj_Commit
    *  PluginSampleObj_Rollback

***********************************************************************/
BOOL
NotifyComponent_GetParamUlongValue
    (
 	ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        ULONG*                      puLong
    );

BOOL
NotifyComponent_SetParamUlongValue
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
       ULONG                      uValue
    );

ULONG
NotifyComponent_Commit
    (
        ANSC_HANDLE                 hInsContext
    );

BOOL
NotifyComponent_SetParamStringValue
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        char*                       pString
    );

BOOL
NotifyComponent_GetParamStringValue
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        char*                       pValue,
        ULONG*                      pUlSize
    );
BOOL
NotifyComponent_GetParamBoolValue
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        BOOL*                       pBool
    );
	BOOL
NotifyComponent_SetParamBoolValue
    (
        ANSC_HANDLE                 hInsContext,
        char*                       ParamName,
        BOOL                        bValue
    );

UINT PA_to_Mask(char* PA_Name);
NotifyParam(char* PA_Name, char* param_name, char* add);
AddNotifyParam(char* PA_Name, char* param_name);
DelNotifyParam(char* PA_Name, char* param_name);
Print_Notify_Arr();
Find_Param(char* param_name, char* MsgStr);
Notify_To_PAs(UINT PA_Bits, char* MsgStr);

#endif
