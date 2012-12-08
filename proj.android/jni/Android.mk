LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := game_shared

LOCAL_MODULE_FILENAME := libgame

LOCAL_SRC_FILES := hellocpp/main.cpp \
                   ../../Classes/AppDelegate.cpp \
                   ../../Classes/Scenes/ParentScene/ParentScene.cpp \
                   ../../Classes/Scenes/ParentScene/ChildLayers/DisplayLayer.cpp \
                   ../../Classes/Scenes/ParentScene/ChildLayers/InputLayer.cpp

LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../Classes \
					$(LOCAL_PATH)/../../Classes/Scenes/ParentScene \
					$(LOCAL_PATH)/../../Classes/Scenes/ParentScene/ChildLayers

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static cocosdenshion_static cocos_extension_static
            
include $(BUILD_SHARED_LIBRARY)

$(call import-module,CocosDenshion/android) \
$(call import-module,cocos2dx) \
$(call import-module,extensions)
