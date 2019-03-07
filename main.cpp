#include <iostream>
#include "eigen3/Eigen/Dense"
#include <functional>
#include <vector>

using Eigen::MatrixXd;
using std::cout;
using std::endl;
using std::vector;

#include "DeepNueralNetwork.h"

/*
 *  KCT,1.05,90,2,-120,0.6,-180,0.3,-180|2
 * 	KCT,0.3,-180,2,-180,0,-180,0.15,-60|2
 *  KCT,0.3,-180,2,-180,0,-180,0.15,0|2
 *  KCT,0.55,-45,30,60,0,-120,0,-120|2
 *  KCT,0.8,-45,2,0,1.2,-60,0.15,-180|2
 *  KCT,0.8,135,2,0,1.2,0,0.3,-60|2
 */
int main()
{

    static DeepNueralNetwork dnn;
    static bool read_dnn = true;
    if(read_dnn){
        dnn.ReadFromTensorFlow("model.txt");
        read_dnn = false;
    }
	MatrixXd input(8,1);
    input(0,0) = 0.55;
    input(1,0) = -45;
    input(2,0) = 30;
    input(3,0) = 60;
    input(4,0) = 0;
    input(5,0) = -120;
    input(6,0) = 0;
    input(7,0) = -180;
    dnn.Calculate(input);
    MatrixXd output(4,1);
    output = dnn.mOutput;
    cout<<output<<std::endl;
}

/*
    input(0,0) = 1.05;
    input(1,0) = 90.0;
    input(2,0) = 2.0;
    input(3,0) = -120.0;
    input(4,0) = 0.6;
    input(5,0) = -180.0;
    input(6,0) = 0.3;
    input(7,0) = -180.0;
    
    input(0,0) = 0.55;
    input(1,0) = -45.0;
    input(2,0) = 14.0;
    input(3,0) = -120.0;
    input(4,0) = 3.0;
    input(5,0) = -180.0;
    input(6,0) = 0.45;
    input(7,0) = 120.0;
    
    input(0,0) = 0.3;
    input(1,0) = -180.0;
    input(2,0) = 18.0;
    input(3,0) = -180.0;
    input(4,0) = 0.0;
    input(5,0) = -180.0;
    input(6,0) = 0.15;
    input(7,0) = -60.0;
    
        input(0,0) = 0.8;
    input(1,0) = 135.0;
    input(2,0) = 2.0;
    input(3,0) = 0.0;
    input(4,0) = 1.2;
    input(5,0) = 0.0;
    input(6,0) = 0.3;
    input(7,0) = -60.0;
*/
