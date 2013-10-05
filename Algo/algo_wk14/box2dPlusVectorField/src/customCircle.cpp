/*
 *  customCircle.cpp
 *  emptyExample
 *
 *  Created by zachary lieberman on 12/7/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "customCircle.h"



void customCircle::pickRandomColor(){
	
	color.x = ofRandom(200,255);
	color.y = ofRandom(100,150);
	color.z = ofRandom(50,100);
}

void customCircle::draw(){
	
	float radius = getRadius();
	ofPoint position = getPosition();
	
	ofFill();
	ofSetColor(color.x, color.y, color.z);
	ofCircle(position.x, position.y, radius);
	
}