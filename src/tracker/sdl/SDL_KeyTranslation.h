/*
 *  tracker/sdl/SDL_KeyTranslation.h
 *
 *  Copyright 2009 Peter Barth
 *
 *  This file is part of Milkytracker.
 *
 *  Milkytracker is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Milkytracker is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Milkytracker.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/*
 *  KeyTranslation.h
 *  MilkyTracker
 *
 *  Created by Peter Barth on 19.11.05.
 *
 *  12/5/14 - Dale Whinham
 *    - Port to SDL2
 *
 */

#ifndef KEYTRANSLATION__H
#define KEYTRANSLATION__H

#include <SDL.h>
#include "BasicTypes.h"

pp_uint16 toVK(const SDL_Keysym& keysym);
pp_uint16 toSC(const SDL_Keysym& keysym);

#endif
