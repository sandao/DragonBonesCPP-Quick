#!/usr/bin/env bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd "$DIR"
OUTPUT_DIR="$DIR"
MAKE_LUABINDING="$QUICK_COCOS2DX_ROOT"/bin/compile_luabinding.sh
$MAKE_LUABINDING -E CCOBJECTS=Cocos2dxAtlasNode -d "$OUTPUT_DIR" dragonBones_luabinding.tolua
echo ""
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
echo ""