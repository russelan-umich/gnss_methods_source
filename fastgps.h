/*
* Copyright (c) 2008, Morgan Quigley, Pieter Abbeel and Scott Gleason
* All rights reserved.
*
* Originally written by Morgan Quigley and Pieter Abbeel
* Additional contributions by Scott Gleason
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*     * Neither the authors' names nor the
*       names of its contributors may be used to endorse or promote products
*       derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef FASTGPS_H
#define FASTGPS_H

#define _CRT_SECURE_NO_DEPRECATE
#ifndef _USE_MATH_DEFINES
    #define _USE_MATH_DEFINES
#endif
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#include "parameters.h"
//#include "dopp_pos.h"
//#include "snap_shot.h"
//#include "structs.h"
//#include "funcs.h"
//#include "globals.h"
#include "datetime.h"
#include "intrpsp3c.h"

// this function is implemented differently in the CLI, GUI, and MSVC versions
//void fastgps_printf(const char *format, ...);
#define fastgps_printf printf

#define VERIFY_IO(STMT, VAL) { if ((STMT)!= (VAL)) { fastgps_printf("i/o error at %d in %s\n", __LINE__, __FILE__); } }

#endif

