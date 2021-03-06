//=============================================================================
//
// Adventure Game Studio (AGS)
//
// Copyright (C) 1999-2011 Chris Jones and 2011-20xx others
// The full list of copyright holders can be found in the Copyright.txt
// file, which is part of this source code distribution.
//
// The AGS source code is provided under the Artistic License 2.0.
// A copy of this license can be found in the file License.txt and at
// http://www.opensource.org/licenses/artistic-license-2.0.php
//
//=============================================================================
//
//
//
//=============================================================================
#ifndef __AGS_EE_DYNOBJ__SCRIPTSYSTEM_H
#define __AGS_EE_DYNOBJ__SCRIPTSYSTEM_H

// The text script's "system" struct
struct ScriptSystem {
    int width,height;
    int coldepth;
    int os;
    int windowed;
    int vsync;
    int viewport_width, viewport_height;
    char aci_version[10]; // FIXME this when possible, version format is different now
    int reserved[5];  // so that future scripts don't overwrite data
};

#endif // __AGS_EE_DYNOBJ__SCRIPTSYSTEM_H
