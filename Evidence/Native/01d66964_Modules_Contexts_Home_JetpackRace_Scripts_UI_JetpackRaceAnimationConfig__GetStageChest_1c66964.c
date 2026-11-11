/* IL2CPP: Modules.Contexts.Home.JetpackRace.Scripts.UI.JetpackRaceAnimationConfig$$GetStageChest
UnityEngine_Sprite_o* Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceAnimationConfig__GetStageChest (Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceAnimationConfig_o* __this, int32_t stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.Home.JetpackRace.Scripts.UI.JetpackRaceAnimationConfig$$GetStageChest
   UnityEngine_Sprite_o*
   Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceAnimationConfig__GetStageChest
   (Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceAnimationConfig_o* __this, int32_t
   stage, const MethodInfo* method); */

undefined8
Modules_Contexts_Home_JetpackRace_Scripts_UI_JetpackRaceAnimationConfig__GetStageChest_1c66964
          (long param_1,uint param_2)

{
  long lVar1;
  
  if ((bRam0000000005c273cf & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_057e9700);
    FUN_012d0dc8(PTR_DAT_057d3a18);
    bRam0000000005c273cf = 1;
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if ((int)param_2 < 0) {
    if (lVar1 == 0) goto LAB_01d669dc;
    param_2 = 0;
  }
  else {
    if (lVar1 == 0) {
LAB_01d669dc:
                    /* WARNING: Subroutine does not return */
      FUN_012d0ef0();
    }
    if (*(int *)(lVar1 + 0x18) <= (int)param_2) {
      param_2 = 0;
    }
  }
  if (*(uint *)(lVar1 + 0x18) <= param_2) {
    System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_26a52c4
              (0,param_2,*(undefined8 *)PTR_DAT_057d3a18);
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef0();
  }
  if (*(uint *)(lVar1 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012d0ef8();
  }
  return *(undefined8 *)(lVar1 + (long)(int)param_2 * 8 + 0x20);
}

