/****************************************************************
 *
 *        Copyright 2013, Big Switch Networks, Inc.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ***************************************************************/

#ifndef __VPI_INTERFACE_PCAPDUMP_H__
#define __VPI_INTERFACE_PCAPDUMP_H__

#include "vpi_int.h"

#if VPI_CONFIG_INCLUDE_INTERFACE_PCAPDUMP == 1

/* Register the Pcap interface with the VPI library */
int vpi_pcapdump_interface_register(void);

/*
 * This is the create function for Pcap interfaces, if you want to use
 * it directly.
 */
int vpi_pcapdump_interface_create(vpi_interface_t** nvi, char* args[],
                                  int flags, const char* name_ptr);

/*
 * Interface vectors. These would not normally be called directly.
 */
int vpi_pcapdump_interface_send(vpi_interface_t* vi, unsigned char* data,
                                int len);

int vpi_pcapdump_interface_destroy(vpi_interface_t* vi);


#endif
#endif /* __VPI_PCAPDUMP_H__ */


