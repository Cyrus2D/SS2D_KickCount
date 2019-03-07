#include <iostream>
#include "eigen3/Eigen/Dense"
#include <functional>
#include <vector>
#include <bits/stdc++.h>

using Eigen::MatrixXd;
using std::cout;
using std::endl;
using std::vector;

#include "DeepNueralNetwork.h"

/*
 *  KCT,1.05,90,2,-120,0.6,-180,0.3,-180|2
 *  KCT,0.55,-45,26,120,3,-120,0.15,0|3
 *  KCT,0.55,-45,6,120,3,-180,0.45,120|-1
 *  KCT,0.55,-45,14,120,3,-180,0.45,120|1
 *
 */


int main()
{

    DeepNueralNetwork dnn;

    dnn.ReadFromTensorFlow("NNW.txt");

    MatrixXd input(8,1);
    input(0,0) = 0.55;
    input(1,0) = -45.0;
    input(2,0) =  26.0;
    input(3,0) = 120.0;
    input(4,0) = 3;
    input(5,0) = -120.0;
    input(6,0) = 0.15;
    input(7,0) = 0.0;
    dnn.Calculate(input);
    cout<<dnn.mOutput<<std::endl;
}

/*
 *
 *
    input(0,0) = 1.05;
    input(1,0) = 90.0;
    input(2,0) = 2.0;
    input(3,0) = -120.0;
    input(4,0) = 0.6;
    input(5,0) = -180.0;
    input(6,0) = 0.3;
    input(7,0) = -180.0;
 *
 *
 */
