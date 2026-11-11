/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TextureUtil$$ConvertToSprite
UnityEngine_Sprite_o* Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__ConvertToSprite (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TextureUtil$$ConvertToSprite
   UnityEngine_Sprite_o* Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__ConvertToSprite
   (UnityEngine_Texture2D_o* texture, const MethodInfo* method); */

void Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__ConvertToSprite_37a00d4(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    iVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
    uStack_30 = 0;
    uStack_28 = 0;
    UnityEngine_Rect___ctor_383cbd8(0,0,(float)iVar1,(float)iVar2,&uStack_30,0);
    if (cRam0000000005c2345c == '\0') {
      FUN_012d0dc8(PTR_DAT_05803150);
      cRam0000000005c2345c = '\x01';
    }
    UnityEngine_Sprite__Create_409701c
              ((undefined4)uStack_30,uStack_30._4_4_,(undefined4)uStack_28,uStack_28._4_4_,
               **(undefined4 **)(*(long *)PTR_DAT_05803150 + 0xb8),
               (*(undefined4 **)(*(long *)PTR_DAT_05803150 + 0xb8))[1],param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

