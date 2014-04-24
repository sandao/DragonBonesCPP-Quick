#ifndef __DB_TRANSFORM_H__
#define __DB_TRANSFORM_H__
#include "preDB.h"
namespace dragonBones
{
    /**
    * Copyright 2012-2013. DragonBones. All Rights Reserved.
    * @playerversion Flash 10.0
    * @langversion 3.0
    * @version 2.0
    */
    class DBTransform
    {
    public:
        /**
         * Position on the x axis.
         */
        Number x;
        Number getPositionX(){
            return x;
        };
        void setPositionX(Number xx){
            x = xx;
        }
        /**
         * Position on the y axis.
         */
        Number y;
        Number getPositionY(){
            return y;
        };
        void setPositionY(Number yy){
            y = yy;
        }
        /**
         * Skew on the x axis.
         */
        Number skewX;
        /**
         * skew on the y axis.
         */
        Number skewY;
        /**
         * Scale on the x axis.
         */
        Number scaleX;
        Number getScaleX(){
            return scaleX;
        }
        void setScaleX(Number sx){
            scaleX = sx;
        }
        /**
         * Scale on the y axis.
         */
        Number scaleY;
        Number getScaleY(){
            return scaleY;
        }
        void setScaleY(Number sy){
            scaleY = sy;
        }
        /**
         * The rotation of that DBTransform instance.
         */
        Number getRotation()
        {
            return skewX;
        }
        void setRotation(Number value)
        {
            skewX = skewY = value;
        }
        /**
         * Creat a new DBTransform instance.
         */
        DBTransform()
        {
            x = 0;
            y = 0;
            skewX = 0;
            skewY = 0;
            scaleX = 1;
            scaleY = 1;
        }
        ~DBTransform(){};
        /**
         * Copy all properties from this DBTransform instance to the passed DBTransform instance.
         * @param    node
         */
        DBTransform(const DBTransform & transform)
        {
            x = transform.x;
            y = transform.y;
            skewX = transform.skewX;
            skewY = transform.skewY;
            scaleX = transform.scaleX;
            scaleY = transform.scaleY;
        }
        /**
         * Get a string representing all DBTransform property values.
         * @return String All property values in a formatted string.
         */
        String toString()
        {
            //return String("x:") + x + String(" y:") + y + String(" skewX:") + skewX + String(" skewY:") + skewY + String(" scaleX:") + scaleX + String(" scaleY:") + scaleY;
            return "";
        }
    };
};
#endif // __DB_TRANSFORM_H__
