#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //    me1.setColor(ofColor(0,128,255));
    //    me2.setColor(ofColor(255,128,0));
    
    for(int i=0;i<NUM;i++){
//        eye[i].setColor(ofColor(ofRandom(255),ofRandom(255),ofRandom(255)));
//        eye[i].setSize(ofRandom(10,50));
        Medama tmp;
        p.push_back(tmp);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    //    me1.update();
    //    me2.update();
    //    me3.update();
    for(int i=0;i<p.size();i++){
//        eye[i].update();
        p[i].update();
        
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    //    me1.draw();
    //    me2.draw();
    //    me3.draw();
    for(int i=0;i<p.size();i++){
//        eye[i].draw();
        p[i].draw();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == ' '){
        Medama tmp;
        p.push_back(tmp);
    }
    if(key == '-'){
//        Medama tmp;
        p.pop_back();
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
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
