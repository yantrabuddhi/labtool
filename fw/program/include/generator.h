/*!
 * @file
 * @brief     Handles setup shared by analog and digital signal generation
 *
 * @copyright Copyright 2013 Embedded Artists AB
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef __GENERATOR_H
#define __GENERATOR_H

/******************************************************************************
 * Includes
 *****************************************************************************/

#include "lpc_types.h"
#include "error_codes.h"

/******************************************************************************
 * Typedefs and defines
 *****************************************************************************/

/******************************************************************************
 * Global Variables
 *****************************************************************************/

/******************************************************************************
 * Functions
 *****************************************************************************/

void generator_Init(void);
cmd_status_t generator_Configure(uint8_t* cfg, uint32_t size);
cmd_status_t generator_Start(void);
cmd_status_t generator_Stop(void);

#endif /* end __GENERATOR_H */

