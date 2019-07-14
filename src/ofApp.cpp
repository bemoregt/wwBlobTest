#include "ofApp.h"

using namespace cv;
using namespace std;

using namespace ofxCv;

//--------------------------------------------------------------
void ofApp::setup(){

    img1.load("/Users/mun/Desktop/mura.png");
    /*
    Mat im = toCv(img1);
    cvtColor(im, im, COLOR_RGB2GRAY);
    
    
    SimpleBlobDetector::Params params;
    params.filterByArea = true;
    params.minArea = 40;
    params.maxArea = 9000;
    params.filterByColor = true;
    params.blobColor = 0;
    // 어두운 얼룩 추출 : 0, 밝은 얼룩 추출 : 255
    params.maxThreshold = 190;
    //params.filterByCircularity = 2;
    
    Ptr<SimpleBlobDetector> detector = SimpleBlobDetector::create(params);
    
    
    //Ptr<SimpleBlobDetector> detector = SimpleBlobDetector::create();
    
    vector<KeyPoint> keypoints;
    detector->detect(im, keypoints);
    Mat im_with_keypoints;
    drawKeypoints(im, keypoints, im_with_keypoints, Scalar(255, 0, 0), DrawMatchesFlags::DRAW_RICH_KEYPOINTS);
    
    toOf(im_with_keypoints, after);
    //imshow("keypoints", im_with_keypoints); cout << "The size of keypoints vector is : " << keypoints.size(); waitKey(0);
    after.update();
    */
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255);
    after.draw(0, 0, 512, 512);
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
