//
//  util.h
//  interface
//
//  Created by Philip Rosedale on 8/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef interface_util_h
#define interface_util_h

#include "glm/glm.hpp"

void outstring(char * string, int length);
float randFloat();
void render_world_box();
void render_vector(glm::vec3 * vec);
void drawtext(int x, int y, float scale, float rotate, float thick, int mono, char *string, 
              float r=1.0, float g=1.0, float b=1.0);
void drawvec3(int x, int y, float scale, float rotate, float thick, int mono, glm::vec3 vec, 
              float r=1.0, float g=1.0, float b=1.0);
double diffclock(timeval clock1,timeval clock2);

void makeCubes(float location[3], float scale, int * index, 
               float * cubes_position, float * cubes_scale, float * cubes_color);

#endif
