/*
 * errors.h
 *
 *  Created on: Nov 27, 2012
 *      Author: hathach
 */

/*
 * Software License Agreement (BSD License)
 * Copyright (c) 2012, hathach (tinyusb.net)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 *
 * This file is part of the tinyUSB stack.
 */

/** \file
 *  \brief Error Header
 *
 *  \note TBD
 */

/** \ingroup Group_Common
 *  \defgroup Group_Error Error Codes
 *  @{
 */

#ifndef _TUSB_ERRORS_H_
#define _TUSB_ERRORS_H_

#include "../tusb_cfg.h"

#ifdef __cplusplus
 extern "C" {
#endif

#define ERROR_ENUM(x) x,
#define ERROR_STRING(x) #x,

#define ERROR_TABLE(ENTRY) \
    ENTRY(tERROR_NONE)\
    ENTRY(tERROR_FAILED)\


/** \enum TUSB_Error_t
 *  \brief Error Code returned
 */
typedef enum {
  ERROR_TABLE(ERROR_ENUM)
  ERROR_COUNT
}TUSB_Error_t;

#if TUSB_CFG_DEBUG == 3
/// Enum to String for debugging purposes. Only available if \ref TUSB_CFG_DEBUG > 0
extern char const* const TUSB_ErrorStr[];
#endif

#ifdef __cplusplus
 }
#endif

#endif /* _TUSB_ERRORS_H_ */

 /**  @} */