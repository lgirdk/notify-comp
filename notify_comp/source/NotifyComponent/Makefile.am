##########################################################################
# If not stated otherwise in this file or this component's Licenses.txt
# file the following copyright and licenses apply:
#
# Copyright 2019 RDK Management
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##########################################################################

bin_PROGRAMS = notify_comp 

AM_CPPFLAGS = -I$(top_srcdir)/hal/include \
		-I$(top_srcdir)/source/NotifyComponent \
		-I=${includedir} \
		-I=${includedir}/ccsp


AM_CFLAGS = -D_ANSC_LINUX -D_ANSC_USER -D_ANSC_LITTLE_ENDIAN_ -DFEATURE_SUPPORT_RDKLOG $(DBUS_CFLAGS)

AM_LDFLAGS = -lccsp_common -lrdkloggers -lsysevent -lsyscfg -lulog -lsecure_wrapper $(DBUS_LIBS)

notify_comp_SOURCES = cosa_apis_NotifyComponent.c plugin_main.c ssp_action.c ssp_messagebus_interface.c ssp_main.c dm_pack_datamodel.c


