/**
* @file NexText.h
*
* The definition of class NexText.
*
* @author Wu Pengfei (email:<pengfei.wu@itead.cc>)
* @date 2015/8/13
*
* @copyright
* Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* Port for Particle platform (particle.io)
* by BSpranger & ScruffR (Dec. 2015)
*/

#ifndef __NEXTEXT_H__
#define __NEXTEXT_H__

#include "NexTouch.h"
#include "NexHardware.h"
/**
 * @addtogroup Component
 * @{
 */

/**
 * NexText component.
 */
class NexText: public NexTouch
{
public: /* methods */
    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name, void *value);
     */
    NexText(uint8_t pid, uint8_t cid, const char *name, void *value = NULL);

    /**
     * Get text attribute of component.
     *
     * @param buffer - buffer storing text returned.
     * @param len - length of buffer.
     * @return The real length of text returned.
     */
    uint16_t getText(char *buffer, uint16_t len);

    /**
     * Set text attribute of component.
     *
     * @param buffer - text buffer terminated with '\0'.
     * @return true if success, false for failure.
     */
    bool setText(const char *buffer);

    /**
    * Set text color attribute of component.
    *
    * @return true if success, false for failure.
    */
    bool setForeColor(uint32_t number);

    /**
    * Set text color attribute of component.
    *
    * @return true if success, false for failure.
    */
    bool setBackColor(uint32_t number);
};

/**
 * @}
 */

#endif /* #ifndef __NEXTEXT_H__ */
