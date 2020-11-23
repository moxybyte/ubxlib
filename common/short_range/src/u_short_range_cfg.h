/*
 * Copyright 2020 u-blox Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _U_SHORT_RANGE_CFG_H_
#define _U_SHORT_RANGE_CFG_H_

/* No #includes allowed here */

/** @file
 * @brief This header file defines types, functions and inclusions that
 * are common and private to the SHORT_RANGE API.
 */

#ifdef __cplusplus
extern "C" {
#endif

/* ----------------------------------------------------------------
 * COMPILE-TIME MACROS
 * -------------------------------------------------------------- */

/** Numbers should map to the AT manual,
 * For revision R42, chapter 6.21 Bluetooth low energy role +UBTLE
 */
# define U_SHORT_RANGE_CFG_ROLE 2 /* Peripheral */

/* ----------------------------------------------------------------
 * TYPES
 * -------------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif // _U_SHORT_RANGE_CFG_H_

// End of file