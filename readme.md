说明：
这个是DragonBones官方的CPP，我针对quick做了微量的修改，可以直接集成到你的quick项目中！
此版本基于quick2.2，使用时直接将DragonBones文件夹拖入项目添加为引用即可！
同时替换cocos2d中的CCTexture为此库中的两个文件（修改不会影响cocos2dx其他功能，实际上是修复了一个bug）
使用tolua导出了大部分接口，如有需要其他接口的，可自行修改dragonBones_luabinding.tolua
文件，并运行目录下的build.sh，生成新的luabinding文件。