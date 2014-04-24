#ifndef __FRAME_EVENT_H__
#define __FRAME_EVENT_H__
#include "preDB.h"
#include "Event.h"
namespace dragonBones
{
    class Bone;
    class Armature;
    class AnimationState;
    /**
     * The FrameEvent class provides and defines all events dispatched by an Animation or Bone instance entering a new frame.
     *
     * 
     * @see dragonBones.animation.Animation
     */
    class FrameEvent : public Event
    {
    public:
        static const String MOVEMENT_FRAME_EVENT;
        
        /**
         * Dispatched when the animation of the armatrue enter a frame.
         */
        static const String ANIMATION_FRAME_EVENT;
        
        /**
         * 
         */
        static const String BONE_FRAME_EVENT;
        
        /**
         * The entered frame label.
         */
        String frameLabel;
        String getFrameLabel(){
            return frameLabel;
        }
        
        Bone* bone;
        Bone* getBone(){
            return bone;
        }
        
        /**
         * The armature that is the target of this event.
         */
        Armature *armature;
        Armature* getArmture(){
            return armature;
        }
        
        /**
         * The animationState instance.
         */
        AnimationState* animationState;
        AnimationState* getAnimationState(){
            return animationState;
        }
        
        /**
         * Creates a new FrameEvent instance.
         * @param    type
         * @param    cancelable
         */
        FrameEvent(const String &type)
            : Event(type)
            , bone(0)
            , armature(0)
            , animationState(0)
        {
        }
    };
}
#endif // __FRAME_EVENT_H__
