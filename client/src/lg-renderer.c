/*
Looking Glass - KVM FrameRelay (KVMFR) Client
Copyright (C) 2017-2019 Geoffrey McRae <geoff@hostfission.com>
https://looking-glass.hostfission.com

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include <stdbool.h>
#include <string.h>

bool LG_RendererValidatorBool(const char * value)
{
  if (!value)
    return false;

  return
    (strcasecmp(value, "1"      ) == 0) ||
    (strcasecmp(value, "0"      ) == 0) ||
    (strcasecmp(value, "true"   ) == 0) ||
    (strcasecmp(value, "false"  ) == 0) ||
    (strcasecmp(value, "yes"    ) == 0) ||
    (strcasecmp(value, "no"     ) == 0) ||
    (strcasecmp(value, "on"     ) == 0) ||
    (strcasecmp(value, "off"    ) == 0) ||
    (strcasecmp(value, "enable" ) == 0) ||
    (strcasecmp(value, "disable") == 0);
}

bool LG_RendererValueToBool(const char * value)
{
  return
    (strcasecmp(value, "1"      ) == 0) ||
    (strcasecmp(value, "true"   ) == 0) ||
    (strcasecmp(value, "yes"    ) == 0) ||
    (strcasecmp(value, "on"     ) == 0) ||
    (strcasecmp(value, "enable" ) == 0);
}