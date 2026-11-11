/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$GetFileName
System_String_o* Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName (System_String_o* seed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.Serialization.LevelModelUtils$$GetFileName
   System_String_o*
   Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName
   (System_String_o* seed, const MethodInfo* method); */

long Modules_Contexts_GamePlay_Levels_Scripts_Serialization_LevelModelUtils__GetFileName_1f1bad4
               (long param_1)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  puVar3 = PTR_DAT_057f2cd0;
  if ((bRam0000000005c28655 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057f2cd0);
    bRam0000000005c28655 = 1;
  }
  lVar5 = *(long *)puVar3;
  if ((bRam0000000005c283d5 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057c9ca0,lVar5,0);
    bRam0000000005c283d5 = 1;
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x10) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar6) {
    param_1 = lVar5;
    if (bVar2) {
      param_1 = **(long **)(*(long *)PTR_DAT_057c9ca0 + 0xb8);
    }
  }
  else if (!bVar2) {
    if ((param_1 == 0) || (lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    iVar1 = *(int *)(param_1 + 0x10);
    lVar4 = thunk_FUN_0131a210(*(int *)(lVar5 + 0x10) + iVar1);
    System_String__FillStringChecked_1ed0ed0(lVar4,0,param_1);
    System_String__FillStringChecked_1ed0ed0(lVar4,iVar1,lVar5);
    param_1 = lVar4;
  }
  return param_1;
}

