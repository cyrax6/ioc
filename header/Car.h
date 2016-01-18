/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: cyrax
 *
 * Created on January 17, 2016, 5:21 PM
 */

#ifndef CAR_H
#define CAR_H

#include "ServiceInterface.h"

class Car
{
    
public:
    Car();
    ~Car();
    
    void Start();
    void Drive();
    void Stop();
    void Shutoff();
private:

};

#endif /* CAR_H */

