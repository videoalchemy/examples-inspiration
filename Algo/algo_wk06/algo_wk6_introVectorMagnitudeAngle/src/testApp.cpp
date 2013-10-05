#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){	
	
	ofBackground(255, 255, 255);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	
	ofxVec2f middleOfWindow;
	middleOfWindow.set(ofGetWidth()/2.0, ofGetHeight()/2.0);
	
	ofxVec2f mousePos;
	mousePos.set(mouseX, mouseY);
	
	ofSetColor(255,0,0);
	ofLine(middleOfWindow.x, middleOfWindow.y, mousePos.x, mousePos.y);
	
	// calculate the difference between these two points, and angle
	
	//easy way 
	/*ofxVec2f diff = mousePos - middleOfWindow;
	float distance = diff.length();
	float angle = atan2(diff.y, diff.x);
	 */
	
	//longer way: 
	float diffx = mousePos.x - middleOfWindow.x;
	float diffy = mousePos.y - middleOfWindow.y;
	float distance = sqrt(diffx*diffx + diffy*diffy);
	float angle = atan2(diffy, diffx);
	
	ofSetColor(0,0,0);
	ofDrawBitmapString("distance " + ofToString(distance), 20, 20);
	ofDrawBitmapString("angle " + ofToString(angle), 20, 40);
	
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofPushMatrix();
		ofTranslate(200, 200, 0);
		ofRotateZ(angle*RAD_TO_DEG);
		ofSetColor(255,0,0);
		ofRect(0,0,50 + distance,20);
	ofPopMatrix();
	
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){ 
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
