#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofBackground(0, 0, 0);
	
	box2d.init();
	box2d.setGravity(0, 0);   // no gravity!
	box2d.createFloor();
	box2d.checkBounds(true);
	box2d.setFPS(30.0);
	
	ofSetFrameRate(60);
	
	
	VF.setupField(60,40,ofGetWidth(), ofGetHeight());
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	VF.fadeField(0.99f);
	
	box2d.update();
	
	
	
	for(int i=0; i<circles.size(); i++) {
		ofxVec2f frc = VF.getForceFromPos(	circles[i].getPosition().x,
											circles[i].getPosition().y);
		
		frc.x *= 150;
		frc.y *= 150;
		circles[i].addForce(frc, 1);
		
	}
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofEnableAlphaBlending();
	ofSetColor(0,130,130, 200);
	VF.draw();
	
	
	
	for(int i=0; i<circles.size(); i++) {
		circles[i].draw();
	}
	
	ofSetColor(255, 255, 255);
	ofDrawBitmapString("c to make custom circles, mouse drag to alter vector field", 30, 30);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

	
	if(key == 'c') {
		float r = ofRandom(4, 20);		// a random radius 4px - 20px
		customCircle circle;
		circle.setPhysics(1.0, 0.03, 0.3);
		circle.setup(box2d.getWorld(), mouseX, mouseY, r);
		circle.pickRandomColor();
		circles.push_back(circle);
	}
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	VF.addInwardCircle((float)x, (float)y, 200, 0.3f);
	
	VF.addClockwiseCircle((float)x, (float)y, 500, 0.03f);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

