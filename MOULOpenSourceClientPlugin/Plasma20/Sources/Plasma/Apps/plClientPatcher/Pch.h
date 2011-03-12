/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011  Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/
/*****************************************************************************
*
*   $/Plasma20/Sources/Plasma/Apps/plClientPatcher/Pch.h
*   
***/

#ifdef PLASMA20_SOURCES_PLASMA_APPS_PLCLIENTPATCHER_PCH_H
#error "Header $/Plasma20/Sources/Plasma/Apps/plClientPatcher/Pch.h included more than once"
#endif
#define PLASMA20_SOURCES_PLASMA_APPS_PLCLIENTPATCHER_PCH_H

#include <process.h>
#include <time.h>
#include "pnUtils/pnUtils.h"
#include "pnNetBase/pnNetBase.h"
#include "pnAsyncCore/pnAsyncCore.h"
#include "pnProduct/pnProduct.h"
#include "pnNetCli/pnNetCli.h"
#include "plNetGameLib/plNetGameLib.h"
#include "plEncryption/plChecksum.h"
#include "plAgeDescription/plAgeManifest.h"
#include "plAudioCore/plAudioFileReader.h"

#define USES_PROTOCOL_CLI2AUTH
#include "pnNetProtocol/pnNetProtocol.h"

#include "UruPlayer.h"

#include "plCompression/plZlibStream.h"
#include "Intern.h"
#include "../plUruLauncher/plLauncherInfo.h"


