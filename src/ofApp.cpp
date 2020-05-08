#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include "ofApp.h"

using namespace std;

// Set the Window
void ofApp::setup() {
    ofBackground(0, 0, 0);  
    glm::vec2 myPos(ofGetWidth() / 2, ofGetHeight() / 2);

    // Fill the vector with the prime numbers
    for (int i = 2; i <= 1000; i++) {
        if (isPrimeNumber(i) == true)
            primeNumbersArray.push_back(i);
    }

}
 
bool ofApp::isPrimeNumber(int n) {
    // Check each number to see if they are prime
    int i;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }  
    }
    return true;  
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // For loop through the vector
    for (int i = 0; i <= primeNumbersArray.size() - 1; i++) {       // Go through each value in the vector
        ofPushMatrix();

        // Rotate by Radians
        ofRotateRad(primeNumbersArray[i]);

        // Move the draw point out by prime number amount
        ofTranslate(primeNumbersArray[i], ofGetHeight() / 2);

        // Draw the circle
        ofDrawCircle(0, 0, 1);
        ofColor red(255, 0, 0);

        // Pop off
        ofPopMatrix();
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
