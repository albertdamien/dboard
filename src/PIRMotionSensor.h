/*
  Copyright (c) 2018 Damien ALBERT <damien@rouge-orange.fr>

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifndef _PIR_MOTION_SENSOR_H_
#define _PIR_MOTION_SENSOR_H_

#include <Arduino.h>
#include <Input.h>

#define EVENT_PIR_DETECT 0
#define EVENT_PIR_MOVING 1

class PIRMotionSensor : public Input {
    public:
        PIRMotionSensor(int pin);
        void  run(serviceType);     // update value 
    private:
        bool m_moving; // is someone moving in front of the sensor ?  
};

#endif // _PIR_MOTION_SENSOR_H_