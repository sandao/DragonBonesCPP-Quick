/*
** Lua binding: dragonBones_luabinding
** Generated automatically by tolua++-1.0.92 on Mon Apr 14 12:44:24 2014.
*/

#include "dragonBones_luabinding.h"
#include "CCLuaEngine.h"

using namespace cocos2d;




#include "BytesType.h"
#include "Armature.h"
#include "Animation.h"
#include "Frame.h"
#include "AnimationState.h"
#include "TimelineState.h"
#include "dbtinyxml2.h"
#include "Cocos2dxFactory.h"
#include "ITextureAtlas.h"
#include "Cocos2dxTextureAtlas.h"
#include "Slot.h"
#include "DBObject.h"
#include "DBTransform.h"
#include "Event.h"
#include "AnimationEvent.h"
#include "FrameEvent.h"
#include "SkeletonData.h"
#include "TextureAtlasData.h"
#include "AnimationData.h"
using namespace std;
using namespace dragonBones;

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_DBTransform (lua_State* tolua_S)
{
 DBTransform* self = (DBTransform*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CocosNode (lua_State* tolua_S)
{
 CocosNode* self = (CocosNode*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Animation (lua_State* tolua_S)
{
 Animation* self = (Animation*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_AnimationState (lua_State* tolua_S)
{
 AnimationState* self = (AnimationState*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Cocos2dxTextureAtlas (lua_State* tolua_S)
{
 Cocos2dxTextureAtlas* self = (Cocos2dxTextureAtlas*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Object (lua_State* tolua_S)
{
 Object* self = (Object*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Armature (lua_State* tolua_S)
{
 Armature* self = (Armature*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Cocos2dxFactory (lua_State* tolua_S)
{
 Cocos2dxFactory* self = (Cocos2dxFactory*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_DBObject (lua_State* tolua_S)
{
 DBObject* self = (DBObject*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Slot (lua_State* tolua_S)
{
 Slot* self = (Slot*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_Bone (lua_State* tolua_S)
{
 Bone* self = (Bone*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"SkeletonData"); toluafix_add_type_mapping(typeid(SkeletonData).hash_code(), "SkeletonData");
 tolua_usertype(tolua_S,"Cocos2dxFactory"); toluafix_add_type_mapping(typeid(Cocos2dxFactory).hash_code(), "Cocos2dxFactory");
 tolua_usertype(tolua_S,"BaseFactory"); toluafix_add_type_mapping(typeid(BaseFactory).hash_code(), "BaseFactory");
 tolua_usertype(tolua_S,"Cocos2dxTextureAtlas"); toluafix_add_type_mapping(typeid(Cocos2dxTextureAtlas).hash_code(), "Cocos2dxTextureAtlas");
 tolua_usertype(tolua_S,"TextureAtlasData"); toluafix_add_type_mapping(typeid(TextureAtlasData).hash_code(), "TextureAtlasData");
 tolua_usertype(tolua_S,"Bone"); toluafix_add_type_mapping(typeid(Bone).hash_code(), "Bone");
 tolua_usertype(tolua_S,"AnimationEvent"); toluafix_add_type_mapping(typeid(AnimationEvent).hash_code(), "AnimationEvent");
 tolua_usertype(tolua_S,"CCNode"); toluafix_add_type_mapping(typeid(CCNode).hash_code(), "CCNode");
 tolua_usertype(tolua_S,"cocos2d::CCObject");
 tolua_usertype(tolua_S,"AnimationData"); toluafix_add_type_mapping(typeid(AnimationData).hash_code(), "AnimationData");
 tolua_usertype(tolua_S,"ITextureAtlas"); toluafix_add_type_mapping(typeid(ITextureAtlas).hash_code(), "ITextureAtlas");
 tolua_usertype(tolua_S,"DBTransform"); toluafix_add_type_mapping(typeid(DBTransform).hash_code(), "DBTransform");
 tolua_usertype(tolua_S,"CocosNode"); toluafix_add_type_mapping(typeid(CocosNode).hash_code(), "CocosNode");
 tolua_usertype(tolua_S,"Animation"); toluafix_add_type_mapping(typeid(Animation).hash_code(), "Animation");
 tolua_usertype(tolua_S,"FrameEvent"); toluafix_add_type_mapping(typeid(FrameEvent).hash_code(), "FrameEvent");
 tolua_usertype(tolua_S,"AnimationState"); toluafix_add_type_mapping(typeid(AnimationState).hash_code(), "AnimationState");
 tolua_usertype(tolua_S,"Event"); toluafix_add_type_mapping(typeid(Event).hash_code(), "Event");
 tolua_usertype(tolua_S,"Slot"); toluafix_add_type_mapping(typeid(Slot).hash_code(), "Slot");
 tolua_usertype(tolua_S,"EventDispatcher"); toluafix_add_type_mapping(typeid(EventDispatcher).hash_code(), "EventDispatcher");
 tolua_usertype(tolua_S,"TimelineState"); toluafix_add_type_mapping(typeid(TimelineState).hash_code(), "TimelineState");
 tolua_usertype(tolua_S,"Object"); toluafix_add_type_mapping(typeid(Object).hash_code(), "Object");
 tolua_usertype(tolua_S,"Armature"); toluafix_add_type_mapping(typeid(Armature).hash_code(), "Armature");
 
 tolua_usertype(tolua_S,"Frame"); toluafix_add_type_mapping(typeid(Frame).hash_code(), "Frame");
 tolua_usertype(tolua_S,"DBObject"); toluafix_add_type_mapping(typeid(DBObject).hash_code(), "DBObject");
 tolua_usertype(tolua_S,"IAnimatable"); toluafix_add_type_mapping(typeid(IAnimatable).hash_code(), "IAnimatable");
}

/* method: new of class  Object */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Object_new00
static int tolua_dragonBones_luabinding_Object_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Object* tolua_ret = (Object*)  Mtolua_new((Object)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Object */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Object_new00_local
static int tolua_dragonBones_luabinding_Object_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Object* tolua_ret = (Object*)  Mtolua_new((Object)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Object */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Object_delete00
static int tolua_dragonBones_luabinding_Object_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* self = (Object*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMovementID of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_getMovementID00
static int tolua_dragonBones_luabinding_Animation_getMovementID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMovementID'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getMovementID();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMovementID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: _lastAnimationState of class  Animation */
#ifndef TOLUA_DISABLE_tolua_get_Animation__lastAnimationState_ptr
static int tolua_get_Animation__lastAnimationState_ptr(lua_State* tolua_S)
{
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_lastAnimationState'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->_lastAnimationState,"AnimationState");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: _lastAnimationState of class  Animation */
#ifndef TOLUA_DISABLE_tolua_set_Animation__lastAnimationState_ptr
static int tolua_set_Animation__lastAnimationState_ptr(lua_State* tolua_S)
{
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '_lastAnimationState'",NULL);
  if (!tolua_isusertype(tolua_S,2,"AnimationState",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->_lastAnimationState = ((AnimationState*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLastAnimationState of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_getLastAnimationState00
static int tolua_dragonBones_luabinding_Animation_getLastAnimationState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLastAnimationState'", NULL);
#endif
  {
   AnimationState* tolua_ret = (AnimationState*)  self->getLastAnimationState();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLastAnimationState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsPlaying of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_getIsPlaying00
static int tolua_dragonBones_luabinding_Animation_getIsPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsPlaying();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsComplete of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_getIsComplete00
static int tolua_dragonBones_luabinding_Animation_getIsComplete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsComplete'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsComplete();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsComplete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimeScale of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_getTimeScale00
static int tolua_dragonBones_luabinding_Animation_getTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimeScale'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimeScale of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_setTimeScale00
static int tolua_dragonBones_luabinding_Animation_setTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   float value = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimeScale'", NULL);
#endif
  {
   self->setTimeScale(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_new00
static int tolua_dragonBones_luabinding_Animation_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* armature = ((Armature*)  tolua_tousertype(tolua_S,2,0));
  {
   Animation* tolua_ret = (Animation*)  Mtolua_new((Animation)(armature));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Animation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_new00_local
static int tolua_dragonBones_luabinding_Animation_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* armature = ((Armature*)  tolua_tousertype(tolua_S,2,0));
  {
   Animation* tolua_ret = (Animation*)  Mtolua_new((Animation)(armature));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Animation");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gotoAndPlay of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_gotoAndPlay00
static int tolua_dragonBones_luabinding_Animation_gotoAndPlay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   float fadeInTime = ((  float)  tolua_tonumber(tolua_S,3,-1));
   float duration = ((  float)  tolua_tonumber(tolua_S,4,-1));
   float loop = ((  float)  tolua_tonumber(tolua_S,5,NaN));
  unsigned int layer = (( unsigned int)  tolua_tonumber(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gotoAndPlay'", NULL);
#endif
  {
   AnimationState* tolua_ret = (AnimationState*)  self->gotoAndPlay(animationName,fadeInTime,duration,loop,layer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
   tolua_pushcppstring(tolua_S,(const char*)animationName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'gotoAndPlay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: gotoAndPlay of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_gotoAndPlay01
static int tolua_dragonBones_luabinding_Animation_gotoAndPlay01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   float fadeInTime = ((  float)  tolua_tonumber(tolua_S,3,0));
   float duration = ((  float)  tolua_tonumber(tolua_S,4,0));
   float loop = ((  float)  tolua_tonumber(tolua_S,5,0));
  unsigned int layer = (( unsigned int)  tolua_tonumber(tolua_S,6,0));
   std::string group = ((  std::string)  tolua_tocppstring(tolua_S,7,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gotoAndPlay'", NULL);
#endif
  {
   AnimationState* tolua_ret = (AnimationState*)  self->gotoAndPlay(animationName,fadeInTime,duration,loop,layer,group);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
   tolua_pushcppstring(tolua_S,(const char*)animationName);
   tolua_pushcppstring(tolua_S,(const char*)group);
  }
 }
 return 3;
tolua_lerror:
 return tolua_dragonBones_luabinding_Animation_gotoAndPlay00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: gotoAndPlay of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_gotoAndPlay02
static int tolua_dragonBones_luabinding_Animation_gotoAndPlay02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,7,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,8,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,9,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,10,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,11,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,12,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   float fadeInTime = ((  float)  tolua_tonumber(tolua_S,3,0));
   float duration = ((  float)  tolua_tonumber(tolua_S,4,0));
   float loop = ((  float)  tolua_tonumber(tolua_S,5,0));
  unsigned int layer = (( unsigned int)  tolua_tonumber(tolua_S,6,0));
   std::string group = ((  std::string)  tolua_tocppstring(tolua_S,7,0));
   std::string fadeOutMode = ((  std::string)  tolua_tocppstring(tolua_S,8,0));
  bool displayControl = ((bool)  tolua_toboolean(tolua_S,9,true));
  bool pauseFadeOut = ((bool)  tolua_toboolean(tolua_S,10,true));
  bool pauseFadeIn = ((bool)  tolua_toboolean(tolua_S,11,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'gotoAndPlay'", NULL);
#endif
  {
   AnimationState* tolua_ret = (AnimationState*)  self->gotoAndPlay(animationName,fadeInTime,duration,loop,layer,group,fadeOutMode,displayControl,pauseFadeOut,pauseFadeIn);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
   tolua_pushcppstring(tolua_S,(const char*)animationName);
   tolua_pushcppstring(tolua_S,(const char*)group);
   tolua_pushcppstring(tolua_S,(const char*)fadeOutMode);
  }
 }
 return 4;
tolua_lerror:
 return tolua_dragonBones_luabinding_Animation_gotoAndPlay01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: play of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_play00
static int tolua_dragonBones_luabinding_Animation_play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'play'", NULL);
#endif
  {
   self->play();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_stop00
static int tolua_dragonBones_luabinding_Animation_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'", NULL);
#endif
  {
   self->stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getState of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_getState00
static int tolua_dragonBones_luabinding_Animation_getState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  unsigned int layer = (( unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getState'", NULL);
#endif
  {
   AnimationState* tolua_ret = (AnimationState*)  self->getState(name,layer);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: hasAnimation of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_hasAnimation00
static int tolua_dragonBones_luabinding_Animation_hasAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'hasAnimation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->hasAnimation(animationName);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)animationName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'hasAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: advanceTime of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_advanceTime00
static int tolua_dragonBones_luabinding_Animation_advanceTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
   float passedTime = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'advanceTime'", NULL);
#endif
  {
   self->advanceTime(passedTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'advanceTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActive of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_setActive00
static int tolua_dragonBones_luabinding_Animation_setActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AnimationState",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
  AnimationState* animationState = ((AnimationState*)  tolua_tousertype(tolua_S,2,0));
  bool active = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setActive'", NULL);
#endif
  {
   self->setActive(animationState,active);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addLayer of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_addLayer00
static int tolua_dragonBones_luabinding_Animation_addLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
  unsigned int layer = (( unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addLayer'", NULL);
#endif
  {
   unsigned int tolua_ret = ( unsigned int)  self->addLayer(layer);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addState of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_addState00
static int tolua_dragonBones_luabinding_Animation_addState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
  AnimationState* animationState = ((AnimationState*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addState'", NULL);
#endif
  {
   self->addState(animationState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeState of class  Animation */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Animation_removeState00
static int tolua_dragonBones_luabinding_Animation_removeState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Animation",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Animation* self = (Animation*)  tolua_tousertype(tolua_S,1,0);
  AnimationState* animationState = ((AnimationState*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeState'", NULL);
#endif
  {
   self->removeState(animationState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: borrowObject of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_borrowObject00
static int tolua_dragonBones_luabinding_AnimationState_borrowObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AnimationState* tolua_ret = (AnimationState*)  AnimationState::borrowObject();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'borrowObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: returnObject of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_returnObject00
static int tolua_dragonBones_luabinding_AnimationState_returnObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* animationState = ((AnimationState*)  tolua_tousertype(tolua_S,2,0));
  {
   AnimationState::returnObject(animationState);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'returnObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clear of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_clear00
static int tolua_dragonBones_luabinding_AnimationState_clear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AnimationState::clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getName00
static int tolua_dragonBones_luabinding_AnimationState_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getClip of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getClip00
static int tolua_dragonBones_luabinding_AnimationState_getClip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getClip'", NULL);
#endif
  {
   AnimationData* tolua_ret = (AnimationData*)  self->getClip();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationData");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getClip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLoopCount of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getLoopCount00
static int tolua_dragonBones_luabinding_AnimationState_getLoopCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLoopCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLoopCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLoopCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLoop of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getLoop00
static int tolua_dragonBones_luabinding_AnimationState_getLoop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLoop'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getLoop();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLoop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getLayer of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getLayer00
static int tolua_dragonBones_luabinding_AnimationState_getLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getLayer'", NULL);
#endif
  {
   unsigned int tolua_ret = ( unsigned int)  self->getLayer();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsPlaying of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getIsPlaying00
static int tolua_dragonBones_luabinding_AnimationState_getIsPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsPlaying();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsComplete of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getIsComplete00
static int tolua_dragonBones_luabinding_AnimationState_getIsComplete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsComplete'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsComplete();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsComplete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFadeInTime of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getFadeInTime00
static int tolua_dragonBones_luabinding_AnimationState_getFadeInTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFadeInTime'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getFadeInTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFadeInTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTotalTime of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getTotalTime00
static int tolua_dragonBones_luabinding_AnimationState_getTotalTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTotalTime'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getTotalTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTotalTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentTime of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getCurrentTime00
static int tolua_dragonBones_luabinding_AnimationState_getCurrentTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCurrentTime'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getCurrentTime();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCurrentTime of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_setCurrentTime00
static int tolua_dragonBones_luabinding_AnimationState_setCurrentTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   float value = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCurrentTime'", NULL);
#endif
  {
   self->setCurrentTime(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCurrentTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTimeScale of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getTimeScale00
static int tolua_dragonBones_luabinding_AnimationState_getTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTimeScale'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getTimeScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTimeScale of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_setTimeScale00
static int tolua_dragonBones_luabinding_AnimationState_setTimeScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   float value = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTimeScale'", NULL);
#endif
  {
   self->setTimeScale(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTimeScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_new00
static int tolua_dragonBones_luabinding_AnimationState_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AnimationState* tolua_ret = (AnimationState*)  Mtolua_new((AnimationState)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_new00_local
static int tolua_dragonBones_luabinding_AnimationState_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   AnimationState* tolua_ret = (AnimationState*)  Mtolua_new((AnimationState)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fadeIn of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_fadeIn00
static int tolua_dragonBones_luabinding_AnimationState_fadeIn00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"AnimationData",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,8,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,9,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
  Armature* armature = ((Armature*)  tolua_tousertype(tolua_S,2,0));
  AnimationData* clip = ((AnimationData*)  tolua_tousertype(tolua_S,3,0));
   float fadeInTime = ((  float)  tolua_tonumber(tolua_S,4,0));
   float timeScale = ((  float)  tolua_tonumber(tolua_S,5,0));
  int loop = ((int)  tolua_tonumber(tolua_S,6,0));
  unsigned int layer = (( unsigned int)  tolua_tonumber(tolua_S,7,0));
  bool displayControl = ((bool)  tolua_toboolean(tolua_S,8,0));
  bool pauseBeforeFadeInComplete = ((bool)  tolua_toboolean(tolua_S,9,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fadeIn'", NULL);
#endif
  {
   self->fadeIn(armature,clip,fadeInTime,timeScale,loop,layer,displayControl,pauseBeforeFadeInComplete);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fadeIn'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fadeOut of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_fadeOut00
static int tolua_dragonBones_luabinding_AnimationState_fadeOut00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   float fadeOutTime = ((  float)  tolua_tonumber(tolua_S,2,0));
  bool pause = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fadeOut'", NULL);
#endif
  {
   self->fadeOut(fadeOutTime,pause);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fadeOut'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: play of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_play00
static int tolua_dragonBones_luabinding_AnimationState_play00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'play'", NULL);
#endif
  {
   self->play();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'play'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stop of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_stop00
static int tolua_dragonBones_luabinding_AnimationState_stop00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stop'", NULL);
#endif
  {
   self->stop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMixingTransform of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_getMixingTransform00
static int tolua_dragonBones_luabinding_AnimationState_getMixingTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   std::string timelineName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMixingTransform'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getMixingTransform(timelineName);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushcppstring(tolua_S,(const char*)timelineName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMixingTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addMixingTransform of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_addMixingTransform00
static int tolua_dragonBones_luabinding_AnimationState_addMixingTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   std::string timelineName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  int type = ((int)  tolua_tonumber(tolua_S,3,2));
  bool recursive = ((bool)  tolua_toboolean(tolua_S,4,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addMixingTransform'", NULL);
#endif
  {
   self->addMixingTransform(timelineName,type,recursive);
   tolua_pushcppstring(tolua_S,(const char*)timelineName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addMixingTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeMixingTransform of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_removeMixingTransform00
static int tolua_dragonBones_luabinding_AnimationState_removeMixingTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeMixingTransform'", NULL);
#endif
  {
   self->removeMixingTransform();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeMixingTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeMixingTransform of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_removeMixingTransform01
static int tolua_dragonBones_luabinding_AnimationState_removeMixingTransform01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   std::string timelineName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
  bool recursive = ((bool)  tolua_toboolean(tolua_S,3,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeMixingTransform'", NULL);
#endif
  {
   self->removeMixingTransform(timelineName,recursive);
   tolua_pushcppstring(tolua_S,(const char*)timelineName);
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_AnimationState_removeMixingTransform00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: advanceTime of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_advanceTime00
static int tolua_dragonBones_luabinding_AnimationState_advanceTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   float passedTime = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'advanceTime'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->advanceTime(passedTime);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'advanceTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateTimelineStates of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_updateTimelineStates00
static int tolua_dragonBones_luabinding_AnimationState_updateTimelineStates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateTimelineStates'", NULL);
#endif
  {
   self->updateTimelineStates();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateTimelineStates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTimelineState of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_addTimelineState00
static int tolua_dragonBones_luabinding_AnimationState_addTimelineState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   std::string timelineName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTimelineState'", NULL);
#endif
  {
   self->addTimelineState(timelineName);
   tolua_pushcppstring(tolua_S,(const char*)timelineName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTimelineState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeTimelineState of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_removeTimelineState00
static int tolua_dragonBones_luabinding_AnimationState_removeTimelineState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
   std::string timelineName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTimelineState'", NULL);
#endif
  {
   self->removeTimelineState(timelineName);
   tolua_pushcppstring(tolua_S,(const char*)timelineName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTimelineState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: clearAll of class  AnimationState */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationState_clearAll00
static int tolua_dragonBones_luabinding_AnimationState_clearAll00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationState",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationState* self = (AnimationState*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'clearAll'", NULL);
#endif
  {
   self->clearAll();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clearAll'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplay of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getDisplay00
static int tolua_dragonBones_luabinding_Armature_getDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplay'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->getDisplay();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayNode of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getDisplayNode00
static int tolua_dragonBones_luabinding_Armature_getDisplayNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayNode'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getDisplayNode();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimation of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getAnimation00
static int tolua_dragonBones_luabinding_Armature_getAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimation'", NULL);
#endif
  {
   Animation* tolua_ret = (Animation*)  self->getAnimation();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Animation");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_new00
static int tolua_dragonBones_luabinding_Armature_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* display = ((Object*)  tolua_tousertype(tolua_S,2,0));
  {
   Armature* tolua_ret = (Armature*)  Mtolua_new((Armature)(display));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_new00_local
static int tolua_dragonBones_luabinding_Armature_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Object* display = ((Object*)  tolua_tousertype(tolua_S,2,0));
  {
   Armature* tolua_ret = (Armature*)  Mtolua_new((Armature)(display));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_delete00
static int tolua_dragonBones_luabinding_Armature_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dispose of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_dispose00
static int tolua_dragonBones_luabinding_Armature_dispose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dispose'", NULL);
#endif
  {
   self->dispose();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dispose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: invalidUpdate of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_invalidUpdate00
static int tolua_dragonBones_luabinding_Armature_invalidUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'invalidUpdate'", NULL);
#endif
  {
   self->invalidUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'invalidUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: advanceTime of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_advanceTime00
static int tolua_dragonBones_luabinding_Armature_advanceTime00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   float passedTime = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'advanceTime'", NULL);
#endif
  {
   self->advanceTime(passedTime);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'advanceTime'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSlot of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getSlot00
static int tolua_dragonBones_luabinding_Armature_getSlot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   std::string slotName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSlot'", NULL);
#endif
  {
   Slot* tolua_ret = (Slot*)  self->getSlot(slotName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Slot");
   tolua_pushcppstring(tolua_S,(const char*)slotName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSlot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSlotByDisplay of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getSlotByDisplay00
static int tolua_dragonBones_luabinding_Armature_getSlotByDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Object* display = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSlotByDisplay'", NULL);
#endif
  {
   Slot* tolua_ret = (Slot*)  self->getSlotByDisplay(display);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Slot");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSlotByDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSlot of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_removeSlot00
static int tolua_dragonBones_luabinding_Armature_removeSlot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Slot* slot = ((Slot*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSlot'", NULL);
#endif
  {
   self->removeSlot(slot);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSlot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSlotByName of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_removeSlotByName00
static int tolua_dragonBones_luabinding_Armature_removeSlotByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   std::string slotName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSlotByName'", NULL);
#endif
  {
   self->removeSlotByName(slotName);
   tolua_pushcppstring(tolua_S,(const char*)slotName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSlotByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getBone00
static int tolua_dragonBones_luabinding_Armature_getBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   std::string boneName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBone'", NULL);
#endif
  {
   Bone* tolua_ret = (Bone*)  self->getBone(boneName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
   tolua_pushcppstring(tolua_S,(const char*)boneName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoneByDisplay of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getBoneByDisplay00
static int tolua_dragonBones_luabinding_Armature_getBoneByDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Object* display = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoneByDisplay'", NULL);
#endif
  {
   Bone* tolua_ret = (Bone*)  self->getBoneByDisplay(display);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoneByDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_removeBone00
static int tolua_dragonBones_luabinding_Armature_removeBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBone'", NULL);
#endif
  {
   self->removeBone(bone);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeBoneByName of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_removeBoneByName00
static int tolua_dragonBones_luabinding_Armature_removeBoneByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   std::string boneName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeBoneByName'", NULL);
#endif
  {
   self->removeBoneByName(boneName);
   tolua_pushcppstring(tolua_S,(const char*)boneName);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeBoneByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_addChild00
static int tolua_dragonBones_luabinding_Armature_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  DBObject* object = ((DBObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_addChild01
static int tolua_dragonBones_luabinding_Armature_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"DBObject",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  DBObject* object = ((DBObject*)  tolua_tousertype(tolua_S,2,0));
   std::string parentName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(object,parentName);
   tolua_pushcppstring(tolua_S,(const char*)parentName);
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_Armature_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_addBone00
static int tolua_dragonBones_luabinding_Armature_addBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBone'", NULL);
#endif
  {
   self->addBone(bone);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addBone of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_addBone01
static int tolua_dragonBones_luabinding_Armature_addBone01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Bone",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Bone* bone = ((Bone*)  tolua_tousertype(tolua_S,2,0));
   std::string parentName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addBone'", NULL);
#endif
  {
   self->addBone(bone,parentName);
   tolua_pushcppstring(tolua_S,(const char*)parentName);
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_Armature_addBone00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateSlotsZOrder of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_updateSlotsZOrder00
static int tolua_dragonBones_luabinding_Armature_updateSlotsZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateSlotsZOrder'", NULL);
#endif
  {
   self->updateSlotsZOrder();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateSlotsZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addDBObject of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_addDBObject00
static int tolua_dragonBones_luabinding_Armature_addDBObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  DBObject* object = ((DBObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addDBObject'", NULL);
#endif
  {
   self->addDBObject(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addDBObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeDBObject of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_removeDBObject00
static int tolua_dragonBones_luabinding_Armature_removeDBObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  DBObject* object = ((DBObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeDBObject'", NULL);
#endif
  {
   self->removeDBObject(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeDBObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: arriveAtFrame of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_arriveAtFrame00
static int tolua_dragonBones_luabinding_Armature_arriveAtFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Frame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"TimelineState",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"AnimationState",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  Frame* frame = ((Frame*)  tolua_tousertype(tolua_S,2,0));
  TimelineState* timelineState = ((TimelineState*)  tolua_tousertype(tolua_S,3,0));
  AnimationState* animationState = ((AnimationState*)  tolua_tousertype(tolua_S,4,0));
  bool isCross = ((bool)  tolua_toboolean(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'arriveAtFrame'", NULL);
#endif
  {
   self->arriveAtFrame(frame,timelineState,animationState,isCross);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'arriveAtFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sortSlot of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_sortSlot00
static int tolua_dragonBones_luabinding_Armature_sortSlot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Slot",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* slot1 = ((Slot*)  tolua_tousertype(tolua_S,2,0));
  Slot* slot2 = ((Slot*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  Armature::sortSlot(slot1,slot2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sortSlot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptHandler of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_registerScriptHandler00
static int tolua_dragonBones_luabinding_Armature_registerScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !toluafix_isfunction(tolua_S,2,"LUA_FUNCTION",0,&tolua_err)) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
  LUA_FUNCTION nFunID = (  toluafix_ref_function(tolua_S,2,0));
   std::string nScriptEventType = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptHandler'", NULL);
#endif
  {
   self->registerScriptHandler(nFunID,nScriptEventType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptHandler of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_unregisterScriptHandler00
static int tolua_dragonBones_luabinding_Armature_unregisterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   std::string nScriptEventType = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptHandler'", NULL);
#endif
  {
   self->unregisterScriptHandler(nScriptEventType);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScriptHandler of class  Armature */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Armature_getScriptHandler00
static int tolua_dragonBones_luabinding_Armature_getScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Armature",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
   std::string nScriptEventType = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScriptHandler'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getScriptHandler(nScriptEventType);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __EventDispatcher__ of class  Armature */
#ifndef TOLUA_DISABLE_tolua_get_Armature___EventDispatcher__
static int tolua_get_Armature___EventDispatcher__(lua_State* tolua_S)
{
  Armature* self = (Armature*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__EventDispatcher__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<EventDispatcher*>(self), "EventDispatcher");
#else
   tolua_pushusertype(tolua_S,(void*)((EventDispatcher*)self), "EventDispatcher");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildArmature of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_getChildArmature00
static int tolua_dragonBones_luabinding_Bone_getChildArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->getChildArmature();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplay of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_getDisplay00
static int tolua_dragonBones_luabinding_Bone_getDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplay'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->getDisplay();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplayNode of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_getDisplayNode00
static int tolua_dragonBones_luabinding_Bone_getDisplayNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplayNode'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getDisplayNode();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplayNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplay of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_setDisplay00
static int tolua_dragonBones_luabinding_Bone_setDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
  Object* value = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplay'", NULL);
#endif
  {
   self->setDisplay(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: displayController of class  Bone */
#ifndef TOLUA_DISABLE_tolua_get_Bone_displayController
static int tolua_get_Bone_displayController(lua_State* tolua_S)
{
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayController'",NULL);
#endif
  tolua_pushcppstring(tolua_S,(const char*)self->displayController);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: displayController of class  Bone */
#ifndef TOLUA_DISABLE_tolua_set_Bone_displayController
static int tolua_set_Bone_displayController(lua_State* tolua_S)
{
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'displayController'",NULL);
  if (!tolua_iscppstring(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->displayController = ((  std::string)  tolua_tocppstring(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_setVisible00
static int tolua_dragonBones_luabinding_Bone_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
  bool value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_new00
static int tolua_dragonBones_luabinding_Bone_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Bone* tolua_ret = (Bone*)  Mtolua_new((Bone)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_new00_local
static int tolua_dragonBones_luabinding_Bone_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Bone* tolua_ret = (Bone*)  Mtolua_new((Bone)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Bone */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Bone_delete00
static int tolua_dragonBones_luabinding_Bone_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Bone",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Bone* self = (Bone*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_new00
static int tolua_dragonBones_luabinding_DBObject_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   DBObject* tolua_ret = (DBObject*)  Mtolua_new((DBObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_new00_local
static int tolua_dragonBones_luabinding_DBObject_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   DBObject* tolua_ret = (DBObject*)  Mtolua_new((DBObject)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBObject");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_delete00
static int tolua_dragonBones_luabinding_DBObject_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBObject* self = (DBObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffset of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_getOffset00
static int tolua_dragonBones_luabinding_DBObject_getOffset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBObject* self = (DBObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffset'", NULL);
#endif
  {
   DBTransform* tolua_ret = (DBTransform*)  self->getOffset();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBTransform");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_setVisible00
static int tolua_dragonBones_luabinding_DBObject_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBObject* self = (DBObject*)  tolua_tousertype(tolua_S,1,0);
  bool visible = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(visible);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVisible of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_getVisible00
static int tolua_dragonBones_luabinding_DBObject_getVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBObject* self = (DBObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getArmature of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_getArmature00
static int tolua_dragonBones_luabinding_DBObject_getArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBObject* self = (DBObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->getArmature();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setArmature of class  DBObject */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBObject_setArmature00
static int tolua_dragonBones_luabinding_DBObject_setArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBObject* self = (DBObject*)  tolua_tousertype(tolua_S,1,0);
  Armature* value = ((Armature*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setArmature'", NULL);
#endif
  {
   self->setArmature(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZOrder of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_getZOrder00
static int tolua_dragonBones_luabinding_Slot_getZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZOrder'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setZOrder of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_setZOrder00
static int tolua_dragonBones_luabinding_Slot_setZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
   float value = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setZOrder'", NULL);
#endif
  {
   self->setZOrder(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendMode of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_getBlendMode00
static int tolua_dragonBones_luabinding_Slot_getBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendMode'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getBlendMode();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendMode of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_setBlendMode00
static int tolua_dragonBones_luabinding_Slot_setBlendMode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
   std::string value = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendMode'", NULL);
#endif
  {
   self->setBlendMode(value);
   tolua_pushcppstring(tolua_S,(const char*)value);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendMode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisplay of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_getDisplay00
static int tolua_dragonBones_luabinding_Slot_getDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisplay'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->getDisplay();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayValue of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_setDisplayValue00
static int tolua_dragonBones_luabinding_Slot_setDisplayValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
  Object* value = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayValue'", NULL);
#endif
  {
   self->setDisplayValue(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildArmature of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_getChildArmature00
static int tolua_dragonBones_luabinding_Slot_getChildArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->getChildArmature();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setChildArmature of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_setChildArmature00
static int tolua_dragonBones_luabinding_Slot_setChildArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Armature",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
  Armature* value = ((Armature*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setChildArmature'", NULL);
#endif
  {
   self->setChildArmature(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setChildArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplay of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_setDisplay00
static int tolua_dragonBones_luabinding_Slot_setDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
  Object* display = ((Object*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplay'", NULL);
#endif
  {
   self->setDisplay(display);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeDisplay of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_changeDisplay00
static int tolua_dragonBones_luabinding_Slot_changeDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
  int displayIndex = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeDisplay'", NULL);
#endif
  {
   self->changeDisplay(displayIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVisible of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_setVisible00
static int tolua_dragonBones_luabinding_Slot_setVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
  bool value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVisible'", NULL);
#endif
  {
   self->setVisible(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_delete00
static int tolua_dragonBones_luabinding_Slot_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateVisible of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_updateVisible00
static int tolua_dragonBones_luabinding_Slot_updateVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
  bool value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateVisible'", NULL);
#endif
  {
   self->updateVisible(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateChildArmatureAnimation of class  Slot */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Slot_updateChildArmatureAnimation00
static int tolua_dragonBones_luabinding_Slot_updateChildArmatureAnimation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Slot",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Slot* self = (Slot*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateChildArmatureAnimation'", NULL);
#endif
  {
   self->updateChildArmatureAnimation();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateChildArmatureAnimation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CocosNode */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_CocosNode_new00
static int tolua_dragonBones_luabinding_CocosNode_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CocosNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* n = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  {
   CocosNode* tolua_ret = (CocosNode*)  Mtolua_new((CocosNode)(n));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CocosNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CocosNode */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_CocosNode_new00_local
static int tolua_dragonBones_luabinding_CocosNode_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CocosNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* n = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  {
   CocosNode* tolua_ret = (CocosNode*)  Mtolua_new((CocosNode)(n));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CocosNode");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CocosNode */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_CocosNode_delete00
static int tolua_dragonBones_luabinding_CocosNode_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CocosNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CocosNode* self = (CocosNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNode of class  CocosNode */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_CocosNode_getNode00
static int tolua_dragonBones_luabinding_CocosNode_getNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CocosNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CocosNode* self = (CocosNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNode'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getNode();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
toluafix_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: GetInstance of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_GetInstance00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_GetInstance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Cocos2dxFactory* tolua_ret = (Cocos2dxFactory*)  Cocos2dxFactory::GetInstance();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Cocos2dxFactory");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'GetInstance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_new00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Cocos2dxFactory* tolua_ret = (Cocos2dxFactory*)  Mtolua_new((Cocos2dxFactory)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Cocos2dxFactory");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_new00_local
static int tolua_dragonBones_luabinding_Cocos2dxFactory_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   Cocos2dxFactory* tolua_ret = (Cocos2dxFactory*)  Mtolua_new((Cocos2dxFactory)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Cocos2dxFactory");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_delete00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSkeletonFile of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string skeletonFile = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSkeletonFile'", NULL);
#endif
  {
   self->loadSkeletonFile(skeletonFile);
   tolua_pushcppstring(tolua_S,(const char*)skeletonFile);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadSkeletonFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadSkeletonFile of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile01
static int tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string skeletonFile = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadSkeletonFile'", NULL);
#endif
  {
   self->loadSkeletonFile(skeletonFile,name);
   tolua_pushcppstring(tolua_S,(const char*)skeletonFile);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureAtlasFile of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string textureAtlasFile = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureAtlasFile'", NULL);
#endif
  {
   self->loadTextureAtlasFile(textureAtlasFile);
   tolua_pushcppstring(tolua_S,(const char*)textureAtlasFile);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'loadTextureAtlasFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: loadTextureAtlasFile of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile01
static int tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string textureAtlasFile = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'loadTextureAtlasFile'", NULL);
#endif
  {
   self->loadTextureAtlasFile(textureAtlasFile,name);
   tolua_pushcppstring(tolua_S,(const char*)textureAtlasFile);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSkeletonData of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_getSkeletonData00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_getSkeletonData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSkeletonData'", NULL);
#endif
  {
   SkeletonData* tolua_ret = (SkeletonData*)  self->getSkeletonData(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SkeletonData");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSkeletonData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSkeletonData of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SkeletonData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  SkeletonData* data = ((SkeletonData*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSkeletonData'", NULL);
#endif
  {
   self->addSkeletonData(data);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSkeletonData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSkeletonData of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData01
static int tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SkeletonData",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  SkeletonData* data = ((SkeletonData*)  tolua_tousertype(tolua_S,2,0));
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSkeletonData'", NULL);
#endif
  {
   self->addSkeletonData(data,name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSkeletonData of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_removeSkeletonData00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_removeSkeletonData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSkeletonData'", NULL);
#endif
  {
   self->removeSkeletonData(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSkeletonData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureAtlas of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureAtlas00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureAtlas'", NULL);
#endif
  {
   ITextureAtlas* tolua_ret = (ITextureAtlas*)  self->getTextureAtlas(name);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ITextureAtlas");
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTextureAtlas of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ITextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  ITextureAtlas* textureAtlas = ((ITextureAtlas*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTextureAtlas'", NULL);
#endif
  {
   self->addTextureAtlas(textureAtlas);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addTextureAtlas of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas01
static int tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ITextureAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  ITextureAtlas* textureAtlas = ((ITextureAtlas*)  tolua_tousertype(tolua_S,2,0));
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addTextureAtlas'", NULL);
#endif
  {
   self->addTextureAtlas(textureAtlas,name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeTextureAtlas of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_removeTextureAtlas00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_removeTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string name = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTextureAtlas'", NULL);
#endif
  {
   self->removeTextureAtlas(name);
   tolua_pushcppstring(tolua_S,(const char*)name);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dispose of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_dispose00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_dispose00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  bool disposeData = ((bool)  tolua_toboolean(tolua_S,2,true));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dispose'", NULL);
#endif
  {
   self->dispose(disposeData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dispose'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: buildArmature of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string armatureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->buildArmature(armatureName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
   tolua_pushcppstring(tolua_S,(const char*)armatureName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'buildArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: buildArmature of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature01
static int tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string armatureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->buildArmature(armatureName,animationName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
   tolua_pushcppstring(tolua_S,(const char*)armatureName);
   tolua_pushcppstring(tolua_S,(const char*)animationName);
  }
 }
 return 3;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: buildArmature of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature02
static int tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string armatureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   std::string skeletonName = ((  std::string)  tolua_tocppstring(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->buildArmature(armatureName,animationName,skeletonName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
   tolua_pushcppstring(tolua_S,(const char*)armatureName);
   tolua_pushcppstring(tolua_S,(const char*)animationName);
   tolua_pushcppstring(tolua_S,(const char*)skeletonName);
  }
 }
 return 4;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: buildArmature of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature03
static int tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature03(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string armatureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   std::string skeletonName = ((  std::string)  tolua_tocppstring(tolua_S,4,0));
   std::string textureAtlasName = ((  std::string)  tolua_tocppstring(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->buildArmature(armatureName,animationName,skeletonName,textureAtlasName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
   tolua_pushcppstring(tolua_S,(const char*)armatureName);
   tolua_pushcppstring(tolua_S,(const char*)animationName);
   tolua_pushcppstring(tolua_S,(const char*)skeletonName);
   tolua_pushcppstring(tolua_S,(const char*)textureAtlasName);
  }
 }
 return 5;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature02(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: buildArmature of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature04
static int tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature04(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,4,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,5,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string armatureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string animationName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   std::string skeletonName = ((  std::string)  tolua_tocppstring(tolua_S,4,0));
   std::string textureAtlasName = ((  std::string)  tolua_tocppstring(tolua_S,5,0));
   std::string skinName = ((  std::string)  tolua_tocppstring(tolua_S,6,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'buildArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->buildArmature(armatureName,animationName,skeletonName,textureAtlasName,skinName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
   tolua_pushcppstring(tolua_S,(const char*)armatureName);
   tolua_pushcppstring(tolua_S,(const char*)animationName);
   tolua_pushcppstring(tolua_S,(const char*)skeletonName);
   tolua_pushcppstring(tolua_S,(const char*)textureAtlasName);
   tolua_pushcppstring(tolua_S,(const char*)skinName);
  }
 }
 return 6;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature03(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureDisplay of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string textureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureDisplay'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->getTextureDisplay(textureName);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
   tolua_pushcppstring(tolua_S,(const char*)textureName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureDisplay of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay01
static int tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
   std::string textureName = ((  std::string)  tolua_tocppstring(tolua_S,2,0));
   std::string textureAtlasName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   float pivotX = ((  float)  tolua_tonumber(tolua_S,4,NaN));
   float pivotY = ((  float)  tolua_tonumber(tolua_S,5,NaN));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureDisplay'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->getTextureDisplay(textureName,textureAtlasName,pivotX,pivotY);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
   tolua_pushcppstring(tolua_S,(const char*)textureName);
   tolua_pushcppstring(tolua_S,(const char*)textureAtlasName);
  }
 }
 return 3;
tolua_lerror:
 return tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: generateTextureAtlas of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_generateTextureAtlas00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_generateTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Object",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"TextureAtlasData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  Object* content = ((Object*)  tolua_tousertype(tolua_S,2,0));
  TextureAtlasData* textureAtlasRawData = ((TextureAtlasData*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'generateTextureAtlas'", NULL);
#endif
  {
   ITextureAtlas* tolua_ret = (ITextureAtlas*)  self->generateTextureAtlas(content,textureAtlasRawData);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ITextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'generateTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: generateArmature of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_generateArmature00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_generateArmature00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'generateArmature'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->generateArmature();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'generateArmature'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: generateSlot of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_generateSlot00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_generateSlot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'generateSlot'", NULL);
#endif
  {
   Slot* tolua_ret = (Slot*)  self->generateSlot();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Slot");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'generateSlot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: generateDisplay of class  Cocos2dxFactory */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxFactory_generateDisplay00
static int tolua_dragonBones_luabinding_Cocos2dxFactory_generateDisplay00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxFactory",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ITextureAtlas",0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxFactory* self = (Cocos2dxFactory*)  tolua_tousertype(tolua_S,1,0);
  ITextureAtlas* textureAtlas = ((ITextureAtlas*)  tolua_tousertype(tolua_S,2,0));
   std::string fullName = ((  std::string)  tolua_tocppstring(tolua_S,3,0));
   float pivotX = ((  float)  tolua_tonumber(tolua_S,4,0));
   float pivotY = ((  float)  tolua_tonumber(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'generateDisplay'", NULL);
#endif
  {
   Object* tolua_ret = (Object*)  self->generateDisplay(textureAtlas,fullName,pivotX,pivotY);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Object");
   tolua_pushcppstring(tolua_S,(const char*)fullName);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'generateDisplay'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  Cocos2dxTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_create00
static int tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Cocos2dxTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"TextureAtlasData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextureAtlasData* data = ((TextureAtlasData*)  tolua_tousertype(tolua_S,2,0));
  {
   Cocos2dxTextureAtlas* tolua_ret = (Cocos2dxTextureAtlas*)  Cocos2dxTextureAtlas::create(data);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Cocos2dxTextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  Cocos2dxTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00
static int tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Cocos2dxTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"TextureAtlasData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextureAtlasData* data = ((TextureAtlasData*)  tolua_tousertype(tolua_S,2,0));
  {
   Cocos2dxTextureAtlas* tolua_ret = (Cocos2dxTextureAtlas*)  Mtolua_new((Cocos2dxTextureAtlas)(data));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Cocos2dxTextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  Cocos2dxTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00_local
static int tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"Cocos2dxTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"TextureAtlasData",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  TextureAtlasData* data = ((TextureAtlasData*)  tolua_tousertype(tolua_S,2,0));
  {
   Cocos2dxTextureAtlas* tolua_ret = (Cocos2dxTextureAtlas*)  Mtolua_new((Cocos2dxTextureAtlas)(data));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Cocos2dxTextureAtlas");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  Cocos2dxTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_delete00
static int tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxTextureAtlas* self = (Cocos2dxTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  Cocos2dxTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_getName00
static int tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Cocos2dxTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Cocos2dxTextureAtlas* self = (Cocos2dxTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getName();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionX of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_getPositionX00
static int tolua_dragonBones_luabinding_DBTransform_getPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionX'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getPositionX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionX of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_setPositionX00
static int tolua_dragonBones_luabinding_DBTransform_setPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
   float xx = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionX'", NULL);
#endif
  {
   self->setPositionX(xx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionY of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_getPositionY00
static int tolua_dragonBones_luabinding_DBTransform_getPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionY'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getPositionY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionY of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_setPositionY00
static int tolua_dragonBones_luabinding_DBTransform_setPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
   float yy = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionY'", NULL);
#endif
  {
   self->setPositionY(yy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleX of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_getScaleX00
static int tolua_dragonBones_luabinding_DBTransform_getScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleX'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getScaleX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleX of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_setScaleX00
static int tolua_dragonBones_luabinding_DBTransform_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
   float sx = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleX'", NULL);
#endif
  {
   self->setScaleX(sx);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleY of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_getScaleY00
static int tolua_dragonBones_luabinding_DBTransform_getScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleY'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getScaleY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleY of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_setScaleY00
static int tolua_dragonBones_luabinding_DBTransform_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
   float sy = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleY'", NULL);
#endif
  {
   self->setScaleY(sy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_getRotation00
static int tolua_dragonBones_luabinding_DBTransform_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
    float tolua_ret = (  float)  self->getRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_setRotation00
static int tolua_dragonBones_luabinding_DBTransform_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
   float value = ((  float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_new00
static int tolua_dragonBones_luabinding_DBTransform_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   DBTransform* tolua_ret = (DBTransform*)  Mtolua_new((DBTransform)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBTransform");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_new00_local
static int tolua_dragonBones_luabinding_DBTransform_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   DBTransform* tolua_ret = (DBTransform*)  Mtolua_new((DBTransform)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_new01
static int tolua_dragonBones_luabinding_DBTransform_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DBTransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const DBTransform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const DBTransform* transform = ((const DBTransform*)  tolua_tousertype(tolua_S,2,0));
  {
   DBTransform* tolua_ret = (DBTransform*)  Mtolua_new((DBTransform)(*transform));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBTransform");
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_DBTransform_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_new01_local
static int tolua_dragonBones_luabinding_DBTransform_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"DBTransform",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const DBTransform",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const DBTransform* transform = ((const DBTransform*)  tolua_tousertype(tolua_S,2,0));
  {
   DBTransform* tolua_ret = (DBTransform*)  Mtolua_new((DBTransform)(*transform));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"DBTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_dragonBones_luabinding_DBTransform_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: toString of class  DBTransform */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_DBTransform_toString00
static int tolua_dragonBones_luabinding_DBTransform_toString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"DBTransform",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  DBTransform* self = (DBTransform*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toString'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->toString();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getType of class  Event */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_Event_getType00
static int tolua_dragonBones_luabinding_Event_getType00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Event",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Event* self = (Event*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getType'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getType();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getType'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMovementID of class  AnimationEvent */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_AnimationEvent_getMovementID00
static int tolua_dragonBones_luabinding_AnimationEvent_getMovementID00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"AnimationEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  AnimationEvent* self = (AnimationEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMovementID'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getMovementID();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMovementID'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFrameLabel of class  FrameEvent */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_FrameEvent_getFrameLabel00
static int tolua_dragonBones_luabinding_FrameEvent_getFrameLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FrameEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FrameEvent* self = (FrameEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFrameLabel'", NULL);
#endif
  {
    std::string tolua_ret = (  std::string)  self->getFrameLabel();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFrameLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBone of class  FrameEvent */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_FrameEvent_getBone00
static int tolua_dragonBones_luabinding_FrameEvent_getBone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FrameEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FrameEvent* self = (FrameEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBone'", NULL);
#endif
  {
   Bone* tolua_ret = (Bone*)  self->getBone();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Bone");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getArmture of class  FrameEvent */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_FrameEvent_getArmture00
static int tolua_dragonBones_luabinding_FrameEvent_getArmture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FrameEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FrameEvent* self = (FrameEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getArmture'", NULL);
#endif
  {
   Armature* tolua_ret = (Armature*)  self->getArmture();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Armature");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getArmture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimationState of class  FrameEvent */
#ifndef TOLUA_DISABLE_tolua_dragonBones_luabinding_FrameEvent_getAnimationState00
static int tolua_dragonBones_luabinding_FrameEvent_getAnimationState00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"FrameEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  FrameEvent* self = (FrameEvent*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimationState'", NULL);
#endif
  {
   AnimationState* tolua_ret = (AnimationState*)  self->getAnimationState();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"AnimationState");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimationState'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_dragonBones_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Object","Object","",tolua_collect_Object);
  #else
  tolua_cclass(tolua_S,"Object","Object","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Object");
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_Object_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_Object_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_Object_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_Object_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Animation","Animation","",tolua_collect_Animation);
  #else
  tolua_cclass(tolua_S,"Animation","Animation","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Animation");
   tolua_function(tolua_S,"getMovementID",tolua_dragonBones_luabinding_Animation_getMovementID00);
   tolua_variable(tolua_S,"_lastAnimationState",tolua_get_Animation__lastAnimationState_ptr,tolua_set_Animation__lastAnimationState_ptr);
   tolua_function(tolua_S,"getLastAnimationState",tolua_dragonBones_luabinding_Animation_getLastAnimationState00);
   tolua_function(tolua_S,"getIsPlaying",tolua_dragonBones_luabinding_Animation_getIsPlaying00);
   tolua_function(tolua_S,"getIsComplete",tolua_dragonBones_luabinding_Animation_getIsComplete00);
   tolua_function(tolua_S,"getTimeScale",tolua_dragonBones_luabinding_Animation_getTimeScale00);
   tolua_function(tolua_S,"setTimeScale",tolua_dragonBones_luabinding_Animation_setTimeScale00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_Animation_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_Animation_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_Animation_new00_local);
   tolua_function(tolua_S,"gotoAndPlay",tolua_dragonBones_luabinding_Animation_gotoAndPlay00);
   tolua_function(tolua_S,"gotoAndPlay",tolua_dragonBones_luabinding_Animation_gotoAndPlay01);
   tolua_function(tolua_S,"gotoAndPlay",tolua_dragonBones_luabinding_Animation_gotoAndPlay02);
   tolua_function(tolua_S,"play",tolua_dragonBones_luabinding_Animation_play00);
   tolua_function(tolua_S,"stop",tolua_dragonBones_luabinding_Animation_stop00);
   tolua_function(tolua_S,"getState",tolua_dragonBones_luabinding_Animation_getState00);
   tolua_function(tolua_S,"hasAnimation",tolua_dragonBones_luabinding_Animation_hasAnimation00);
   tolua_function(tolua_S,"advanceTime",tolua_dragonBones_luabinding_Animation_advanceTime00);
   tolua_function(tolua_S,"setActive",tolua_dragonBones_luabinding_Animation_setActive00);
   tolua_function(tolua_S,"addLayer",tolua_dragonBones_luabinding_Animation_addLayer00);
   tolua_function(tolua_S,"addState",tolua_dragonBones_luabinding_Animation_addState00);
   tolua_function(tolua_S,"removeState",tolua_dragonBones_luabinding_Animation_removeState00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"AnimationState","AnimationState","",tolua_collect_AnimationState);
  #else
  tolua_cclass(tolua_S,"AnimationState","AnimationState","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"AnimationState");
   tolua_function(tolua_S,"borrowObject",tolua_dragonBones_luabinding_AnimationState_borrowObject00);
   tolua_function(tolua_S,"returnObject",tolua_dragonBones_luabinding_AnimationState_returnObject00);
   tolua_function(tolua_S,"clear",tolua_dragonBones_luabinding_AnimationState_clear00);
   tolua_function(tolua_S,"getName",tolua_dragonBones_luabinding_AnimationState_getName00);
   tolua_function(tolua_S,"getClip",tolua_dragonBones_luabinding_AnimationState_getClip00);
   tolua_function(tolua_S,"getLoopCount",tolua_dragonBones_luabinding_AnimationState_getLoopCount00);
   tolua_function(tolua_S,"getLoop",tolua_dragonBones_luabinding_AnimationState_getLoop00);
   tolua_function(tolua_S,"getLayer",tolua_dragonBones_luabinding_AnimationState_getLayer00);
   tolua_function(tolua_S,"getIsPlaying",tolua_dragonBones_luabinding_AnimationState_getIsPlaying00);
   tolua_function(tolua_S,"getIsComplete",tolua_dragonBones_luabinding_AnimationState_getIsComplete00);
   tolua_function(tolua_S,"getFadeInTime",tolua_dragonBones_luabinding_AnimationState_getFadeInTime00);
   tolua_function(tolua_S,"getTotalTime",tolua_dragonBones_luabinding_AnimationState_getTotalTime00);
   tolua_function(tolua_S,"getCurrentTime",tolua_dragonBones_luabinding_AnimationState_getCurrentTime00);
   tolua_function(tolua_S,"setCurrentTime",tolua_dragonBones_luabinding_AnimationState_setCurrentTime00);
   tolua_function(tolua_S,"getTimeScale",tolua_dragonBones_luabinding_AnimationState_getTimeScale00);
   tolua_function(tolua_S,"setTimeScale",tolua_dragonBones_luabinding_AnimationState_setTimeScale00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_AnimationState_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_AnimationState_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_AnimationState_new00_local);
   tolua_function(tolua_S,"fadeIn",tolua_dragonBones_luabinding_AnimationState_fadeIn00);
   tolua_function(tolua_S,"fadeOut",tolua_dragonBones_luabinding_AnimationState_fadeOut00);
   tolua_function(tolua_S,"play",tolua_dragonBones_luabinding_AnimationState_play00);
   tolua_function(tolua_S,"stop",tolua_dragonBones_luabinding_AnimationState_stop00);
   tolua_function(tolua_S,"getMixingTransform",tolua_dragonBones_luabinding_AnimationState_getMixingTransform00);
   tolua_function(tolua_S,"addMixingTransform",tolua_dragonBones_luabinding_AnimationState_addMixingTransform00);
   tolua_function(tolua_S,"removeMixingTransform",tolua_dragonBones_luabinding_AnimationState_removeMixingTransform00);
   tolua_function(tolua_S,"removeMixingTransform",tolua_dragonBones_luabinding_AnimationState_removeMixingTransform01);
   tolua_function(tolua_S,"advanceTime",tolua_dragonBones_luabinding_AnimationState_advanceTime00);
   tolua_function(tolua_S,"updateTimelineStates",tolua_dragonBones_luabinding_AnimationState_updateTimelineStates00);
   tolua_function(tolua_S,"addTimelineState",tolua_dragonBones_luabinding_AnimationState_addTimelineState00);
   tolua_function(tolua_S,"removeTimelineState",tolua_dragonBones_luabinding_AnimationState_removeTimelineState00);
   tolua_function(tolua_S,"clearAll",tolua_dragonBones_luabinding_AnimationState_clearAll00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Armature","Armature","IAnimatable",tolua_collect_Armature);
  #else
  tolua_cclass(tolua_S,"Armature","Armature","IAnimatable",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Armature");
   tolua_function(tolua_S,"getDisplay",tolua_dragonBones_luabinding_Armature_getDisplay00);
   tolua_function(tolua_S,"getDisplayNode",tolua_dragonBones_luabinding_Armature_getDisplayNode00);
   tolua_function(tolua_S,"getAnimation",tolua_dragonBones_luabinding_Armature_getAnimation00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_Armature_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_Armature_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_Armature_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_Armature_delete00);
   tolua_function(tolua_S,"dispose",tolua_dragonBones_luabinding_Armature_dispose00);
   tolua_function(tolua_S,"invalidUpdate",tolua_dragonBones_luabinding_Armature_invalidUpdate00);
   tolua_function(tolua_S,"advanceTime",tolua_dragonBones_luabinding_Armature_advanceTime00);
   tolua_function(tolua_S,"getSlot",tolua_dragonBones_luabinding_Armature_getSlot00);
   tolua_function(tolua_S,"getSlotByDisplay",tolua_dragonBones_luabinding_Armature_getSlotByDisplay00);
   tolua_function(tolua_S,"removeSlot",tolua_dragonBones_luabinding_Armature_removeSlot00);
   tolua_function(tolua_S,"removeSlotByName",tolua_dragonBones_luabinding_Armature_removeSlotByName00);
   tolua_function(tolua_S,"getBone",tolua_dragonBones_luabinding_Armature_getBone00);
   tolua_function(tolua_S,"getBoneByDisplay",tolua_dragonBones_luabinding_Armature_getBoneByDisplay00);
   tolua_function(tolua_S,"removeBone",tolua_dragonBones_luabinding_Armature_removeBone00);
   tolua_function(tolua_S,"removeBoneByName",tolua_dragonBones_luabinding_Armature_removeBoneByName00);
   tolua_function(tolua_S,"addChild",tolua_dragonBones_luabinding_Armature_addChild00);
   tolua_function(tolua_S,"addChild",tolua_dragonBones_luabinding_Armature_addChild01);
   tolua_function(tolua_S,"addBone",tolua_dragonBones_luabinding_Armature_addBone00);
   tolua_function(tolua_S,"addBone",tolua_dragonBones_luabinding_Armature_addBone01);
   tolua_function(tolua_S,"updateSlotsZOrder",tolua_dragonBones_luabinding_Armature_updateSlotsZOrder00);
   tolua_function(tolua_S,"addDBObject",tolua_dragonBones_luabinding_Armature_addDBObject00);
   tolua_function(tolua_S,"removeDBObject",tolua_dragonBones_luabinding_Armature_removeDBObject00);
   tolua_function(tolua_S,"arriveAtFrame",tolua_dragonBones_luabinding_Armature_arriveAtFrame00);
   tolua_function(tolua_S,"sortSlot",tolua_dragonBones_luabinding_Armature_sortSlot00);
   tolua_function(tolua_S,"registerScriptHandler",tolua_dragonBones_luabinding_Armature_registerScriptHandler00);
   tolua_function(tolua_S,"unregisterScriptHandler",tolua_dragonBones_luabinding_Armature_unregisterScriptHandler00);
   tolua_function(tolua_S,"getScriptHandler",tolua_dragonBones_luabinding_Armature_getScriptHandler00);
   tolua_variable(tolua_S,"__EventDispatcher__",tolua_get_Armature___EventDispatcher__,NULL);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Bone","Bone","DBObject",tolua_collect_Bone);
  #else
  tolua_cclass(tolua_S,"Bone","Bone","DBObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Bone");
   tolua_function(tolua_S,"getChildArmature",tolua_dragonBones_luabinding_Bone_getChildArmature00);
   tolua_function(tolua_S,"getDisplay",tolua_dragonBones_luabinding_Bone_getDisplay00);
   tolua_function(tolua_S,"getDisplayNode",tolua_dragonBones_luabinding_Bone_getDisplayNode00);
   tolua_function(tolua_S,"setDisplay",tolua_dragonBones_luabinding_Bone_setDisplay00);
   tolua_variable(tolua_S,"displayController",tolua_get_Bone_displayController,tolua_set_Bone_displayController);
   tolua_function(tolua_S,"setVisible",tolua_dragonBones_luabinding_Bone_setVisible00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_Bone_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_Bone_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_Bone_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_Bone_delete00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"DBObject","DBObject","",tolua_collect_DBObject);
  #else
  tolua_cclass(tolua_S,"DBObject","DBObject","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"DBObject");
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_DBObject_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_DBObject_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_DBObject_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_DBObject_delete00);
   tolua_function(tolua_S,"getOffset",tolua_dragonBones_luabinding_DBObject_getOffset00);
   tolua_function(tolua_S,"setVisible",tolua_dragonBones_luabinding_DBObject_setVisible00);
   tolua_function(tolua_S,"getVisible",tolua_dragonBones_luabinding_DBObject_getVisible00);
   tolua_function(tolua_S,"getArmature",tolua_dragonBones_luabinding_DBObject_getArmature00);
   tolua_function(tolua_S,"setArmature",tolua_dragonBones_luabinding_DBObject_setArmature00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Slot","Slot","DBObject",tolua_collect_Slot);
  #else
  tolua_cclass(tolua_S,"Slot","Slot","DBObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Slot");
   tolua_function(tolua_S,"getZOrder",tolua_dragonBones_luabinding_Slot_getZOrder00);
   tolua_function(tolua_S,"setZOrder",tolua_dragonBones_luabinding_Slot_setZOrder00);
   tolua_function(tolua_S,"getBlendMode",tolua_dragonBones_luabinding_Slot_getBlendMode00);
   tolua_function(tolua_S,"setBlendMode",tolua_dragonBones_luabinding_Slot_setBlendMode00);
   tolua_function(tolua_S,"getDisplay",tolua_dragonBones_luabinding_Slot_getDisplay00);
   tolua_function(tolua_S,"setDisplayValue",tolua_dragonBones_luabinding_Slot_setDisplayValue00);
   tolua_function(tolua_S,"getChildArmature",tolua_dragonBones_luabinding_Slot_getChildArmature00);
   tolua_function(tolua_S,"setChildArmature",tolua_dragonBones_luabinding_Slot_setChildArmature00);
   tolua_function(tolua_S,"setDisplay",tolua_dragonBones_luabinding_Slot_setDisplay00);
   tolua_function(tolua_S,"changeDisplay",tolua_dragonBones_luabinding_Slot_changeDisplay00);
   tolua_function(tolua_S,"setVisible",tolua_dragonBones_luabinding_Slot_setVisible00);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_Slot_delete00);
   tolua_function(tolua_S,"updateVisible",tolua_dragonBones_luabinding_Slot_updateVisible00);
   tolua_function(tolua_S,"updateChildArmatureAnimation",tolua_dragonBones_luabinding_Slot_updateChildArmatureAnimation00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"PRESERVE_WHITESPACE",PRESERVE_WHITESPACE);
  tolua_constant(tolua_S,"COLLAPSE_WHITESPACE",COLLAPSE_WHITESPACE);
  tolua_constant(tolua_S,"XML_NO_ERROR",XML_NO_ERROR);
  tolua_constant(tolua_S,"XML_SUCCESS",XML_SUCCESS);
  tolua_constant(tolua_S,"XML_NO_ATTRIBUTE",XML_NO_ATTRIBUTE);
  tolua_constant(tolua_S,"XML_WRONG_ATTRIBUTE_TYPE",XML_WRONG_ATTRIBUTE_TYPE);
  tolua_constant(tolua_S,"XML_ERROR_FILE_NOT_FOUND",XML_ERROR_FILE_NOT_FOUND);
  tolua_constant(tolua_S,"XML_ERROR_FILE_COULD_NOT_BE_OPENED",XML_ERROR_FILE_COULD_NOT_BE_OPENED);
  tolua_constant(tolua_S,"XML_ERROR_FILE_READ_ERROR",XML_ERROR_FILE_READ_ERROR);
  tolua_constant(tolua_S,"XML_ERROR_ELEMENT_MISMATCH",XML_ERROR_ELEMENT_MISMATCH);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_ELEMENT",XML_ERROR_PARSING_ELEMENT);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_ATTRIBUTE",XML_ERROR_PARSING_ATTRIBUTE);
  tolua_constant(tolua_S,"XML_ERROR_IDENTIFYING_TAG",XML_ERROR_IDENTIFYING_TAG);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_TEXT",XML_ERROR_PARSING_TEXT);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_CDATA",XML_ERROR_PARSING_CDATA);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_COMMENT",XML_ERROR_PARSING_COMMENT);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_DECLARATION",XML_ERROR_PARSING_DECLARATION);
  tolua_constant(tolua_S,"XML_ERROR_PARSING_UNKNOWN",XML_ERROR_PARSING_UNKNOWN);
  tolua_constant(tolua_S,"XML_ERROR_EMPTY_DOCUMENT",XML_ERROR_EMPTY_DOCUMENT);
  tolua_constant(tolua_S,"XML_ERROR_MISMATCHED_ELEMENT",XML_ERROR_MISMATCHED_ELEMENT);
  tolua_constant(tolua_S,"XML_ERROR_PARSING",XML_ERROR_PARSING);
  tolua_constant(tolua_S,"XML_CAN_NOT_CONVERT_TEXT",XML_CAN_NOT_CONVERT_TEXT);
  tolua_constant(tolua_S,"XML_NO_TEXT_NODE",XML_NO_TEXT_NODE);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CocosNode","CocosNode","Object",tolua_collect_CocosNode);
  #else
  tolua_cclass(tolua_S,"CocosNode","CocosNode","Object",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CocosNode");
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_CocosNode_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_CocosNode_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_CocosNode_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_CocosNode_delete00);
   tolua_function(tolua_S,"getNode",tolua_dragonBones_luabinding_CocosNode_getNode00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Cocos2dxFactory","Cocos2dxFactory","BaseFactory",tolua_collect_Cocos2dxFactory);
  #else
  tolua_cclass(tolua_S,"Cocos2dxFactory","Cocos2dxFactory","BaseFactory",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Cocos2dxFactory");
   tolua_function(tolua_S,"GetInstance",tolua_dragonBones_luabinding_Cocos2dxFactory_GetInstance00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_Cocos2dxFactory_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_Cocos2dxFactory_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_Cocos2dxFactory_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_Cocos2dxFactory_delete00);
   tolua_function(tolua_S,"loadSkeletonFile",tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile00);
   tolua_function(tolua_S,"loadSkeletonFile",tolua_dragonBones_luabinding_Cocos2dxFactory_loadSkeletonFile01);
   tolua_function(tolua_S,"loadTextureAtlasFile",tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile00);
   tolua_function(tolua_S,"loadTextureAtlasFile",tolua_dragonBones_luabinding_Cocos2dxFactory_loadTextureAtlasFile01);
   tolua_function(tolua_S,"getSkeletonData",tolua_dragonBones_luabinding_Cocos2dxFactory_getSkeletonData00);
   tolua_function(tolua_S,"addSkeletonData",tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData00);
   tolua_function(tolua_S,"addSkeletonData",tolua_dragonBones_luabinding_Cocos2dxFactory_addSkeletonData01);
   tolua_function(tolua_S,"removeSkeletonData",tolua_dragonBones_luabinding_Cocos2dxFactory_removeSkeletonData00);
   tolua_function(tolua_S,"getTextureAtlas",tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureAtlas00);
   tolua_function(tolua_S,"addTextureAtlas",tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas00);
   tolua_function(tolua_S,"addTextureAtlas",tolua_dragonBones_luabinding_Cocos2dxFactory_addTextureAtlas01);
   tolua_function(tolua_S,"removeTextureAtlas",tolua_dragonBones_luabinding_Cocos2dxFactory_removeTextureAtlas00);
   tolua_function(tolua_S,"dispose",tolua_dragonBones_luabinding_Cocos2dxFactory_dispose00);
   tolua_function(tolua_S,"buildArmature",tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature00);
   tolua_function(tolua_S,"buildArmature",tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature01);
   tolua_function(tolua_S,"buildArmature",tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature02);
   tolua_function(tolua_S,"buildArmature",tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature03);
   tolua_function(tolua_S,"buildArmature",tolua_dragonBones_luabinding_Cocos2dxFactory_buildArmature04);
   tolua_function(tolua_S,"getTextureDisplay",tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay00);
   tolua_function(tolua_S,"getTextureDisplay",tolua_dragonBones_luabinding_Cocos2dxFactory_getTextureDisplay01);
   tolua_function(tolua_S,"generateTextureAtlas",tolua_dragonBones_luabinding_Cocos2dxFactory_generateTextureAtlas00);
   tolua_function(tolua_S,"generateArmature",tolua_dragonBones_luabinding_Cocos2dxFactory_generateArmature00);
   tolua_function(tolua_S,"generateSlot",tolua_dragonBones_luabinding_Cocos2dxFactory_generateSlot00);
   tolua_function(tolua_S,"generateDisplay",tolua_dragonBones_luabinding_Cocos2dxFactory_generateDisplay00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"Cocos2dxTextureAtlas","Cocos2dxTextureAtlas","ITextureAtlas",tolua_collect_Cocos2dxTextureAtlas);
  #else
  tolua_cclass(tolua_S,"Cocos2dxTextureAtlas","Cocos2dxTextureAtlas","ITextureAtlas",NULL);
  #endif
  tolua_beginmodule(tolua_S,"Cocos2dxTextureAtlas");
   tolua_function(tolua_S,"create",tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_create00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_new00_local);
   tolua_function(tolua_S,"delete",tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_delete00);
   tolua_function(tolua_S,"getName",tolua_dragonBones_luabinding_Cocos2dxTextureAtlas_getName00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"DBTransform","DBTransform","",tolua_collect_DBTransform);
  #else
  tolua_cclass(tolua_S,"DBTransform","DBTransform","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"DBTransform");
   tolua_function(tolua_S,"getPositionX",tolua_dragonBones_luabinding_DBTransform_getPositionX00);
   tolua_function(tolua_S,"setPositionX",tolua_dragonBones_luabinding_DBTransform_setPositionX00);
   tolua_function(tolua_S,"getPositionY",tolua_dragonBones_luabinding_DBTransform_getPositionY00);
   tolua_function(tolua_S,"setPositionY",tolua_dragonBones_luabinding_DBTransform_setPositionY00);
   tolua_function(tolua_S,"getScaleX",tolua_dragonBones_luabinding_DBTransform_getScaleX00);
   tolua_function(tolua_S,"setScaleX",tolua_dragonBones_luabinding_DBTransform_setScaleX00);
   tolua_function(tolua_S,"getScaleY",tolua_dragonBones_luabinding_DBTransform_getScaleY00);
   tolua_function(tolua_S,"setScaleY",tolua_dragonBones_luabinding_DBTransform_setScaleY00);
   tolua_function(tolua_S,"getRotation",tolua_dragonBones_luabinding_DBTransform_getRotation00);
   tolua_function(tolua_S,"setRotation",tolua_dragonBones_luabinding_DBTransform_setRotation00);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_DBTransform_new00);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_DBTransform_new00_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_DBTransform_new00_local);
   tolua_function(tolua_S,"new",tolua_dragonBones_luabinding_DBTransform_new01);
   tolua_function(tolua_S,"new_local",tolua_dragonBones_luabinding_DBTransform_new01_local);
   tolua_function(tolua_S,".call",tolua_dragonBones_luabinding_DBTransform_new01_local);
   tolua_function(tolua_S,"toString",tolua_dragonBones_luabinding_DBTransform_toString00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"Event","Event","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"Event");
   tolua_function(tolua_S,"getType",tolua_dragonBones_luabinding_Event_getType00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"AnimationEvent","AnimationEvent","Event",NULL);
  tolua_beginmodule(tolua_S,"AnimationEvent");
   tolua_function(tolua_S,"getMovementID",tolua_dragonBones_luabinding_AnimationEvent_getMovementID00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"FrameEvent","FrameEvent","Event",NULL);
  tolua_beginmodule(tolua_S,"FrameEvent");
   tolua_function(tolua_S,"getFrameLabel",tolua_dragonBones_luabinding_FrameEvent_getFrameLabel00);
   tolua_function(tolua_S,"getBone",tolua_dragonBones_luabinding_FrameEvent_getBone00);
   tolua_function(tolua_S,"getArmture",tolua_dragonBones_luabinding_FrameEvent_getArmture00);
   tolua_function(tolua_S,"getAnimationState",tolua_dragonBones_luabinding_FrameEvent_getAnimationState00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_dragonBones_luabinding (lua_State* tolua_S) {
 return tolua_dragonBones_luabinding_open(tolua_S);
};
#endif

