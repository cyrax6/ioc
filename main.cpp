/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: cyrax
 *
 * Created on January 17, 2016, 5:07 PM
 */

#include <iostream>
#include "ServiceInterface.h"
#include "Engine.h"
#include "MockEngine.h"
#include "Car.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    Car<Engine> car;
    car.Start();
    car.Drive();
    car.Stop();
    car.Shutoff();
    
    Car<MockEngine> mock_car;
    
    return 0;
}

