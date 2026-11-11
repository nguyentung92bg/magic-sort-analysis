/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$AddMove
void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddMove (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this, Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Modules.Contexts.GamePlay.Levels.Scripts.LevelStats$$AddMove
   void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddMove
   (Modules_Contexts_GamePlay_Levels_Scripts_LevelStats_o* __this,
   Modules_Contexts_GamePlay_Systems_Scripts_InputSystemNS_Selection_o* selection, const MethodInfo*
   method); */

void Modules_Contexts_GamePlay_Levels_Scripts_LevelStats__AddMove_1f1a528(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((bRam0000000005c2864e & 1) == 0) {
    FUN_012d0dc8(PTR_DAT_0580e588);
    bRam0000000005c2864e = 1;
  }
  if ((param_2 != 0) && (lVar7 = *(long *)(param_2 + 0x28), lVar7 != 0)) {
    uVar3 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleLinearIndexFromTopLeftToRightDown_2f6bd9c
                      (lVar7,*(undefined8 *)(param_2 + 0x10),0);
    uVar4 = Modules_Contexts_GamePlay_Board_Common_Scripts_BottleCollection__GetBottleLinearIndexFromTopLeftToRightDown_2f6bd9c
                      (lVar7,*(undefined8 *)(param_2 + 0x18),0);
    puVar2 = PTR_DAT_0580e588;
    lVar7 = *(long *)(param_1 + 0x100);
    if (lVar7 != 0) {
      lVar5 = *(long *)(lVar7 + 0x10);
      lVar6 = *(long *)PTR_DAT_0580e588;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar7,uVar3);
          lVar7 = *(long *)(param_1 + 0x100);
          if (lVar7 == 0) goto LAB_0201a684;
        }
        lVar5 = *(long *)(lVar7 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
          }
          else {
            (**(code **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x58) + 8))
                      (lVar7,uVar4);
          }
          uVar3 = UnityEngine_Time__get_realtimeSinceStartup_40862bc(0);
          *(undefined4 *)(param_1 + 0x108) = uVar3;
          if (*(char *)(param_1 + 0x10c) == '\0') {
            *(undefined1 *)(param_1 + 0x10c) = 1;
          }
          return;
        }
      }
    }
  }
LAB_0201a684:
                    /* WARNING: Subroutine does not return */
  FUN_012d0ef0();
}

