/* IL2CPP: Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$TryGetRedSnitchPerformInterval
bool Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__TryGetRedSnitchPerformInterval (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t itemType, float* interval, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP:
   Modules.Contexts.GamePlay.Snitch.Scripts.SnitchAnimationConfig$$TryGetRedSnitchPerformInterval
   bool 
   Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__TryGetRedSnitchPerformInterval
   (Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig_o* __this, int32_t itemType,
   float* interval, const MethodInfo* method); */

bool Modules_Contexts_GamePlay_Snitch_Scripts_SnitchAnimationConfig__TryGetRedSnitchPerformInterval_20f94f0
               (long param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar1 = PTR_DAT_057ed718;
  if ((bRam0000000005c29796 & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0578d750);
    FUN_012d0dc8(PTR_DAT_057d6fd8);
    FUN_012d0dc8(PTR_DAT_05794f60);
    FUN_012d0dc8(PTR_DAT_057ed718);
    bRam0000000005c29796 = 1;
  }
  lVar2 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_057d6fd8;
  if (lVar2 != 0) {
    System_Object___ctor_23dfe5c(lVar2,0);
    *(undefined4 *)(lVar2 + 0x10) = param_2;
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = thunk_FUN_01320e48(*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_0578d750;
    if (lVar3 != 0) {
      System_Func_object__bool____ctor_338137c(lVar3,lVar2,*(undefined8 *)PTR_DAT_05794f60,0);
      lVar2 = System_Linq_Enumerable__FirstOrDefault_object__24215ac
                        (uVar4,lVar3,*(undefined8 *)puVar1);
      if (lVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(lVar2 + 0x14);
      }
      *param_3 = uVar5;
      return lVar2 != 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

