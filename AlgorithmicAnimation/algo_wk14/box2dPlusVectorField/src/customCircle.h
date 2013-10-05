/*
 *  customCircle.h
 *  emptyExample
 *
 *  Created by zachary lieberman on 12/7/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */


#pragma once


#include "ofMain.h"
#include "ofxBox2d.h"


class customCircle : public ofxBox2dCircle {

	public:

		void pickRandomColor();
		void draw();
	
		ofPoint color;
	
	
};