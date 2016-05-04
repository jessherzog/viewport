#include "ofApp.h"

float lowY;

ofImage img1;
ofImage img2;
ofImage img3;
ofImage img4;
ofImage img5;
ofImage img6;
ofImage img7;
ofImage img8;
ofImage img9;
ofImage img10;
ofImage img11;
ofImage img12;
ofImage img13;
ofImage img14;
ofImage img15;
ofImage img16;
ofImage img17;
ofImage img18;
ofImage img19;
ofImage img20;
ofImage img21;
ofImage img22;

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	viewportDown();
	ofEnableSmoothing();
    
    img1.load("img1.png");
    img2.load("img2.png");
    img3.load("img3.png");
    img4.load("img4.png");
    img5.load("img5.png");
    img6.load("img6.png");
    img7.load("img7.png");
    img8.load("img8.png");
    img9.load("img9.png");
    img10.load("img10.png");
    img11.load("img11.png");
    img12.load("img12.png");
    img13.load("img13.png");
    img14.load("img14.png");
    img15.load("img15.png");
    img16.load("img16.png");
    img17.load("img17.png");
    img18.load("img18.png");
    img19.load("img19.png");
    img20.load("img20.png");
    img21.load("img21.png");
    img22.load("img22.png");
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	drawViewportOutline(viewport2D);

	ofPushView();
	ofViewport(viewport2D);
	
    // 0,0=left,top
	// ofGetViewportWidth(),ofGetViewportHeight()=right,bottom
	ofSetupScreen();

    img1.draw(0, 0);

    ofPopView();
}

//--------------------------------------------------------------
void ofApp::lower(ofRectangle & viewport){
	// utlitly function to randomise a rectangle
	viewport.x = 0;
    viewport.y = lowY;
    viewport.width = ofGetWidth();
    viewport.height = ofGetHeight();
}

//--------------------------------------------------------------
void ofApp::viewportDown(){
	lower(viewport2D);
}

//--------------------------------------------------------------
void ofApp::drawViewportOutline(const ofRectangle & viewport){
	ofPushStyle();
	ofFill();
	ofSetColor(50);
	ofSetLineWidth(0);
	ofDrawRectangle(viewport);
	ofNoFill();
	ofSetColor(25);
	ofSetLineWidth(1.0f);
	ofDrawRectangle(viewport);
	ofPopStyle();
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if(key == ' '){
		lowY--;
        viewportDown();
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

//img2.draw(30, 60);
//img3.draw(30, 60);
//img4.draw(30, 60);
//img5.draw(30, 60);
//img6.draw(30, 60);
//img7.draw(30, 60);
//img8.draw(30, 60);
//img9.draw(30, 60);
//img10.draw(30, 60);
//img11.draw(30, 60);
//img12.draw(30, 60);
//img13.draw(30, 60);
//img14.draw(30, 60);
//img15.draw(30, 60);
//img16.draw(30, 60);
//img17.draw(30, 60);
//img18.draw(30, 60);
//img19.draw(30, 60);
//img20.draw(30, 60);
//img21.draw(30, 60);
//img22.draw(30, 60);
