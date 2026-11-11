/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TextureUtil$$LoadPNG
UnityEngine_Texture2D_o* Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__LoadPNG (System_String_o* filePath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.LevelEditor.WaterSort.UI.Scripts.TextureUtil$$LoadPNG
   UnityEngine_Texture2D_o* Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__LoadPNG
   (System_String_o* filePath, const MethodInfo* method); */

long Modules_LevelEditor_WaterSort_UI_Scripts_TextureUtil__LoadPNG_37a0024(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((bRam0000000005c33dd5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057d6d60);
    bRam0000000005c33dd5 = 1;
  }
  uVar2 = System_IO_File__Exists_3484a00(param_1,0);
  puVar1 = PTR_DAT_057d6d60;
  lVar4 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = System_IO_File__ReadAllBytes_3485694(param_1,0);
    lVar4 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    UnityEngine_Texture2D___ctor_407c098(lVar4,2,2,0);
    UnityEngine_ImageConversion__LoadImage_3b01ef0(lVar4,uVar3,0);
    UnityEngine_Texture__set_filterMode_407a81c(lVar4,0,0);
  }
  return lVar4;
}

