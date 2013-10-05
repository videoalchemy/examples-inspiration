/*
 *  noiseField.h
 *  class12
 *
 *  Created by zachary lieberman on 11/16/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once

#include "ofxVectorMath.h"
#include "ofMain.h"

class noiseField {
	
public: 
	
	void setup();
	
	float scaleOfField;	
	
	ofxVec2f	getNoiseForPosition(float x, float y, float outputScale);
	void		draw();
	
	void		setTime(float t);
	float		noiseTime;
	
	
};



